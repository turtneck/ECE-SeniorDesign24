// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from multisense_msgs:msg/RawCamData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "multisense_msgs/msg/detail/raw_cam_data__rosidl_typesupport_introspection_c.h"
#include "multisense_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "multisense_msgs/msg/detail/raw_cam_data__functions.h"
#include "multisense_msgs/msg/detail/raw_cam_data__struct.h"


// Include directives for member types
// Member `time_stamp`
#include "builtin_interfaces/msg/time.h"
// Member `time_stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `gray_scale_image`
// Member `disparity_image`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__RawCamData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  multisense_msgs__msg__RawCamData__init(message_memory);
}

void multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__RawCamData_fini_function(void * message_memory)
{
  multisense_msgs__msg__RawCamData__fini(message_memory);
}

size_t multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__size_function__RawCamData__gray_scale_image(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__get_const_function__RawCamData__gray_scale_image(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__get_function__RawCamData__gray_scale_image(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__fetch_function__RawCamData__gray_scale_image(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__get_const_function__RawCamData__gray_scale_image(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__assign_function__RawCamData__gray_scale_image(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__get_function__RawCamData__gray_scale_image(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__resize_function__RawCamData__gray_scale_image(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__size_function__RawCamData__disparity_image(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__get_const_function__RawCamData__disparity_image(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__get_function__RawCamData__disparity_image(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__fetch_function__RawCamData__disparity_image(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__get_const_function__RawCamData__disparity_image(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__assign_function__RawCamData__disparity_image(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__get_function__RawCamData__disparity_image(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__resize_function__RawCamData__disparity_image(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__RawCamData_message_member_array[10] = {
  {
    "frames_per_second",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__RawCamData, frames_per_second),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gain",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__RawCamData, gain),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "exposure_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__RawCamData, exposure_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__RawCamData, frame_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__RawCamData, time_stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__RawCamData, angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__RawCamData, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__RawCamData, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gray_scale_image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__RawCamData, gray_scale_image),  // bytes offset in struct
    NULL,  // default value
    multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__size_function__RawCamData__gray_scale_image,  // size() function pointer
    multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__get_const_function__RawCamData__gray_scale_image,  // get_const(index) function pointer
    multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__get_function__RawCamData__gray_scale_image,  // get(index) function pointer
    multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__fetch_function__RawCamData__gray_scale_image,  // fetch(index, &value) function pointer
    multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__assign_function__RawCamData__gray_scale_image,  // assign(index, value) function pointer
    multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__resize_function__RawCamData__gray_scale_image  // resize(index) function pointer
  },
  {
    "disparity_image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs__msg__RawCamData, disparity_image),  // bytes offset in struct
    NULL,  // default value
    multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__size_function__RawCamData__disparity_image,  // size() function pointer
    multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__get_const_function__RawCamData__disparity_image,  // get_const(index) function pointer
    multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__get_function__RawCamData__disparity_image,  // get(index) function pointer
    multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__fetch_function__RawCamData__disparity_image,  // fetch(index, &value) function pointer
    multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__assign_function__RawCamData__disparity_image,  // assign(index, value) function pointer
    multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__resize_function__RawCamData__disparity_image  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__RawCamData_message_members = {
  "multisense_msgs__msg",  // message namespace
  "RawCamData",  // message name
  10,  // number of fields
  sizeof(multisense_msgs__msg__RawCamData),
  multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__RawCamData_message_member_array,  // message members
  multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__RawCamData_init_function,  // function to initialize message memory (memory has to be allocated)
  multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__RawCamData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__RawCamData_message_type_support_handle = {
  0,
  &multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__RawCamData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multisense_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multisense_msgs, msg, RawCamData)() {
  multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__RawCamData_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__RawCamData_message_type_support_handle.typesupport_identifier) {
    multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__RawCamData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &multisense_msgs__msg__RawCamData__rosidl_typesupport_introspection_c__RawCamData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
