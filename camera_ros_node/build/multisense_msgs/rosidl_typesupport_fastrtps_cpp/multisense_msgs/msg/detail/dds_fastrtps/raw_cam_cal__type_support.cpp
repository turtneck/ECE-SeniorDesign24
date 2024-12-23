// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from multisense_msgs:msg/RawCamCal.idl
// generated code does not contain a copyright notice
#include "multisense_msgs/msg/detail/raw_cam_cal__rosidl_typesupport_fastrtps_cpp.hpp"
#include "multisense_msgs/msg/detail/raw_cam_cal__struct.hpp"

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
  const multisense_msgs::msg::RawCamCal & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: left_m
  {
    cdr << ros_message.left_m;
  }
  // Member: left_d
  {
    cdr << ros_message.left_d;
  }
  // Member: left_r
  {
    cdr << ros_message.left_r;
  }
  // Member: left_p
  {
    cdr << ros_message.left_p;
  }
  // Member: right_m
  {
    cdr << ros_message.right_m;
  }
  // Member: right_d
  {
    cdr << ros_message.right_d;
  }
  // Member: right_r
  {
    cdr << ros_message.right_r;
  }
  // Member: right_p
  {
    cdr << ros_message.right_p;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multisense_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  multisense_msgs::msg::RawCamCal & ros_message)
{
  // Member: left_m
  {
    cdr >> ros_message.left_m;
  }

  // Member: left_d
  {
    cdr >> ros_message.left_d;
  }

  // Member: left_r
  {
    cdr >> ros_message.left_r;
  }

  // Member: left_p
  {
    cdr >> ros_message.left_p;
  }

  // Member: right_m
  {
    cdr >> ros_message.right_m;
  }

  // Member: right_d
  {
    cdr >> ros_message.right_d;
  }

  // Member: right_r
  {
    cdr >> ros_message.right_r;
  }

  // Member: right_p
  {
    cdr >> ros_message.right_p;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multisense_msgs
get_serialized_size(
  const multisense_msgs::msg::RawCamCal & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: left_m
  {
    size_t array_size = 9;
    size_t item_size = sizeof(ros_message.left_m[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_d
  {
    size_t array_size = 8;
    size_t item_size = sizeof(ros_message.left_d[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_r
  {
    size_t array_size = 9;
    size_t item_size = sizeof(ros_message.left_r[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_p
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.left_p[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_m
  {
    size_t array_size = 9;
    size_t item_size = sizeof(ros_message.right_m[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_d
  {
    size_t array_size = 8;
    size_t item_size = sizeof(ros_message.right_d[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_r
  {
    size_t array_size = 9;
    size_t item_size = sizeof(ros_message.right_r[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_p
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.right_p[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multisense_msgs
max_serialized_size_RawCamCal(
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


  // Member: left_m
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_d
  {
    size_t array_size = 8;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_r
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_p
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_m
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_d
  {
    size_t array_size = 8;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_r
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_p
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
    using DataType = multisense_msgs::msg::RawCamCal;
    is_plain =
      (
      offsetof(DataType, right_p) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RawCamCal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const multisense_msgs::msg::RawCamCal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RawCamCal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<multisense_msgs::msg::RawCamCal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RawCamCal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const multisense_msgs::msg::RawCamCal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RawCamCal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RawCamCal(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RawCamCal__callbacks = {
  "multisense_msgs::msg",
  "RawCamCal",
  _RawCamCal__cdr_serialize,
  _RawCamCal__cdr_deserialize,
  _RawCamCal__get_serialized_size,
  _RawCamCal__max_serialized_size
};

static rosidl_message_type_support_t _RawCamCal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RawCamCal__callbacks,
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
get_message_type_support_handle<multisense_msgs::msg::RawCamCal>()
{
  return &multisense_msgs::msg::typesupport_fastrtps_cpp::_RawCamCal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, multisense_msgs, msg, RawCamCal)() {
  return &multisense_msgs::msg::typesupport_fastrtps_cpp::_RawCamCal__handle;
}

#ifdef __cplusplus
}
#endif
