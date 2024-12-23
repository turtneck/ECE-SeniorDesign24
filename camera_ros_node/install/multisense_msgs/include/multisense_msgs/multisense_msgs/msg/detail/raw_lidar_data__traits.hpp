// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from multisense_msgs:msg/RawLidarData.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_DATA__TRAITS_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "multisense_msgs/msg/detail/raw_lidar_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time_start'
// Member 'time_end'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace multisense_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RawLidarData & msg,
  std::ostream & out)
{
  out << "{";
  // member: scan_count
  {
    out << "scan_count: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_count, out);
    out << ", ";
  }

  // member: time_start
  {
    out << "time_start: ";
    to_flow_style_yaml(msg.time_start, out);
    out << ", ";
  }

  // member: time_end
  {
    out << "time_end: ";
    to_flow_style_yaml(msg.time_end, out);
    out << ", ";
  }

  // member: angle_start
  {
    out << "angle_start: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_start, out);
    out << ", ";
  }

  // member: angle_end
  {
    out << "angle_end: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_end, out);
    out << ", ";
  }

  // member: distance
  {
    if (msg.distance.size() == 0) {
      out << "distance: []";
    } else {
      out << "distance: [";
      size_t pending_items = msg.distance.size();
      for (auto item : msg.distance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: intensity
  {
    if (msg.intensity.size() == 0) {
      out << "intensity: []";
    } else {
      out << "intensity: [";
      size_t pending_items = msg.intensity.size();
      for (auto item : msg.intensity) {
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
  const RawLidarData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: scan_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_count: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_count, out);
    out << "\n";
  }

  // member: time_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_start:\n";
    to_block_style_yaml(msg.time_start, out, indentation + 2);
  }

  // member: time_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_end:\n";
    to_block_style_yaml(msg.time_end, out, indentation + 2);
  }

  // member: angle_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_start: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_start, out);
    out << "\n";
  }

  // member: angle_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_end: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_end, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.distance.size() == 0) {
      out << "distance: []\n";
    } else {
      out << "distance:\n";
      for (auto item : msg.distance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: intensity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intensity.size() == 0) {
      out << "intensity: []\n";
    } else {
      out << "intensity:\n";
      for (auto item : msg.intensity) {
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

inline std::string to_yaml(const RawLidarData & msg, bool use_flow_style = false)
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
  const multisense_msgs::msg::RawLidarData & msg,
  std::ostream & out, size_t indentation = 0)
{
  multisense_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multisense_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const multisense_msgs::msg::RawLidarData & msg)
{
  return multisense_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<multisense_msgs::msg::RawLidarData>()
{
  return "multisense_msgs::msg::RawLidarData";
}

template<>
inline const char * name<multisense_msgs::msg::RawLidarData>()
{
  return "multisense_msgs/msg/RawLidarData";
}

template<>
struct has_fixed_size<multisense_msgs::msg::RawLidarData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<multisense_msgs::msg::RawLidarData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<multisense_msgs::msg::RawLidarData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_DATA__TRAITS_HPP_
