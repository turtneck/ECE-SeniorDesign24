// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from multisense_msgs:msg/RawCamConfig.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CONFIG__TRAITS_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "multisense_msgs/msg/detail/raw_cam_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace multisense_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RawCamConfig & msg,
  std::ostream & out)
{
  out << "{";
  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: frames_per_second
  {
    out << "frames_per_second: ";
    rosidl_generator_traits::value_to_yaml(msg.frames_per_second, out);
    out << ", ";
  }

  // member: gain
  {
    out << "gain: ";
    rosidl_generator_traits::value_to_yaml(msg.gain, out);
    out << ", ";
  }

  // member: exposure_time
  {
    out << "exposure_time: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_time, out);
    out << ", ";
  }

  // member: fx
  {
    out << "fx: ";
    rosidl_generator_traits::value_to_yaml(msg.fx, out);
    out << ", ";
  }

  // member: fy
  {
    out << "fy: ";
    rosidl_generator_traits::value_to_yaml(msg.fy, out);
    out << ", ";
  }

  // member: cx
  {
    out << "cx: ";
    rosidl_generator_traits::value_to_yaml(msg.cx, out);
    out << ", ";
  }

  // member: cy
  {
    out << "cy: ";
    rosidl_generator_traits::value_to_yaml(msg.cy, out);
    out << ", ";
  }

  // member: tx
  {
    out << "tx: ";
    rosidl_generator_traits::value_to_yaml(msg.tx, out);
    out << ", ";
  }

  // member: ty
  {
    out << "ty: ";
    rosidl_generator_traits::value_to_yaml(msg.ty, out);
    out << ", ";
  }

  // member: tz
  {
    out << "tz: ";
    rosidl_generator_traits::value_to_yaml(msg.tz, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RawCamConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: frames_per_second
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frames_per_second: ";
    rosidl_generator_traits::value_to_yaml(msg.frames_per_second, out);
    out << "\n";
  }

  // member: gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gain: ";
    rosidl_generator_traits::value_to_yaml(msg.gain, out);
    out << "\n";
  }

  // member: exposure_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exposure_time: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure_time, out);
    out << "\n";
  }

  // member: fx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fx: ";
    rosidl_generator_traits::value_to_yaml(msg.fx, out);
    out << "\n";
  }

  // member: fy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fy: ";
    rosidl_generator_traits::value_to_yaml(msg.fy, out);
    out << "\n";
  }

  // member: cx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cx: ";
    rosidl_generator_traits::value_to_yaml(msg.cx, out);
    out << "\n";
  }

  // member: cy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cy: ";
    rosidl_generator_traits::value_to_yaml(msg.cy, out);
    out << "\n";
  }

  // member: tx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx: ";
    rosidl_generator_traits::value_to_yaml(msg.tx, out);
    out << "\n";
  }

  // member: ty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ty: ";
    rosidl_generator_traits::value_to_yaml(msg.ty, out);
    out << "\n";
  }

  // member: tz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tz: ";
    rosidl_generator_traits::value_to_yaml(msg.tz, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RawCamConfig & msg, bool use_flow_style = false)
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
  const multisense_msgs::msg::RawCamConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  multisense_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multisense_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const multisense_msgs::msg::RawCamConfig & msg)
{
  return multisense_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<multisense_msgs::msg::RawCamConfig>()
{
  return "multisense_msgs::msg::RawCamConfig";
}

template<>
inline const char * name<multisense_msgs::msg::RawCamConfig>()
{
  return "multisense_msgs/msg/RawCamConfig";
}

template<>
struct has_fixed_size<multisense_msgs::msg::RawCamConfig>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<multisense_msgs::msg::RawCamConfig>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<multisense_msgs::msg::RawCamConfig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CONFIG__TRAITS_HPP_
