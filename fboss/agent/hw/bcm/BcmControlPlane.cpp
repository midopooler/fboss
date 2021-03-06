/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#include "fboss/agent/hw/bcm/BcmControlPlane.h"

#include "fboss/agent/hw/bcm/BcmControlPlaneQueueManager.h"
#include "fboss/agent/hw/bcm/BcmError.h"
#include "fboss/agent/hw/bcm/BcmQosPolicyTable.h"
#include "fboss/agent/hw/bcm/BcmSwitch.h"
#include "fboss/agent/state/PortQueue.h"

#include <thrift/lib/cpp/util/EnumUtils.h>

extern "C" {
#include <bcm/qos.h>
#include <bcm/types.h>
}

using facebook::stats::MonotonicCounter;
using std::chrono::duration_cast;
using std::chrono::seconds;
using std::chrono::system_clock;

constexpr auto kCPUName = "cpu";

namespace facebook::fboss {

bcm_rx_reasons_t configRxReasonToBcmReasons(cfg::PacketRxReason reason) {
  switch (reason) {
    case cfg::PacketRxReason::UNMATCHED:
      return RxUtils::genReasons();
    case cfg::PacketRxReason::ARP:
      return RxUtils::genReasons(bcmRxReasonArp);
    case cfg::PacketRxReason::DHCP:
      return RxUtils::genReasons(bcmRxReasonDhcp);
    case cfg::PacketRxReason::BPDU:
      return RxUtils::genReasons(bcmRxReasonBpdu);
    case cfg::PacketRxReason::L3_SLOW_PATH:
      return RxUtils::genReasons(bcmRxReasonL3Slowpath);
    case cfg::PacketRxReason::L3_DEST_MISS:
      return RxUtils::genReasons(bcmRxReasonL3DestMiss);
    case cfg::PacketRxReason::TTL_1:
      return RxUtils::genReasons(bcmRxReasonTtl1);
    case cfg::PacketRxReason::CPU_IS_NHOP:
      return RxUtils::genReasons(bcmRxReasonNhop);
    case cfg::PacketRxReason::L3_MTU_ERROR:
      return RxUtils::genReasons(bcmRxReasonL3MtuFail);
    case cfg::PacketRxReason::NDP:
    case cfg::PacketRxReason::LLDP:
    case cfg::PacketRxReason::ARP_RESPONSE:
    case cfg::PacketRxReason::BGP:
    case cfg::PacketRxReason::BGPV6:
    case cfg::PacketRxReason::LACP:
      break;
  }
  throw FbossError(
      "Unsupported config reason ", apache::thrift::util::enumName(reason));
}

cfg::PacketRxReason bcmReasonsToConfigReason(bcm_rx_reasons_t reasons) {
  int count = 0;
  BCM_RX_REASON_COUNT(reasons, count);
  CHECK_LE(count, 1); // we only set reasons one at a time right now
  if (count == 0) {
    return cfg::PacketRxReason::UNMATCHED;
  } else if (BCM_RX_REASON_GET(reasons, bcmRxReasonArp)) {
    return cfg::PacketRxReason::ARP;
  } else if (BCM_RX_REASON_GET(reasons, bcmRxReasonDhcp)) {
    return cfg::PacketRxReason::DHCP;
  } else if (BCM_RX_REASON_GET(reasons, bcmRxReasonBpdu)) {
    return cfg::PacketRxReason::BPDU;
  } else if (BCM_RX_REASON_GET(reasons, bcmRxReasonL3Slowpath)) {
    return cfg::PacketRxReason::L3_SLOW_PATH;
  } else if (BCM_RX_REASON_GET(reasons, bcmRxReasonL3DestMiss)) {
    return cfg::PacketRxReason::L3_DEST_MISS;
  } else if (BCM_RX_REASON_GET(reasons, bcmRxReasonTtl1)) {
    return cfg::PacketRxReason::TTL_1;
  } else if (BCM_RX_REASON_GET(reasons, bcmRxReasonNhop)) {
    return cfg::PacketRxReason::CPU_IS_NHOP;
  } else if (BCM_RX_REASON_GET(reasons, bcmRxReasonL3MtuFail)) {
    return cfg::PacketRxReason::L3_MTU_ERROR;
  } else {
    throw FbossError(
        "Unsupported bcm reasons ", RxUtils::describeReasons(reasons));
  }
}

BcmControlPlane::BcmControlPlane(BcmSwitch* hw)
    : hw_(hw),
      gport_(BCM_GPORT_LOCAL_CPU),
      queueManager_(new BcmControlPlaneQueueManager(hw_, kCPUName, gport_)) {
  int rv;

  rv = bcm_rx_queue_max_get(hw_->getUnit(), &maxCPUQueue_);
  bcmCheckError(rv, "failed to get max CPU cos queue number");

  rv = bcm_rx_cosq_mapping_size_get(hw_->getUnit(), &maxCPUMappings_);
  bcmCheckError(rv, "failed to get max CPU cos queue mappings");
}

void BcmControlPlane::setupQueue(const PortQueue& queue) {
  queueManager_->program(queue);
}

void BcmControlPlane::setupRxReasonToQueue(
    const ControlPlane::RxReasonToQueue& reasonToQueue) {
  for (int index = 0; index < reasonToQueue.size(); index++) {
    const auto newEntry = reasonToQueue[index];
    writeReasonToQueueEntry(index, newEntry);
  }
}

ControlPlane::RxReasonToQueue BcmControlPlane::getRxReasonToQueue() const {
  ControlPlane::RxReasonToQueue reasonToQueue;
  for (int index = 0; index < maxCPUMappings_; ++index) {
    if (const auto entry = readReasonToQueueEntry(index)) {
      reasonToQueue.push_back(*entry);
    } else {
      break;
    }
  }
  return reasonToQueue;
}

void BcmControlPlane::writeReasonToQueueEntry(
    int index,
    cfg::PacketRxReasonToQueue entry) {
  if (entry.queueId < 0 || entry.queueId > maxCPUQueue_) {
    throw FbossError(
        "Invalud cosq number ", entry.queueId, "; max is ", maxCPUQueue_);
  }
  const auto bcmReason = configRxReasonToBcmReasons(entry.rxReason);
  const int rv = bcm_rx_cosq_mapping_set(
      hw_->getUnit(),
      index,
      bcmReason,
      bcmReason,
      0,
      0, // internal priority match & mask
      0,
      0, // packet type match & mask
      entry.queueId);
  bcmCheckError(
      rv,
      "failed to set set CPU cosq mapping for reasons ",
      RxUtils::describeReasons(bcmReason));
}

std::optional<cfg::PacketRxReasonToQueue>
BcmControlPlane::readReasonToQueueEntry(int index) const {
  uint8_t prio, prioMask;
  uint32_t packetType, packetTypeMask;
  bcm_rx_reasons_t bcmReasons, reasonsMask;
  bcm_cos_queue_t queue;
  const int rv = bcm_rx_cosq_mapping_get(
      hw_->getUnit(),
      index,
      &bcmReasons,
      &reasonsMask,
      &prio,
      &prioMask,
      &packetType,
      &packetTypeMask,
      &queue);
  if (BCM_FAILURE(rv)) {
    return std::nullopt;
  }
  return ControlPlane::makeRxReasonToQueueEntry(
      bcmReasonsToConfigReason(bcmReasons), queue);
}

void BcmControlPlane::deleteReasonToQueueEntry(int index) {
  const int rv = bcm_rx_cosq_mapping_delete(hw_->getUnit(), index);
  bcmCheckError(rv, "failed to delete CPU cosq mapping for index", index);
}

void BcmControlPlane::setupIngressQosPolicy(
    const std::optional<std::string>& qosPolicyName) {
  int ingressHandle = 0; // 0 means 'detach the current policy'
  int egressHandle = -1; // -1 means do not change the current policy
  if (qosPolicyName) {
    auto qosPolicy = hw_->getQosPolicyTable()->getQosPolicy(*qosPolicyName);
    ingressHandle = qosPolicy->getHandle(BcmQosMap::Type::IP_INGRESS);
  }
  auto rv =
      bcm_qos_port_map_set(hw_->getUnit(), 0, ingressHandle, egressHandle);
  bcmCheckError(rv, "failed to set the qos map on CPU port");
}

void BcmControlPlane::updateQueueCounters() {
  auto now = duration_cast<seconds>(system_clock::now().time_since_epoch());
  queueManager_->updateQueueStats(now);
}

} // namespace facebook::fboss
