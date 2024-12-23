// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from multisense_msgs:msg/PtpStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "multisense_msgs/msg/detail/ptp_status__rosidl_typesupport_introspection_c.h"
#include "multisense_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "multisense_msgs/msg/detail/ptp_status__functions.h"
#include "multisense_msgs/msg/detail/ptp_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__PtpStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  multisense_msgs__msg__PtpStatus__init(message_memory);
}

void multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__PtpStatus_fini_function(void * message_memory)
{
  multisense_msgs__msg__PtpStatus__fini(message_memory);
}

size_t multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__size_function__PtpStatus__gm_id(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__get_const_function__PtpStatus__gm_id(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__get_function__PtpStatus__gm_id(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__fetch_function__PtpStatus__gm_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__get_const_function__PtpStatus__gm_id(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__assign_function__PtpStatus__gm_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__get_function__PtpStatus__gm_id(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__PtpStatus_message_member_array[5] = {
  {
    "gm_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__PtpStatus, gm_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gm_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__PtpStatus, gm_id),  // bytes offset in struct
    NULL,  // default value
    multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__size_function__PtpStatus__gm_id,  // size() function pointer
    multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__get_const_function__PtpStatus__gm_id,  // get_const(index) function pointer
    multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__get_function__PtpStatus__gm_id,  // get(index) function pointer
    multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__fetch_function__PtpStatus__gm_id,  // fetch(index, &value) function pointer
    multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__assign_function__PtpStatus__gm_id,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gm_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__PtpStatus, gm_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path_delay",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__PtpStatus, path_delay),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steps_removed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__PtpStatus, steps_removed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__PtpStatus_message_members = {
  "multisense_msgs__msg",  // message namespace
  "PtpStatus",  // message name
  5,  // number of fields
  sizeof(multisense_msgs__msg__PtpStatus),
  multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__PtpStatus_message_member_array,  // message members
  multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__PtpStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__PtpStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__PtpStatus_message_type_support_handle = {
  0,
  &multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__PtpStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multisense_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multisense_msgs, msg, PtpStatus)() {
  if (!multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__PtpStatus_message_type_support_handle.typesupport_identifier) {
    multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__PtpStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &multisense_msgs__msg__PtpStatus__rosidl_typesupport_introspection_c__PtpStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
