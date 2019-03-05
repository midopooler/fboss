// Copyright 2004-present Facebook. All Rights Reserved.

#include "fboss/agent/state/LabelForwardingAction.h"

namespace facebook {
namespace fboss {

namespace {
constexpr auto kType = "type";
constexpr auto kSwapWith = "swapWith";
constexpr auto kPushStack = "pushStack";
} // namespace

folly::dynamic LabelForwardingAction::toFollyDynamic() const {
  folly::dynamic labelForwardingAction = folly::dynamic::object;
  labelForwardingAction[kType] = static_cast<int>(type_);
  if (swapWith_) {
    labelForwardingAction[kSwapWith] = static_cast<int>(swapWith_.value());
  }
  if (pushStack_) {
    labelForwardingAction[kPushStack] = folly::dynamic::array();
    for (const auto& label : pushStack_.value()) {
      labelForwardingAction[kPushStack].push_back(static_cast<int>(label));
    }
  }
  return labelForwardingAction;
}

MplsAction LabelForwardingAction::toThrift() const {
  MplsAction mplsActionThrift;
  mplsActionThrift.action = type_;
  if (swapWith_) {
    mplsActionThrift.swapLabel_ref() = swapWith_.value();
  } else if (pushStack_) {
    MplsLabelStack pushStack;
    for (const auto& label : pushStack_.value()) {
      pushStack.push_back(label);
    }
    auto thriftPushStack = mplsActionThrift.pushLabels_ref();
    thriftPushStack = std::move(pushStack);
  }
  return mplsActionThrift;
}

LabelForwardingAction LabelForwardingAction::fromThrift(
    const MplsAction& mplsAction) {
  if (mplsAction.swapLabel_ref()) {
    return LabelForwardingAction(
        mplsAction.action, mplsAction.swapLabel_ref().value());
  } else if (mplsAction.pushLabels_ref()) {
    return LabelForwardingAction(
        mplsAction.action, mplsAction.pushLabels_ref().value());
  }
  return LabelForwardingAction(mplsAction.action);
}

LabelForwardingAction LabelForwardingAction::fromFollyDynamic(
    const folly::dynamic& json) {
  LabelForwardingType type =
      static_cast<LabelForwardingType>(json[kType].asInt());
  if (json.find(kSwapWith) != json.items().end()) {
    return LabelForwardingAction(type, json[kSwapWith].asInt());
  } else if (json.find(kPushStack) != json.items().end()) {
    LabelStack stack;
    for (const auto& label : json[kPushStack]) {
      stack.push_back(static_cast<Label>(label.asInt()));
    }
    return LabelForwardingAction(type, stack);
  }
  return LabelForwardingAction(type);
}

bool LabelForwardingAction::operator==(const LabelForwardingAction& rhs) const {
  return type() == rhs.type() && swapWith() == rhs.swapWith() &&
      pushStack() == rhs.pushStack();
}

bool LabelForwardingAction::operator<(const LabelForwardingAction& rhs) const {
  return std::tie(type_, swapWith_, pushStack_) <
      std::tie(rhs.type_, rhs.swapWith_, rhs.pushStack_);
}

} // namespace fboss
} // namespace facebook
