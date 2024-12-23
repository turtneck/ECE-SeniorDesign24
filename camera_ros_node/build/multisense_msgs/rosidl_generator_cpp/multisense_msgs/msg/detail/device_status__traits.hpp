// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from multisense_msgs:msg/DeviceStatus.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__DEVICE_STATUS__TRAITS_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__DEVICE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "multisense_msgs/msg/detail/device_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time_stamp'
// Member 'uptime'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace multisense_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DeviceStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_stamp
  {
    out << "time_stamp: ";
    to_flow_style_yaml(msg.time_stamp, out);
    out << ", ";
  }

  // member: uptime
  {
    out << "uptime: ";
    to_flow_style_yaml(msg.uptime, out);
    out << ", ";
  }

  // member: system_ok
  {
    out << "system_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.system_ok, out);
    out << ", ";
  }

  // member: laser_ok
  {
    out << "laser_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_ok, out);
    out << ", ";
  }

  // member: laser_motor_ok
  {
    out << "laser_motor_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_motor_ok, out);
    out << ", ";
  }

  // member: cameras_ok
  {
    out << "cameras_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.cameras_ok, out);
    out << ", ";
  }

  // member: imu_ok
  {
    out << "imu_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_ok, out);
    out << ", ";
  }

  // member: external_leds_ok
  {
    out << "external_leds_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.external_leds_ok, out);
    out << ", ";
  }

  // member: processing_pipeline_ok
  {
    out << "processing_pipeline_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.processing_pipeline_ok, out);
    out << ", ";
  }

  // member: power_supply_temp
  {
    out << "power_supply_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.power_supply_temp, out);
    out << ", ";
  }

  // member: fpga_temp
  {
    out << "fpga_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.fpga_temp, out);
    out << ", ";
  }

  // member: left_imager_temp
  {
    out << "left_imager_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.left_imager_temp, out);
    out << ", ";
  }

  // member: right_imager_temp
  {
    out << "right_imager_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.right_imager_temp, out);
    out << ", ";
  }

  // member: input_voltage
  {
    out << "input_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.input_voltage, out);
    out << ", ";
  }

  // member: input_current
  {
    out << "input_current: ";
    rosidl_generator_traits::value_to_yaml(msg.input_current, out);
    out << ", ";
  }

  // member: fpga_power
  {
    out << "fpga_power: ";
    rosidl_generator_traits::value_to_yaml(msg.fpga_power, out);
    out << ", ";
  }

  // member: logic_power
  {
    out << "logic_power: ";
    rosidl_generator_traits::value_to_yaml(msg.logic_power, out);
    out << ", ";
  }

  // member: imager_power
  {
    out << "imager_power: ";
    rosidl_generator_traits::value_to_yaml(msg.imager_power, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeviceStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_stamp:\n";
    to_block_style_yaml(msg.time_stamp, out, indentation + 2);
  }

  // member: uptime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uptime:\n";
    to_block_style_yaml(msg.uptime, out, indentation + 2);
  }

  // member: system_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.system_ok, out);
    out << "\n";
  }

  // member: laser_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laser_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_ok, out);
    out << "\n";
  }

  // member: laser_motor_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laser_motor_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_motor_ok, out);
    out << "\n";
  }

  // member: cameras_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cameras_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.cameras_ok, out);
    out << "\n";
  }

  // member: imu_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_ok, out);
    out << "\n";
  }

  // member: external_leds_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "external_leds_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.external_leds_ok, out);
    out << "\n";
  }

  // member: processing_pipeline_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "processing_pipeline_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.processing_pipeline_ok, out);
    out << "\n";
  }

  // member: power_supply_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_supply_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.power_supply_temp, out);
    out << "\n";
  }

  // member: fpga_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fpga_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.fpga_temp, out);
    out << "\n";
  }

  // member: left_imager_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_imager_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.left_imager_temp, out);
    out << "\n";
  }

  // member: right_imager_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_imager_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.right_imager_temp, out);
    out << "\n";
  }

  // member: input_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.input_voltage, out);
    out << "\n";
  }

  // member: input_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_current: ";
    rosidl_generator_traits::value_to_yaml(msg.input_current, out);
    out << "\n";
  }

  // member: fpga_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fpga_power: ";
    rosidl_generator_traits::value_to_yaml(msg.fpga_power, out);
    out << "\n";
  }

  // member: logic_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "logic_power: ";
    rosidl_generator_traits::value_to_yaml(msg.logic_power, out);
    out << "\n";
  }

  // member: imager_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imager_power: ";
    rosidl_generator_traits::value_to_yaml(msg.imager_power, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeviceStatus & msg, bool use_flow_style = false)
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
  const multisense_msgs::msg::DeviceStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  multisense_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multisense_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const multisense_msgs::msg::DeviceStatus & msg)
{
  return multisense_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<multisense_msgs::msg::DeviceStatus>()
{
  return "multisense_msgs::msg::DeviceStatus";
}

template<>
inline const char * name<multisense_msgs::msg::DeviceStatus>()
{
  return "multisense_msgs/msg/DeviceStatus";
}

template<>
struct has_fixed_size<multisense_msgs::msg::DeviceStatus>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<multisense_msgs::msg::DeviceStatus>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<multisense_msgs::msg::DeviceStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MULTISENSE_MSGS__MSG__DETAIL__DEVICE_STATUS__TRAITS_HPP_
