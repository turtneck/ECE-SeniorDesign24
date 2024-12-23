// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from multisense_msgs:msg/RawCamCal.idl
// generated code does not contain a copyright notice
#include "multisense_msgs/msg/detail/raw_cam_cal__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "multisense_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "multisense_msgs/msg/detail/raw_cam_cal__struct.h"
#include "multisense_msgs/msg/detail/raw_cam_cal__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RawCamCal__ros_msg_type = multisense_msgs__msg__RawCamCal;

static bool _RawCamCal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RawCamCal__ros_msg_type * ros_message = static_cast<const _RawCamCal__ros_msg_type *>(untyped_ros_message);
  // Field name: left_m
  {
    size_t size = 9;
    auto array_ptr = ros_message->left_m;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: left_d
  {
    size_t size = 8;
    auto array_ptr = ros_message->left_d;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: left_r
  {
    size_t size = 9;
    auto array_ptr = ros_message->left_r;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: left_p
  {
    size_t size = 12;
    auto array_ptr = ros_message->left_p;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: right_m
  {
    size_t size = 9;
    auto array_ptr = ros_message->right_m;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: right_d
  {
    size_t size = 8;
    auto array_ptr = ros_message->right_d;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: right_r
  {
    size_t size = 9;
    auto array_ptr = ros_message->right_r;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: right_p
  {
    size_t size = 12;
    auto array_ptr = ros_message->right_p;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _RawCamCal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RawCamCal__ros_msg_type * ros_message = static_cast<_RawCamCal__ros_msg_type *>(untyped_ros_message);
  // Field name: left_m
  {
    size_t size = 9;
    auto array_ptr = ros_message->left_m;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: left_d
  {
    size_t size = 8;
    auto array_ptr = ros_message->left_d;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: left_r
  {
    size_t size = 9;
    auto array_ptr = ros_message->left_r;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: left_p
  {
    size_t size = 12;
    auto array_ptr = ros_message->left_p;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: right_m
  {
    size_t size = 9;
    auto array_ptr = ros_message->right_m;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: right_d
  {
    size_t size = 8;
    auto array_ptr = ros_message->right_d;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: right_r
  {
    size_t size = 9;
    auto array_ptr = ros_message->right_r;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: right_p
  {
    size_t size = 12;
    auto array_ptr = ros_message->right_p;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_multisense_msgs
size_t get_serialized_size_multisense_msgs__msg__RawCamCal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RawCamCal__ros_msg_type * ros_message = static_cast<const _RawCamCal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name left_m
  {
    size_t array_size = 9;
    auto array_ptr = ros_message->left_m;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_d
  {
    size_t array_size = 8;
    auto array_ptr = ros_message->left_d;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_r
  {
    size_t array_size = 9;
    auto array_ptr = ros_message->left_r;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_p
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->left_p;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_m
  {
    size_t array_size = 9;
    auto array_ptr = ros_message->right_m;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_d
  {
    size_t array_size = 8;
    auto array_ptr = ros_message->right_d;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_r
  {
    size_t array_size = 9;
    auto array_ptr = ros_message->right_r;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_p
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->right_p;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RawCamCal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_multisense_msgs__msg__RawCamCal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_multisense_msgs
size_t max_serialized_size_multisense_msgs__msg__RawCamCal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: left_m
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_d
  {
    size_t array_size = 8;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_r
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_p
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_m
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_d
  {
    size_t array_size = 8;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_r
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_p
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = multisense_msgs__msg__RawCamCal;
    is_plain =
      (
      offsetof(DataType, right_p) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RawCamCal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_multisense_msgs__msg__RawCamCal(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RawCamCal = {
  "multisense_msgs::msg",
  "RawCamCal",
  _RawCamCal__cdr_serialize,
  _RawCamCal__cdr_deserialize,
  _RawCamCal__get_serialized_size,
  _RawCamCal__max_serialized_size
};

static rosidl_message_type_support_t _RawCamCal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RawCamCal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, multisense_msgs, msg, RawCamCal)() {
  return &_RawCamCal__type_support;
}

#if defined(__cplusplus)
}
#endif
