// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from multisense_msgs:msg/RawCamData.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_DATA__TRAITS_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "multisense_msgs/msg/detail/raw_cam_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time_stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace multisense_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RawCamData & msg,
  std::ostream & out)
{
  out << "{";
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

  // member: frame_count
  {
    out << "frame_count: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_count, out);
    out << ", ";
  }

  // member: time_stamp
  {
    out << "time_stamp: ";
    to_flow_style_yaml(msg.time_stamp, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

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

  // member: gray_scale_image
  {
    if (msg.gray_scale_image.size() == 0) {
      out << "gray_scale_image: []";
    } else {
      out << "gray_scale_image: [";
      size_t pending_items = msg.gray_scale_image.size();
      for (auto item : msg.gray_scale_image) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: disparity_image
  {
    if (msg.disparity_image.size() == 0) {
      out << "disparity_image: []";
    } else {
      out << "disparity_image: [";
      size_t pending_items = msg.disparity_image.size();
      for (auto item : msg.disparity_image) {
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
  const RawCamData & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: frame_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_count: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_count, out);
    out << "\n";
  }

  // member: time_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_stamp:\n";
    to_block_style_yaml(msg.time_stamp, out, indentation + 2);
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

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

  // member: gray_scale_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gray_scale_image.size() == 0) {
      out << "gray_scale_image: []\n";
    } else {
      out << "gray_scale_image:\n";
      for (auto item : msg.gray_scale_image) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: disparity_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.disparity_image.size() == 0) {
      out << "disparity_image: []\n";
    } else {
      out << "disparity_image:\n";
      for (auto item : msg.disparity_image) {
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

inline std::string to_yaml(const RawCamData & msg, bool use_flow_style = false)
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
  const multisense_msgs::msg::RawCamData & msg,
  std::ostream & out, size_t indentation = 0)
{
  multisense_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multisense_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const multisense_msgs::msg::RawCamData & msg)
{
  return multisense_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<multisense_msgs::msg::RawCamData>()
{
  return "multisense_msgs::msg::RawCamData";
}

template<>
inline const char * name<multisense_msgs::msg::RawCamData>()
{
  return "multisense_msgs/msg/RawCamData";
}

template<>
struct has_fixed_size<multisense_msgs::msg::RawCamData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<multisense_msgs::msg::RawCamData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<multisense_msgs::msg::RawCamData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_DATA__TRAITS_HPP_
