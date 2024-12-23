// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from multisense_msgs:msg/StampedPps.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__STAMPED_PPS__TRAITS_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__STAMPED_PPS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "multisense_msgs/msg/detail/stamped_pps__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
// Member 'host_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace multisense_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StampedPps & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
    out << ", ";
  }

  // member: host_time
  {
    out << "host_time: ";
    to_flow_style_yaml(msg.host_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StampedPps & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }

  // member: host_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "host_time:\n";
    to_block_style_yaml(msg.host_time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StampedPps & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace multisense_msgs

namespace rosidl_generator_traits
{

[[deprecated("use multisense_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const multisense_msgs::msg::StampedPps & msg,
  std::ostream & out, size_t indentation = 0)
{
  multisense_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multisense_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const multisense_msgs::msg::StampedPps & msg)
{
  return multisense_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<multisense_msgs::msg::StampedPps>()
{
  return "multisense_msgs::msg::StampedPps";
}

template<>
inline const char * name<multisense_msgs::msg::StampedPps>()
{
  return "multisense_msgs/msg/StampedPps";
}

template<>
struct has_fixed_size<multisense_msgs::msg::StampedPps>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<multisense_msgs::msg::StampedPps>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<multisense_msgs::msg::StampedPps>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MULTISENSE_MSGS__MSG__DETAIL__STAMPED_PPS__TRAITS_HPP_
