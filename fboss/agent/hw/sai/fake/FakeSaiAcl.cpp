/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "fboss/agent/hw/sai/fake/FakeSaiAcl.h"

#include "fboss/agent/hw/sai/fake/FakeSai.h"

using facebook::fboss::FakeSai;

sai_status_t create_acl_table_fn(
    sai_object_id_t* acl_table_id,
    sai_object_id_t /*switch_id */,
    uint32_t attr_count,
    const sai_attribute_t* attr_list) {
  auto fs = FakeSai::getInstance();

  std::optional<sai_int32_t> stage;
  std::vector<int32_t> bindPointTypeList;
  std::vector<int32_t> actionTypeList;
  sai_uint8_t fieldDscp = 0;

  for (int i = 0; i < attr_count; ++i) {
    switch (attr_list[i].id) {
      case SAI_ACL_TABLE_ATTR_ACL_STAGE:
        stage = attr_list[i].value.s32;
        break;
      case SAI_ACL_TABLE_ATTR_ACL_BIND_POINT_TYPE_LIST:
        for (int j = 0; j < attr_list[i].value.s32list.count; ++j) {
          bindPointTypeList.push_back(attr_list[i].value.s32list.list[j]);
        }
        break;
      case SAI_ACL_TABLE_ATTR_ACL_ACTION_TYPE_LIST:
        for (int j = 0; j < attr_list[i].value.s32list.count; ++j) {
          actionTypeList.push_back(attr_list[i].value.s32list.list[j]);
        }
        break;
      case SAI_ACL_TABLE_ATTR_FIELD_DSCP:
        fieldDscp = attr_list[i].value.u8;
        break;
      default:
        return SAI_STATUS_INVALID_PARAMETER;
        break;
    }
  }

  if (!stage) {
    return SAI_STATUS_INVALID_PARAMETER;
  }

  *acl_table_id = fs->aclTableManager.create(
      stage.value(), bindPointTypeList, actionTypeList, fieldDscp);

  return SAI_STATUS_SUCCESS;
}

sai_status_t remove_acl_table_fn(sai_object_id_t acl_table_id) {
  auto fs = FakeSai::getInstance();
  fs->aclTableManager.remove(acl_table_id);
  return SAI_STATUS_SUCCESS;
}

sai_status_t set_acl_table_attribute_fn(
    sai_object_id_t /*acl_table_id*/,
    const sai_attribute_t* attr) {
  switch (attr->id) {
    default:
      // SAI spec does not support setting any attribute for ACL table post
      // creation.
      return SAI_STATUS_NOT_SUPPORTED;
  }

  return SAI_STATUS_SUCCESS;
}

sai_status_t get_acl_table_attribute_fn(
    sai_object_id_t acl_table_id,
    uint32_t attr_count,
    sai_attribute_t* attr) {
  auto fs = FakeSai::getInstance();
  for (int i = 0; i < attr_count; ++i) {
    switch (attr[i].id) {
      case SAI_ACL_TABLE_ATTR_ACL_STAGE: {
        const auto& aclTable = fs->aclTableManager.get(acl_table_id);
        attr[i].value.s32 = aclTable.stage;
      } break;
      case SAI_ACL_TABLE_ATTR_ACL_BIND_POINT_TYPE_LIST: {
        const auto& aclTable = fs->aclTableManager.get(acl_table_id);
        if (aclTable.bindPointTypeList.size() > attr[i].value.s32list.count) {
          attr[i].value.s32list.count = aclTable.bindPointTypeList.size();
          return SAI_STATUS_BUFFER_OVERFLOW;
        }

        attr[i].value.s32list.count = aclTable.bindPointTypeList.size();
        int j = 0;
        for (const auto& bindPointType : aclTable.bindPointTypeList) {
          attr[i].value.s32list.list[j++] = bindPointType;
        }
      } break;
      case SAI_ACL_TABLE_ATTR_ACL_ACTION_TYPE_LIST: {
        const auto& aclTable = fs->aclTableManager.get(acl_table_id);
        if (aclTable.actionTypeList.size() > attr[i].value.s32list.count) {
          attr[i].value.s32list.count = aclTable.actionTypeList.size();
          return SAI_STATUS_BUFFER_OVERFLOW;
        }
        attr[i].value.s32list.count = aclTable.actionTypeList.size();
        int j = 0;
        for (const auto& actionType : aclTable.actionTypeList) {
          attr[i].value.s32list.list[j++] = actionType;
        }
      } break;
      case SAI_ACL_TABLE_ATTR_ENTRY_LIST: {
        const auto& aclEntryMap =
            fs->aclTableManager.get(acl_table_id).fm().map();
        if (aclEntryMap.size() > attr[i].value.objlist.count) {
          attr[i].value.objlist.count = aclEntryMap.size();
          return SAI_STATUS_BUFFER_OVERFLOW;
        }
        attr[i].value.objlist.count = aclEntryMap.size();
        int j = 0;
        for (const auto& m : aclEntryMap) {
          attr[i].value.objlist.list[j++] = m.first;
        }
      } break;
      case SAI_ACL_TABLE_ATTR_FIELD_DSCP: {
        const auto& aclTable = fs->aclTableManager.get(acl_table_id);
        attr[i].value.u8 = aclTable.fieldDscp;
      } break;
      default:
        return SAI_STATUS_NOT_SUPPORTED;
    }
  }

  return SAI_STATUS_SUCCESS;
}

sai_status_t set_acl_entry_attribute_fn(
    sai_object_id_t acl_entry_id,
    const sai_attribute_t* attr) {
  auto fs = FakeSai::getInstance();
  auto& aclEntry = fs->aclTableManager.getMember(acl_entry_id);
  sai_status_t res;
  if (!attr) {
    return SAI_STATUS_INVALID_PARAMETER;
  }

  switch (attr->id) {
    case SAI_ACL_ENTRY_ATTR_PRIORITY:
      aclEntry.priority = attr->value.u32;
      res = SAI_STATUS_SUCCESS;
      break;
    case SAI_ACL_ENTRY_ATTR_FIELD_DSCP:
      aclEntry.fieldDscp = attr->value.u8;
      res = SAI_STATUS_SUCCESS;
      break;
    default:
      res = SAI_STATUS_NOT_SUPPORTED;
      break;
  }
  return res;
}

sai_status_t get_acl_entry_attribute_fn(
    sai_object_id_t acl_entry_id,
    uint32_t attr_count,
    sai_attribute_t* attr_list) {
  auto fs = FakeSai::getInstance();
  auto& aclEntry = fs->aclTableManager.getMember(acl_entry_id);
  for (int i = 0; i < attr_count; ++i) {
    switch (attr_list[i].id) {
      case SAI_ACL_ENTRY_ATTR_TABLE_ID:
        attr_list[i].value.oid = aclEntry.tableId;
        break;
      case SAI_ACL_ENTRY_ATTR_PRIORITY:
        attr_list[i].value.u32 = aclEntry.priority;
        break;
      case SAI_ACL_ENTRY_ATTR_FIELD_DSCP:
        attr_list[i].value.u8 = aclEntry.fieldDscp;
        break;
      default:
        return SAI_STATUS_NOT_SUPPORTED;
    }
  }
  return SAI_STATUS_SUCCESS;
}

sai_status_t create_acl_entry_fn(
    sai_object_id_t* acl_entry_id,
    sai_object_id_t switch_id,
    uint32_t attr_count,
    const sai_attribute_t* attr_list) {
  auto fs = FakeSai::getInstance();

  std::optional<sai_object_id_t> tableId;
  for (int i = 0; i < attr_count; ++i) {
    switch (attr_list[i].id) {
      case SAI_ACL_ENTRY_ATTR_TABLE_ID:
        tableId = attr_list[i].value.oid;
        break;
    }
  }

  if (!tableId) {
    return SAI_STATUS_INVALID_PARAMETER;
  }

  *acl_entry_id =
      fs->aclTableManager.createMember(tableId.value(), tableId.value());

  for (int i = 0; i < attr_count; ++i) {
    if (attr_list[i].id == SAI_ACL_ENTRY_ATTR_TABLE_ID) {
      auto& aclEntry = fs->aclTableManager.getMember(*acl_entry_id);
      aclEntry.tableId = attr_list[i].value.oid;
    } else {
      sai_status_t res =
          set_acl_entry_attribute_fn(*acl_entry_id, &attr_list[i]);
      if (res != SAI_STATUS_SUCCESS) {
        fs->aclTableManager.removeMember(*acl_entry_id);
        return res;
      }
    }
  }

  return SAI_STATUS_SUCCESS;
}

sai_status_t remove_acl_entry_fn(sai_object_id_t acl_entry_id) {
  auto fs = FakeSai::getInstance();
  fs->aclTableManager.removeMember(acl_entry_id);
  return SAI_STATUS_SUCCESS;
}

sai_status_t create_acl_counter_fn(
    sai_object_id_t* /*acl_counter_id*/,
    sai_object_id_t /*switch_id*/,
    uint32_t /*attr_count*/,
    const sai_attribute_t* /*attr_list*/) {
  return SAI_STATUS_NOT_IMPLEMENTED;
}

sai_status_t remove_acl_counter_fn(sai_object_id_t acl_counter_id) {
  return SAI_STATUS_NOT_IMPLEMENTED;
}

sai_status_t set_acl_counter_attribute_fn(
    sai_object_id_t acl_counter_id,
    const sai_attribute_t* attr) {
  return SAI_STATUS_NOT_IMPLEMENTED;
}

sai_status_t get_acl_counter_attribute_fn(
    sai_object_id_t acl_counter_id,
    uint32_t attr_count,
    sai_attribute_t* attr_list) {
  return SAI_STATUS_NOT_IMPLEMENTED;
}

sai_status_t create_acl_range_fn(
    sai_object_id_t* /*acl_range_id */,
    sai_object_id_t /*switch_id*/,
    uint32_t /*attr_count*/,
    const sai_attribute_t* /*attr_list*/) {
  return SAI_STATUS_NOT_IMPLEMENTED;
}

sai_status_t remove_acl_range_fn(sai_object_id_t /*acl_range_id*/) {
  return SAI_STATUS_NOT_IMPLEMENTED;
}

sai_status_t set_acl_range_attribute_fn(
    sai_object_id_t /*acl_range_id*/,
    const sai_attribute_t* /*attr*/) {
  return SAI_STATUS_NOT_IMPLEMENTED;
}

sai_status_t get_acl_range_attribute_fn(
    sai_object_id_t acl_range_id,
    uint32_t attr_count,
    sai_attribute_t* attr_list) {
  return SAI_STATUS_NOT_IMPLEMENTED;
}

sai_status_t create_acl_table_group_fn(
    sai_object_id_t* acl_table_group_id,
    sai_object_id_t switch_id,
    uint32_t attr_count,
    const sai_attribute_t* attr_list) {
  auto fs = FakeSai::getInstance();

  std::optional<sai_int32_t> stage;
  std::vector<sai_int32_t> bindPointTypeList;
  sai_int32_t type;

  for (int i = 0; i < attr_count; ++i) {
    switch (attr_list[i].id) {
      case SAI_ACL_TABLE_GROUP_ATTR_ACL_STAGE:
        stage = attr_list[i].value.s32;
        break;
      case SAI_ACL_TABLE_GROUP_ATTR_ACL_BIND_POINT_TYPE_LIST:
        for (int j = 0; j < attr_list[i].value.s32list.count; ++j) {
          bindPointTypeList.push_back(attr_list[i].value.s32list.list[j]);
        }
        break;
      case SAI_ACL_TABLE_GROUP_ATTR_TYPE:
        type = attr_list[i].value.s32;
        break;
      default:
        return SAI_STATUS_INVALID_PARAMETER;
        break;
    }
  }

  if (!stage) {
    return SAI_STATUS_INVALID_PARAMETER;
  }

  *acl_table_group_id =
      fs->aclTableGroupManager.create(stage.value(), bindPointTypeList, type);

  return SAI_STATUS_SUCCESS;
}

sai_status_t remove_acl_table_group_fn(sai_object_id_t acl_table_group_id) {
  auto fs = FakeSai::getInstance();
  fs->aclTableGroupManager.remove(acl_table_group_id);
  return SAI_STATUS_SUCCESS;
}

sai_status_t set_acl_table_group_attribute_fn(
    sai_object_id_t /*acl_table_group_id*/,
    const sai_attribute_t* attr) {
  switch (attr->id) {
    default:
      // SAI spec does not support setting any attribute for ACL table group
      // post creation.
      return SAI_STATUS_NOT_SUPPORTED;
  }

  return SAI_STATUS_SUCCESS;
}

sai_status_t get_acl_table_group_attribute_fn(
    sai_object_id_t acl_table_group_id,
    uint32_t attr_count,
    sai_attribute_t* attr_list) {
  auto fs = FakeSai::getInstance();

  for (int i = 0; i < attr_count; ++i) {
    switch (attr_list[i].id) {
      case SAI_ACL_TABLE_GROUP_ATTR_ACL_STAGE: {
        const auto& aclTableGroup =
            fs->aclTableGroupManager.get(acl_table_group_id);
        attr_list[i].value.s32 = aclTableGroup.stage;
      } break;
      case SAI_ACL_TABLE_GROUP_ATTR_ACL_BIND_POINT_TYPE_LIST: {
        const auto& aclTableGroup =
            fs->aclTableGroupManager.get(acl_table_group_id);
        if (aclTableGroup.bindPointTypeList.size() >
            attr_list[i].value.s32list.count) {
          attr_list[i].value.s32list.count =
              aclTableGroup.bindPointTypeList.size();
          return SAI_STATUS_BUFFER_OVERFLOW;
        }

        attr_list[i].value.s32list.count =
            aclTableGroup.bindPointTypeList.size();
        int j = 0;
        for (const auto& bindPointType : aclTableGroup.bindPointTypeList) {
          attr_list[i].value.s32list.list[j++] = bindPointType;
        }
      } break;
      case SAI_ACL_TABLE_GROUP_ATTR_TYPE: {
        const auto& aclTableGroup =
            fs->aclTableGroupManager.get(acl_table_group_id);
        attr_list[i].value.s32 = aclTableGroup.type;
      } break;
      case SAI_ACL_TABLE_GROUP_ATTR_MEMBER_LIST: {
        const auto& aclTableGroupMemberMap =
            fs->aclTableGroupManager.get(acl_table_group_id).fm().map();
        if (aclTableGroupMemberMap.size() > attr_list[i].value.objlist.count) {
          attr_list[i].value.objlist.count = aclTableGroupMemberMap.size();
          return SAI_STATUS_BUFFER_OVERFLOW;
        }
        attr_list[i].value.objlist.count = aclTableGroupMemberMap.size();
        int j = 0;
        for (const auto& m : aclTableGroupMemberMap) {
          attr_list[i].value.objlist.list[j++] = m.first;
        }
      } break;
      default:
        return SAI_STATUS_NOT_SUPPORTED;
    }
  }

  return SAI_STATUS_SUCCESS;
}

sai_status_t create_acl_table_group_member_fn(
    sai_object_id_t* acl_table_group_member_id,
    sai_object_id_t /*switch_id*/,
    uint32_t attr_count,
    const sai_attribute_t* attr_list) {
  auto fs = FakeSai::getInstance();

  std::optional<sai_object_id_t> tableGroupId;
  std::optional<sai_object_id_t> tableId;
  std::optional<sai_uint32_t> priority;

  for (int i = 0; i < attr_count; ++i) {
    switch (attr_list[i].id) {
      case SAI_ACL_TABLE_GROUP_MEMBER_ATTR_ACL_TABLE_GROUP_ID:
        tableGroupId = attr_list[i].value.oid;
        break;
      case SAI_ACL_TABLE_GROUP_MEMBER_ATTR_ACL_TABLE_ID:
        tableId = attr_list[i].value.oid;
        break;
      case SAI_ACL_TABLE_GROUP_MEMBER_ATTR_PRIORITY:
        priority = attr_list[i].value.u32;
        break;
    }
  }

  if (!tableGroupId || !tableId || !priority) {
    return SAI_STATUS_INVALID_PARAMETER;
  }

  *acl_table_group_member_id = fs->aclTableGroupManager.createMember(
      tableGroupId.value(),
      tableGroupId.value(),
      tableId.value(),
      priority.value());

  return SAI_STATUS_SUCCESS;
}

sai_status_t remove_acl_table_group_member_fn(
    sai_object_id_t acl_table_group_member_id) {
  auto fs = FakeSai::getInstance();
  fs->aclTableGroupManager.removeMember(acl_table_group_member_id);
  return SAI_STATUS_SUCCESS;
}

sai_status_t set_acl_table_group_member_attribute_fn(
    sai_object_id_t /*acl_table_group_member_id*/,
    const sai_attribute_t* attr) {
  return SAI_STATUS_NOT_IMPLEMENTED;

  switch (attr->id) {
    default:
      // SAI spec does not support setting any attribute for ACL table group
      // memeber post creation.
      return SAI_STATUS_NOT_SUPPORTED;
  }

  return SAI_STATUS_SUCCESS;
}

sai_status_t get_acl_table_group_member_attribute_fn(
    sai_object_id_t acl_table_group_member_id,
    uint32_t attr_count,
    sai_attribute_t* attr_list) {
  auto fs = FakeSai::getInstance();
  auto& aclTableGroupMember =
      fs->aclTableGroupManager.getMember(acl_table_group_member_id);

  for (int i = 0; i < attr_count; ++i) {
    switch (attr_list[i].id) {
      case SAI_ACL_TABLE_GROUP_MEMBER_ATTR_ACL_TABLE_GROUP_ID:
        attr_list[i].value.oid = aclTableGroupMember.tableGroupId;
        break;
      case SAI_ACL_TABLE_GROUP_MEMBER_ATTR_ACL_TABLE_ID:
        attr_list[i].value.oid = aclTableGroupMember.tableId;
        break;
      case SAI_ACL_TABLE_GROUP_MEMBER_ATTR_PRIORITY:
        attr_list[i].value.u32 = aclTableGroupMember.priority;
        break;
      default:
        return SAI_STATUS_NOT_SUPPORTED;
    }
  }
  return SAI_STATUS_SUCCESS;
}

namespace facebook::fboss {

sai_acl_api_t* FakeAclTable::kApi() {
  static sai_acl_api_t kAclApi = {&create_acl_table_fn,
                                  &remove_acl_table_fn,
                                  &set_acl_table_attribute_fn,
                                  &get_acl_table_attribute_fn,
                                  &create_acl_entry_fn,
                                  &remove_acl_entry_fn,
                                  &set_acl_entry_attribute_fn,
                                  &get_acl_entry_attribute_fn,
                                  &create_acl_counter_fn,
                                  &remove_acl_counter_fn,
                                  &set_acl_counter_attribute_fn,
                                  &get_acl_counter_attribute_fn,
                                  &create_acl_range_fn,
                                  &remove_acl_range_fn,
                                  &set_acl_range_attribute_fn,
                                  &get_acl_range_attribute_fn,
                                  &create_acl_table_group_fn,
                                  &remove_acl_table_group_fn,
                                  &set_acl_table_group_attribute_fn,
                                  &get_acl_table_group_attribute_fn,
                                  &create_acl_table_group_member_fn,
                                  &remove_acl_table_group_member_fn,
                                  &set_acl_table_group_member_attribute_fn,
                                  &get_acl_table_group_member_attribute_fn};

  return &kAclApi;
}

void populate_acl_api(sai_acl_api_t** acl_api) {
  *acl_api = FakeAclTable::kApi();
}

} // namespace facebook::fboss
