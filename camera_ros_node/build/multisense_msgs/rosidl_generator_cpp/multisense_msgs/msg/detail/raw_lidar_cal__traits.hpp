// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from multisense_msgs:msg/RawLidarCal.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_CAL__TRAITS_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_CAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "multisense_msgs/msg/detail/raw_lidar_cal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace multisense_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RawLidarCal & msg,
  std::ostream & out)
{
  out << "{";
  // member: laser_to_spindle
  {
    if (msg.laser_to_spindle.size() == 0) {
      out << "laser_to_spindle: []";
    } else {
      out << "laser_to_spindle: [";
      size_t pending_items = msg.laser_to_spindle.size();
      for (auto item : msg.laser_to_spindle) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: camera_to_spindle_fixed
  {
    if (msg.camera_to_spindle_fixed.size() == 0) {
      out << "camera_to_spindle_fixed: []";
    } else {
      out << "camera_to_spindle_fixed: [";
      size_t pending_items = msg.camera_to_spindle_fixed.size();
      for (auto item : msg.camera_to_spindle_fixed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RawLidarCal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: laser_to_spindle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.laser_to_spindle.size() == 0) {
      out << "laser_to_spindle: []\n";
    } else {
      out << "laser_to_spindle:\n";
      for (auto item : msg.laser_to_spindle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: camera_to_spindle_fixed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.camera_to_spindle_fixed.size() == 0) {
      out << "camera_to_spindle_fixed: []\n";
    } else {
      out << "camera_to_spindle_fixed:\n";
      for (auto item : msg.camera_to_spindle_fixed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RawLidarCal & msg, bool use_flow_style = false)
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
  const multisense_msgs::msg::RawLidarCal & msg,
  std::ostream & out, size_t indentation = 0)
{
  multisense_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multisense_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const multisense_msgs::msg::RawLidarCal & msg)
{
  return multisense_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<multisense_msgs::msg::RawLidarCal>()
{
  return "multisense_msgs::msg::RawLidarCal";
}

template<>
inline const char * name<multisense_msgs::msg::RawLidarCal>()
{
  return "multisense_msgs/msg/RawLidarCal";
}

template<>
struct has_fixed_size<multisense_msgs::msg::RawLidarCal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<multisense_msgs::msg::RawLidarCal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<multisense_msgs::msg::RawLidarCal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_CAL__TRAITS_HPP_
