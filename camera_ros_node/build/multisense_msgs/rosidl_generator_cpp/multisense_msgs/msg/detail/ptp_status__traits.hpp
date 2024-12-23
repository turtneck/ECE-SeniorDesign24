// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from multisense_msgs:msg/PtpStatus.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__PTP_STATUS__TRAITS_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__PTP_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "multisense_msgs/msg/detail/ptp_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace multisense_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PtpStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: gm_present
  {
    out << "gm_present: ";
    rosidl_generator_traits::value_to_yaml(msg.gm_present, out);
    out << ", ";
  }

  // member: gm_id
  {
    if (msg.gm_id.size() == 0) {
      out << "gm_id: []";
    } else {
      out << "gm_id: [";
      size_t pending_items = msg.gm_id.size();
      for (auto item : msg.gm_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gm_offset
  {
    out << "gm_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.gm_offset, out);
    out << ", ";
  }

  // member: path_delay
  {
    out << "path_delay: ";
    rosidl_generator_traits::value_to_yaml(msg.path_delay, out);
    out << ", ";
  }

  // member: steps_removed
  {
    out << "steps_removed: ";
    rosidl_generator_traits::value_to_yaml(msg.steps_removed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PtpStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gm_present
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gm_present: ";
    rosidl_generator_traits::value_to_yaml(msg.gm_present, out);
    out << "\n";
  }

  // member: gm_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gm_id.size() == 0) {
      out << "gm_id: []\n";
    } else {
      out << "gm_id:\n";
      for (auto item : msg.gm_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gm_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gm_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.gm_offset, out);
    out << "\n";
  }

  // member: path_delay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_delay: ";
    rosidl_generator_traits::value_to_yaml(msg.path_delay, out);
    out << "\n";
  }

  // member: steps_removed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steps_removed: ";
    rosidl_generator_traits::value_to_yaml(msg.steps_removed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PtpStatus & msg, bool use_flow_style = false)
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
  const multisense_msgs::msg::PtpStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  multisense_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multisense_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const multisense_msgs::msg::PtpStatus & msg)
{
  return multisense_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<multisense_msgs::msg::PtpStatus>()
{
  return "multisense_msgs::msg::PtpStatus";
}

template<>
inline const char * name<multisense_msgs::msg::PtpStatus>()
{
  return "multisense_msgs/msg/PtpStatus";
}

template<>
struct has_fixed_size<multisense_msgs::msg::PtpStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<multisense_msgs::msg::PtpStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<multisense_msgs::msg::PtpStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MULTISENSE_MSGS__MSG__DETAIL__PTP_STATUS__TRAITS_HPP_
