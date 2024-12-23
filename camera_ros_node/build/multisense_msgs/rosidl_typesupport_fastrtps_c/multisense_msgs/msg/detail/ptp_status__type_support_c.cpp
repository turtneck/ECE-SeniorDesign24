// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from multisense_msgs:msg/PtpStatus.idl
// generated code does not contain a copyright notice
#include "multisense_msgs/msg/detail/ptp_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "multisense_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "multisense_msgs/msg/detail/ptp_status__struct.h"
#include "multisense_msgs/msg/detail/ptp_status__functions.h"
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


using _PtpStatus__ros_msg_type = multisense_msgs__msg__PtpStatus;

static bool _PtpStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PtpStatus__ros_msg_type * ros_message = static_cast<const _PtpStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: gm_present
  {
    cdr << (ros_message->gm_present ? true : false);
  }

  // Field name: gm_id
  {
    size_t size = 8;
    auto array_ptr = ros_message->gm_id;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gm_offset
  {
    cdr << ros_message->gm_offset;
  }

  // Field name: path_delay
  {
    cdr << ros_message->path_delay;
  }

  // Field name: steps_removed
  {
    cdr << ros_message->steps_removed;
  }

  return true;
}

static bool _PtpStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PtpStatus__ros_msg_type * ros_message = static_cast<_PtpStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: gm_present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gm_present = tmp ? true : false;
  }

  // Field name: gm_id
  {
    size_t size = 8;
    auto array_ptr = ros_message->gm_id;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gm_offset
  {
    cdr >> ros_message->gm_offset;
  }

  // Field name: path_delay
  {
    cdr >> ros_message->path_delay;
  }

  // Field name: steps_removed
  {
    cdr >> ros_message->steps_removed;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_multisense_msgs
size_t get_serialized_size_multisense_msgs__msg__PtpStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PtpStatus__ros_msg_type * ros_message = static_cast<const _PtpStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name gm_present
  {
    size_t item_size = sizeof(ros_message->gm_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gm_id
  {
    size_t array_size = 8;
    auto array_ptr = ros_message->gm_id;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gm_offset
  {
    size_t item_size = sizeof(ros_message->gm_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name path_delay
  {
    size_t item_size = sizeof(ros_message->path_delay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steps_removed
  {
    size_t item_size = sizeof(ros_message->steps_removed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PtpStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_multisense_msgs__msg__PtpStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_multisense_msgs
size_t max_serialized_size_multisense_msgs__msg__PtpStatus(
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

  // member: gm_present
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gm_id
  {
    size_t array_size = 8;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gm_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: path_delay
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steps_removed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = multisense_msgs__msg__PtpStatus;
    is_plain =
      (
      offsetof(DataType, steps_removed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PtpStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_multisense_msgs__msg__PtpStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PtpStatus = {
  "multisense_msgs::msg",
  "PtpStatus",
  _PtpStatus__cdr_serialize,
  _PtpStatus__cdr_deserialize,
  _PtpStatus__get_serialized_size,
  _PtpStatus__max_serialized_size
};

static rosidl_message_type_support_t _PtpStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PtpStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, multisense_msgs, msg, PtpStatus)() {
  return &_PtpStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
