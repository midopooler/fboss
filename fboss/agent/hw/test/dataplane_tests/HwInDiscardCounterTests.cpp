/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "fboss/agent/hw/test/HwLinkStateDependentTest.h"

#include "fboss/agent/Platform.h"
#include "fboss/agent/hw/test/ConfigFactory.h"
#include "fboss/agent/hw/test/HwTestPacketUtils.h"
#include "fboss/agent/test/EcmpSetupHelper.h"

#include "fboss/agent/state/Interface.h"
#include "fboss/agent/state/SwitchState.h"

using folly::IPAddress;
using folly::IPAddressV6;
using std::string;

namespace facebook::fboss {

class HwInDiscardsCounterTest : public HwLinkStateDependentTest {
 private:
  cfg::SwitchConfig initialConfig() const override {
    auto cfg = utility::onePortPerVlanConfig(
        getHwSwitch(), masterLogicalPortIds(), cfg::PortLoopbackMode::MAC);
    cfg.staticRoutesToNull_ref()->resize(2);
    *cfg.staticRoutesToNull[0].routerID_ref() =
        *cfg.staticRoutesToNull[1].routerID_ref() = 0;
    *cfg.staticRoutesToNull[0].prefix_ref() = "0.0.0.0/0";
    *cfg.staticRoutesToNull[1].prefix_ref() = "::/0";
    return cfg;
  }
  void pumpTraffic(bool isV6) {
    auto vlanId = VlanID(*initialConfig().vlanPorts[0].vlanID_ref());
    auto intfMac = utility::getInterfaceMac(getProgrammedState(), vlanId);
    auto srcIp = IPAddress(isV6 ? "1001::1" : "10.0.0.1");
    auto dstIp = IPAddress(isV6 ? "100:100:100::1" : "100.100.100.1");
    auto pkt = utility::makeUDPTxPacket(
        getHwSwitch(), VlanID(1), intfMac, intfMac, srcIp, dstIp, 10000, 10001);
    getHwSwitchEnsemble()->ensureSendPacketOutOfPort(
        std::move(pkt), PortID(masterLogicalPortIds()[0]));
  }

 protected:
  void runTest(bool isV6) {
    auto setup = [=]() {};
    auto verify = [=]() {
      PortID portId = masterLogicalPortIds()[0];
      auto portStatsBefore = getLatestPortStats(portId);
      pumpTraffic(isV6);
      auto portStatsAfter = getLatestPortStats(portId);
      EXPECT_EQ(
          1,
          *portStatsAfter.inDiscardsRaw__ref() -
              *portStatsBefore.inDiscardsRaw__ref());
      EXPECT_EQ(
          1,
          *portStatsAfter.inDstNullDiscards__ref() -
              *portStatsBefore.inDstNullDiscards__ref());
      EXPECT_EQ(
          0,
          *portStatsAfter.inDiscards__ref() -
              *portStatsBefore.inDiscards__ref());
    };
    verifyAcrossWarmBoots(setup, verify);
  }
};

TEST_F(HwInDiscardsCounterTest, v6) {
  runTest(true);
}

TEST_F(HwInDiscardsCounterTest, v4) {
  runTest(false);
}

} // namespace facebook::fboss
