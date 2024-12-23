// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from multisense_msgs:msg/DeviceStatus.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__DEVICE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__DEVICE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "multisense_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "multisense_msgs/msg/detail/device_status__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace multisense_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multisense_msgs
cdr_serialize(
  const multisense_msgs::msg::DeviceStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multisense_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  multisense_msgs::msg::DeviceStatus & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multisense_msgs
get_serialized_size(
  const multisense_msgs::msg::DeviceStatus & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multisense_msgs
max_serialized_size_DeviceStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace multisense_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multisense_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, multisense_msgs, msg, DeviceStatus)();

#ifdef __cplusplus
}
#endif

#endif  // MULTISENSE_MSGS__MSG__DETAIL__DEVICE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
