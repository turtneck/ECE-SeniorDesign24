// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from multisense_msgs:msg/PtpStatus.idl
// generated code does not contain a copyright notice
#include "multisense_msgs/msg/detail/ptp_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "multisense_msgs/msg/detail/ptp_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace multisense_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multisense_msgs
cdr_serialize(
  const multisense_msgs::msg::PtpStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: gm_present
  cdr << (ros_message.gm_present ? true : false);
  // Member: gm_id
  {
    cdr << ros_message.gm_id;
  }
  // Member: gm_offset
  cdr << ros_message.gm_offset;
  // Member: path_delay
  cdr << ros_message.path_delay;
  // Member: steps_removed
  cdr << ros_message.steps_removed;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multisense_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  multisense_msgs::msg::PtpStatus & ros_message)
{
  // Member: gm_present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gm_present = tmp ? true : false;
  }

  // Member: gm_id
  {
    cdr >> ros_message.gm_id;
  }

  // Member: gm_offset
  cdr >> ros_message.gm_offset;

  // Member: path_delay
  cdr >> ros_message.path_delay;

  // Member: steps_removed
  cdr >> ros_message.steps_removed;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multisense_msgs
get_serialized_size(
  const multisense_msgs::msg::PtpStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: gm_present
  {
    size_t item_size = sizeof(ros_message.gm_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gm_id
  {
    size_t array_size = 8;
    size_t item_size = sizeof(ros_message.gm_id[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gm_offset
  {
    size_t item_size = sizeof(ros_message.gm_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: path_delay
  {
    size_t item_size = sizeof(ros_message.path_delay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steps_removed
  {
    size_t item_size = sizeof(ros_message.steps_removed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multisense_msgs
max_serialized_size_PtpStatus(
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


  // Member: gm_present
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gm_id
  {
    size_t array_size = 8;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gm_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: path_delay
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: steps_removed
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
    using DataType = multisense_msgs::msg::PtpStatus;
    is_plain =
      (
      offsetof(DataType, steps_removed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PtpStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const multisense_msgs::msg::PtpStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PtpStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<multisense_msgs::msg::PtpStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PtpStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const multisense_msgs::msg::PtpStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PtpStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PtpStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PtpStatus__callbacks = {
  "multisense_msgs::msg",
  "PtpStatus",
  _PtpStatus__cdr_serialize,
  _PtpStatus__cdr_deserialize,
  _PtpStatus__get_serialized_size,
  _PtpStatus__max_serialized_size
};

static rosidl_message_type_support_t _PtpStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PtpStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace multisense_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_multisense_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<multisense_msgs::msg::PtpStatus>()
{
  return &multisense_msgs::msg::typesupport_fastrtps_cpp::_PtpStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, multisense_msgs, msg, PtpStatus)() {
  return &multisense_msgs::msg::typesupport_fastrtps_cpp::_PtpStatus__handle;
}

#ifdef __cplusplus
}
#endif
