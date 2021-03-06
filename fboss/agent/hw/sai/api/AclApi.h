/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#pragma once

#include "fboss/agent/hw/sai/api/SaiApi.h"
#include "fboss/agent/hw/sai/api/SaiAttribute.h"
#include "fboss/agent/hw/sai/api/SaiAttributeDataTypes.h"
#include "fboss/agent/hw/sai/api/Types.h"

#include <folly/logging/xlog.h>

#include <tuple>

extern "C" {
#include <sai.h>
}

namespace facebook::fboss {

class AclApi;

struct SaiAclTableGroupTraits {
  static constexpr sai_object_type_t ObjectType =
      SAI_OBJECT_TYPE_ACL_TABLE_GROUP;
  using SaiApiT = AclApi;
  struct Attributes {
    using EnumType = sai_acl_table_group_attr_t;

    using Stage =
        SaiAttribute<EnumType, SAI_ACL_TABLE_GROUP_ATTR_ACL_STAGE, sai_int32_t>;
    using BindPointTypeList = SaiAttribute<
        EnumType,
        SAI_ACL_TABLE_GROUP_ATTR_ACL_BIND_POINT_TYPE_LIST,
        std::vector<sai_int32_t>>;
    using Type =
        SaiAttribute<EnumType, SAI_ACL_TABLE_GROUP_ATTR_TYPE, sai_int32_t>;
    using MemberList = SaiAttribute<
        EnumType,
        SAI_ACL_TABLE_GROUP_ATTR_MEMBER_LIST,
        std::vector<sai_object_id_t>>;
  };

  using AdapterKey = AclTableGroupSaiId;
  using AdapterHostKey = std::tuple<
      Attributes::Stage,
      std::optional<Attributes::BindPointTypeList>,
      std::optional<Attributes::Type>>;
  using CreateAttributes = std::tuple<
      Attributes::Stage,
      std::optional<Attributes::BindPointTypeList>,
      std::optional<Attributes::Type>>;
};

SAI_ATTRIBUTE_NAME(AclTableGroup, Stage);
SAI_ATTRIBUTE_NAME(AclTableGroup, BindPointTypeList);
SAI_ATTRIBUTE_NAME(AclTableGroup, Type);
SAI_ATTRIBUTE_NAME(AclTableGroup, MemberList);

struct SaiAclTableGroupMemberTraits {
  static constexpr sai_object_type_t ObjectType =
      SAI_OBJECT_TYPE_ACL_TABLE_GROUP_MEMBER;
  using SaiApiT = AclApi;
  struct Attributes {
    using EnumType = sai_acl_table_group_member_attr_t;

    using TableGroupId = SaiAttribute<
        EnumType,
        SAI_ACL_TABLE_GROUP_MEMBER_ATTR_ACL_TABLE_GROUP_ID,
        SaiObjectIdT>;
    using TableId = SaiAttribute<
        EnumType,
        SAI_ACL_TABLE_GROUP_MEMBER_ATTR_ACL_TABLE_ID,
        SaiObjectIdT>;
    using Priority = SaiAttribute<
        EnumType,
        SAI_ACL_TABLE_GROUP_MEMBER_ATTR_PRIORITY,
        sai_uint32_t>;
  };

  using AdapterKey = AclTableGroupMemberSaiId;
  using AdapterHostKey = std::tuple<
      Attributes::TableGroupId,
      Attributes::TableId,
      Attributes::Priority>;
  using CreateAttributes = std::tuple<
      Attributes::TableGroupId,
      Attributes::TableId,
      Attributes::Priority>;
};

SAI_ATTRIBUTE_NAME(AclTableGroupMember, TableGroupId);
SAI_ATTRIBUTE_NAME(AclTableGroupMember, TableId);
SAI_ATTRIBUTE_NAME(AclTableGroupMember, Priority);

struct SaiAclTableTraits {
  static constexpr sai_object_type_t ObjectType = SAI_OBJECT_TYPE_ACL_TABLE;
  using SaiApiT = AclApi;
  struct Attributes {
    using EnumType = sai_acl_table_attr_t;

    using Stage =
        SaiAttribute<EnumType, SAI_ACL_TABLE_ATTR_ACL_STAGE, sai_int32_t>;
    using BindPointTypeList = SaiAttribute<
        EnumType,
        SAI_ACL_TABLE_ATTR_ACL_BIND_POINT_TYPE_LIST,
        std::vector<sai_int32_t>>;
    using ActionTypeList = SaiAttribute<
        EnumType,
        SAI_ACL_TABLE_ATTR_ACL_ACTION_TYPE_LIST,
        std::vector<sai_int32_t>>;
    using EntryList = SaiAttribute<
        EnumType,
        SAI_ACL_TABLE_ATTR_ENTRY_LIST,
        std::vector<sai_object_id_t>>;

    /*
     * TODO (skhare) Add all the FIELD_* FBOSS needs.
     * Find a way to express at least one FIELD_* is mandatory.
     */
    using FieldDscp =
        SaiAttribute<EnumType, SAI_ACL_TABLE_ATTR_FIELD_DSCP, bool>;
  };

  using AdapterKey = AclTableSaiId;
  using AdapterHostKey = std::tuple<
      Attributes::Stage,
      std::optional<Attributes::BindPointTypeList>,
      std::optional<Attributes::ActionTypeList>,
      std::optional<Attributes::FieldDscp>>;
  using CreateAttributes = std::tuple<
      Attributes::Stage,
      std::optional<Attributes::BindPointTypeList>,
      std::optional<Attributes::ActionTypeList>,
      std::optional<Attributes::FieldDscp>>;
};

SAI_ATTRIBUTE_NAME(AclTable, Stage);
SAI_ATTRIBUTE_NAME(AclTable, BindPointTypeList);
SAI_ATTRIBUTE_NAME(AclTable, ActionTypeList);
SAI_ATTRIBUTE_NAME(AclTable, EntryList);
SAI_ATTRIBUTE_NAME(AclTable, FieldDscp);

struct SaiAclEntryTraits {
  static constexpr sai_object_type_t ObjectType = SAI_OBJECT_TYPE_ACL_ENTRY;
  using SaiApiT = AclApi;
  struct Attributes {
    using EnumType = sai_acl_entry_attr_t;

    using TableId =
        SaiAttribute<EnumType, SAI_ACL_ENTRY_ATTR_TABLE_ID, sai_object_id_t>;
    using Priority =
        SaiAttribute<EnumType, SAI_ACL_ENTRY_ATTR_PRIORITY, sai_uint32_t>;
    /*
     * TODO (skhare) Add all the FIELD_* FBOSS needs.
     * Find a way to express at least one FIELD_* is mandatory.
     */
    using FieldDscp =
        SaiAttribute<EnumType, SAI_ACL_ENTRY_ATTR_FIELD_DSCP, sai_uint8_t>;
  };

  using AdapterKey = AclEntrySaiId;
  using AdapterHostKey = std::tuple<
      Attributes::TableId,
      std::optional<Attributes::Priority>,
      std::optional<Attributes::FieldDscp>>;
  using CreateAttributes = std::tuple<
      Attributes::TableId,
      std::optional<Attributes::Priority>,
      std::optional<Attributes::FieldDscp>>;
};

SAI_ATTRIBUTE_NAME(AclEntry, TableId);
SAI_ATTRIBUTE_NAME(AclEntry, Priority);
SAI_ATTRIBUTE_NAME(AclEntry, FieldDscp);

class AclApi : public SaiApi<AclApi> {
 public:
  static constexpr sai_api_t ApiType = SAI_API_ACL;
  AclApi() {
    sai_status_t status =
        sai_api_query(ApiType, reinterpret_cast<void**>(&api_));
    saiApiCheckError(status, ApiType, "Failed to query for Acl api");
  }
  AclApi(const AclApi& other) = delete;

 private:
  sai_status_t _create(
      AclTableGroupSaiId* id,
      sai_object_id_t switch_id,
      size_t count,
      sai_attribute_t* attr_list) {
    return api_->create_acl_table_group(
        rawSaiId(id), switch_id, count, attr_list);
  }

  sai_status_t _create(
      AclTableGroupMemberSaiId* id,
      sai_object_id_t switch_id,
      size_t count,
      sai_attribute_t* attr_list) {
    return api_->create_acl_table_group_member(
        rawSaiId(id), switch_id, count, attr_list);
  }

  sai_status_t _create(
      AclTableSaiId* id,
      sai_object_id_t switch_id,
      size_t count,
      sai_attribute_t* attr_list) {
    return api_->create_acl_table(rawSaiId(id), switch_id, count, attr_list);
  }

  sai_status_t _create(
      AclEntrySaiId* id,
      sai_object_id_t switch_id,
      size_t count,
      sai_attribute_t* attr_list) {
    return api_->create_acl_entry(rawSaiId(id), switch_id, count, attr_list);
  }

  sai_status_t _remove(AclTableGroupSaiId id) {
    return api_->remove_acl_table_group(id);
  }

  sai_status_t _remove(AclTableGroupMemberSaiId id) {
    return api_->remove_acl_table_group_member(id);
  }

  sai_status_t _remove(AclTableSaiId id) {
    return api_->remove_acl_table(id);
  }

  sai_status_t _remove(AclEntrySaiId id) {
    return api_->remove_acl_entry(id);
  }

  sai_status_t _getAttribute(AclTableGroupSaiId id, sai_attribute_t* attr)
      const {
    return api_->get_acl_table_group_attribute(id, 1, attr);
  }

  sai_status_t _getAttribute(AclTableGroupMemberSaiId id, sai_attribute_t* attr)
      const {
    return api_->get_acl_table_group_member_attribute(id, 1, attr);
  }

  sai_status_t _getAttribute(AclTableSaiId id, sai_attribute_t* attr) const {
    return api_->get_acl_table_attribute(id, 1, attr);
  }

  sai_status_t _getAttribute(AclEntrySaiId id, sai_attribute_t* attr) const {
    return api_->get_acl_entry_attribute(id, 1, attr);
  }

  sai_status_t _setAttribute(AclTableGroupSaiId id, const sai_attribute_t* attr)
      const {
    return api_->set_acl_table_group_attribute(id, attr);
  }

  sai_status_t _setAttribute(
      AclTableGroupMemberSaiId id,
      const sai_attribute_t* attr) const {
    return api_->set_acl_table_group_member_attribute(id, attr);
  }

  sai_status_t _setAttribute(AclTableSaiId id, const sai_attribute_t* attr)
      const {
    return api_->set_acl_table_attribute(id, attr);
  }

  sai_status_t _setAttribute(AclEntrySaiId id, const sai_attribute_t* attr)
      const {
    return api_->set_acl_entry_attribute(id, attr);
  }

  sai_acl_api_t* api_;
  friend class SaiApi<AclApi>;
};

} // namespace facebook::fboss
