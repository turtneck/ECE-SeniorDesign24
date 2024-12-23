// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from multisense_msgs:msg/RawLidarData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "multisense_msgs/msg/detail/raw_lidar_data__rosidl_typesupport_introspection_c.h"
#include "multisense_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "multisense_msgs/msg/detail/raw_lidar_data__functions.h"
#include "multisense_msgs/msg/detail/raw_lidar_data__struct.h"


// Include directives for member types
// Member `time_start`
// Member `time_end`
#include "builtin_interfaces/msg/time.h"
// Member `time_start`
// Member `time_end`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `distance`
// Member `intensity`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__RawLidarData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  multisense_msgs__msg__RawLidarData__init(message_memory);
}

void multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__RawLidarData_fini_function(void * message_memory)
{
  multisense_msgs__msg__RawLidarData__fini(message_memory);
}

size_t multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__size_function__RawLidarData__distance(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__get_const_function__RawLidarData__distance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__get_function__RawLidarData__distance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__fetch_function__RawLidarData__distance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__get_const_function__RawLidarData__distance(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__assign_function__RawLidarData__distance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__get_function__RawLidarData__distance(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__resize_function__RawLidarData__distance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__size_function__RawLidarData__intensity(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__get_const_function__RawLidarData__intensity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__get_function__RawLidarData__intensity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__fetch_function__RawLidarData__intensity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__get_const_function__RawLidarData__intensity(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__assign_function__RawLidarData__intensity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__get_function__RawLidarData__intensity(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__resize_function__RawLidarData__intensity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__RawLidarData_message_member_array[7] = {
  {
    "scan_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__RawLidarData, scan_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__RawLidarData, time_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__RawLidarData, time_end),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__RawLidarData, angle_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle_end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__RawLidarData, angle_end),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__RawLidarData, distance),  // bytes offset in struct
    NULL,  // default value
    multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__size_function__RawLidarData__distance,  // size() function pointer
    multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__get_const_function__RawLidarData__distance,  // get_const(index) function pointer
    multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__get_function__RawLidarData__distance,  // get(index) function pointer
    multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__fetch_function__RawLidarData__distance,  // fetch(index, &value) function pointer
    multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__assign_function__RawLidarData__distance,  // assign(index, value) function pointer
    multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__resize_function__RawLidarData__distance  // resize(index) function pointer
  },
  {
    "intensity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__RawLidarData, intensity),  // bytes offset in struct
    NULL,  // default value
    multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__size_function__RawLidarData__intensity,  // size() function pointer
    multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__get_const_function__RawLidarData__intensity,  // get_const(index) function pointer
    multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__get_function__RawLidarData__intensity,  // get(index) function pointer
    multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__fetch_function__RawLidarData__intensity,  // fetch(index, &value) function pointer
    multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__assign_function__RawLidarData__intensity,  // assign(index, value) function pointer
    multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__resize_function__RawLidarData__intensity  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__RawLidarData_message_members = {
  "multisense_msgs__msg",  // message namespace
  "RawLidarData",  // message name
  7,  // number of fields
  sizeof(multisense_msgs__msg__RawLidarData),
  multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__RawLidarData_message_member_array,  // message members
  multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__RawLidarData_init_function,  // function to initialize message memory (memory has to be allocated)
  multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__RawLidarData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__RawLidarData_message_type_support_handle = {
  0,
  &multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__RawLidarData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multisense_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multisense_msgs, msg, RawLidarData)() {
  multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__RawLidarData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__RawLidarData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__RawLidarData_message_type_support_handle.typesupport_identifier) {
    multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__RawLidarData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &multisense_msgs__msg__RawLidarData__rosidl_typesupport_introspection_c__RawLidarData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
