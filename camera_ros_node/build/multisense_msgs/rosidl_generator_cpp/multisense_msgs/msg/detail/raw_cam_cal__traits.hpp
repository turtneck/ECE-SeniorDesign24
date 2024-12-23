// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from multisense_msgs:msg/RawCamCal.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CAL__TRAITS_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "multisense_msgs/msg/detail/raw_cam_cal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace multisense_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RawCamCal & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_m
  {
    if (msg.left_m.size() == 0) {
      out << "left_m: []";
    } else {
      out << "left_m: [";
      size_t pending_items = msg.left_m.size();
      for (auto item : msg.left_m) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left_d
  {
    if (msg.left_d.size() == 0) {
      out << "left_d: []";
    } else {
      out << "left_d: [";
      size_t pending_items = msg.left_d.size();
      for (auto item : msg.left_d) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left_r
  {
    if (msg.left_r.size() == 0) {
      out << "left_r: []";
    } else {
      out << "left_r: [";
      size_t pending_items = msg.left_r.size();
      for (auto item : msg.left_r) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left_p
  {
    if (msg.left_p.size() == 0) {
      out << "left_p: []";
    } else {
      out << "left_p: [";
      size_t pending_items = msg.left_p.size();
      for (auto item : msg.left_p) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_m
  {
    if (msg.right_m.size() == 0) {
      out << "right_m: []";
    } else {
      out << "right_m: [";
      size_t pending_items = msg.right_m.size();
      for (auto item : msg.right_m) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_d
  {
    if (msg.right_d.size() == 0) {
      out << "right_d: []";
    } else {
      out << "right_d: [";
      size_t pending_items = msg.right_d.size();
      for (auto item : msg.right_d) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_r
  {
    if (msg.right_r.size() == 0) {
      out << "right_r: []";
    } else {
      out << "right_r: [";
      size_t pending_items = msg.right_r.size();
      for (auto item : msg.right_r) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_p
  {
    if (msg.right_p.size() == 0) {
      out << "right_p: []";
    } else {
      out << "right_p: [";
      size_t pending_items = msg.right_p.size();
      for (auto item : msg.right_p) {
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
  const RawCamCal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_m.size() == 0) {
      out << "left_m: []\n";
    } else {
      out << "left_m:\n";
      for (auto item : msg.left_m) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: left_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_d.size() == 0) {
      out << "left_d: []\n";
    } else {
      out << "left_d:\n";
      for (auto item : msg.left_d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: left_r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_r.size() == 0) {
      out << "left_r: []\n";
    } else {
      out << "left_r:\n";
      for (auto item : msg.left_r) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: left_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_p.size() == 0) {
      out << "left_p: []\n";
    } else {
      out << "left_p:\n";
      for (auto item : msg.left_p) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_m.size() == 0) {
      out << "right_m: []\n";
    } else {
      out << "right_m:\n";
      for (auto item : msg.right_m) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_d.size() == 0) {
      out << "right_d: []\n";
    } else {
      out << "right_d:\n";
      for (auto item : msg.right_d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right_r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_r.size() == 0) {
      out << "right_r: []\n";
    } else {
      out << "right_r:\n";
      for (auto item : msg.right_r) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_p.size() == 0) {
      out << "right_p: []\n";
    } else {
      out << "right_p:\n";
      for (auto item : msg.right_p) {
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

inline std::string to_yaml(const RawCamCal & msg, bool use_flow_style = false)
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
  const multisense_msgs::msg::RawCamCal & msg,
  std::ostream & out, size_t indentation = 0)
{
  multisense_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multisense_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const multisense_msgs::msg::RawCamCal & msg)
{
  return multisense_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<multisense_msgs::msg::RawCamCal>()
{
  return "multisense_msgs::msg::RawCamCal";
}

template<>
inline const char * name<multisense_msgs::msg::RawCamCal>()
{
  return "multisense_msgs/msg/RawCamCal";
}

template<>
struct has_fixed_size<multisense_msgs::msg::RawCamCal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<multisense_msgs::msg::RawCamCal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<multisense_msgs::msg::RawCamCal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CAL__TRAITS_HPP_
