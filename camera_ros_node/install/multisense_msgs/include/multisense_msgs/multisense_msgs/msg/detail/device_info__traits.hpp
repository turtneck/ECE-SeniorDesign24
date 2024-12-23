// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from multisense_msgs:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__DEVICE_INFO__TRAITS_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__DEVICE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "multisense_msgs/msg/detail/device_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace multisense_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DeviceInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: device_name
  {
    out << "device_name: ";
    rosidl_generator_traits::value_to_yaml(msg.device_name, out);
    out << ", ";
  }

  // member: build_date
  {
    out << "build_date: ";
    rosidl_generator_traits::value_to_yaml(msg.build_date, out);
    out << ", ";
  }

  // member: serial_number
  {
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << ", ";
  }

  // member: device_revision
  {
    out << "device_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.device_revision, out);
    out << ", ";
  }

  // member: number_of_pcbs
  {
    out << "number_of_pcbs: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_pcbs, out);
    out << ", ";
  }

  // member: pcb_serial_numbers
  {
    if (msg.pcb_serial_numbers.size() == 0) {
      out << "pcb_serial_numbers: []";
    } else {
      out << "pcb_serial_numbers: [";
      size_t pending_items = msg.pcb_serial_numbers.size();
      for (auto item : msg.pcb_serial_numbers) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pcb_names
  {
    if (msg.pcb_names.size() == 0) {
      out << "pcb_names: []";
    } else {
      out << "pcb_names: [";
      size_t pending_items = msg.pcb_names.size();
      for (auto item : msg.pcb_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: imager_name
  {
    out << "imager_name: ";
    rosidl_generator_traits::value_to_yaml(msg.imager_name, out);
    out << ", ";
  }

  // member: imager_type
  {
    out << "imager_type: ";
    rosidl_generator_traits::value_to_yaml(msg.imager_type, out);
    out << ", ";
  }

  // member: imager_width
  {
    out << "imager_width: ";
    rosidl_generator_traits::value_to_yaml(msg.imager_width, out);
    out << ", ";
  }

  // member: imager_height
  {
    out << "imager_height: ";
    rosidl_generator_traits::value_to_yaml(msg.imager_height, out);
    out << ", ";
  }

  // member: lens_name
  {
    out << "lens_name: ";
    rosidl_generator_traits::value_to_yaml(msg.lens_name, out);
    out << ", ";
  }

  // member: lens_type
  {
    out << "lens_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lens_type, out);
    out << ", ";
  }

  // member: nominal_baseline
  {
    out << "nominal_baseline: ";
    rosidl_generator_traits::value_to_yaml(msg.nominal_baseline, out);
    out << ", ";
  }

  // member: nominal_focal_length
  {
    out << "nominal_focal_length: ";
    rosidl_generator_traits::value_to_yaml(msg.nominal_focal_length, out);
    out << ", ";
  }

  // member: nominal_relative_aperture
  {
    out << "nominal_relative_aperture: ";
    rosidl_generator_traits::value_to_yaml(msg.nominal_relative_aperture, out);
    out << ", ";
  }

  // member: lighting_type
  {
    out << "lighting_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lighting_type, out);
    out << ", ";
  }

  // member: number_of_lights
  {
    out << "number_of_lights: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_lights, out);
    out << ", ";
  }

  // member: laser_name
  {
    out << "laser_name: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_name, out);
    out << ", ";
  }

  // member: laser_type
  {
    out << "laser_type: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_type, out);
    out << ", ";
  }

  // member: motor_name
  {
    out << "motor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_name, out);
    out << ", ";
  }

  // member: motor_type
  {
    out << "motor_type: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_type, out);
    out << ", ";
  }

  // member: motor_gear_reduction
  {
    out << "motor_gear_reduction: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_gear_reduction, out);
    out << ", ";
  }

  // member: api_build_date
  {
    out << "api_build_date: ";
    rosidl_generator_traits::value_to_yaml(msg.api_build_date, out);
    out << ", ";
  }

  // member: api_version
  {
    out << "api_version: ";
    rosidl_generator_traits::value_to_yaml(msg.api_version, out);
    out << ", ";
  }

  // member: firmware_build_date
  {
    out << "firmware_build_date: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_build_date, out);
    out << ", ";
  }

  // member: firmware_version
  {
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << ", ";
  }

  // member: bitstream_version
  {
    out << "bitstream_version: ";
    rosidl_generator_traits::value_to_yaml(msg.bitstream_version, out);
    out << ", ";
  }

  // member: bitstream_magic
  {
    out << "bitstream_magic: ";
    rosidl_generator_traits::value_to_yaml(msg.bitstream_magic, out);
    out << ", ";
  }

  // member: fpga_dna
  {
    out << "fpga_dna: ";
    rosidl_generator_traits::value_to_yaml(msg.fpga_dna, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeviceInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: device_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_name: ";
    rosidl_generator_traits::value_to_yaml(msg.device_name, out);
    out << "\n";
  }

  // member: build_date
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "build_date: ";
    rosidl_generator_traits::value_to_yaml(msg.build_date, out);
    out << "\n";
  }

  // member: serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << "\n";
  }

  // member: device_revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.device_revision, out);
    out << "\n";
  }

  // member: number_of_pcbs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_pcbs: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_pcbs, out);
    out << "\n";
  }

  // member: pcb_serial_numbers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pcb_serial_numbers.size() == 0) {
      out << "pcb_serial_numbers: []\n";
    } else {
      out << "pcb_serial_numbers:\n";
      for (auto item : msg.pcb_serial_numbers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pcb_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pcb_names.size() == 0) {
      out << "pcb_names: []\n";
    } else {
      out << "pcb_names:\n";
      for (auto item : msg.pcb_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: imager_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imager_name: ";
    rosidl_generator_traits::value_to_yaml(msg.imager_name, out);
    out << "\n";
  }

  // member: imager_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imager_type: ";
    rosidl_generator_traits::value_to_yaml(msg.imager_type, out);
    out << "\n";
  }

  // member: imager_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imager_width: ";
    rosidl_generator_traits::value_to_yaml(msg.imager_width, out);
    out << "\n";
  }

  // member: imager_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imager_height: ";
    rosidl_generator_traits::value_to_yaml(msg.imager_height, out);
    out << "\n";
  }

  // member: lens_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lens_name: ";
    rosidl_generator_traits::value_to_yaml(msg.lens_name, out);
    out << "\n";
  }

  // member: lens_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lens_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lens_type, out);
    out << "\n";
  }

  // member: nominal_baseline
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nominal_baseline: ";
    rosidl_generator_traits::value_to_yaml(msg.nominal_baseline, out);
    out << "\n";
  }

  // member: nominal_focal_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nominal_focal_length: ";
    rosidl_generator_traits::value_to_yaml(msg.nominal_focal_length, out);
    out << "\n";
  }

  // member: nominal_relative_aperture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nominal_relative_aperture: ";
    rosidl_generator_traits::value_to_yaml(msg.nominal_relative_aperture, out);
    out << "\n";
  }

  // member: lighting_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lighting_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lighting_type, out);
    out << "\n";
  }

  // member: number_of_lights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_lights: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_lights, out);
    out << "\n";
  }

  // member: laser_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laser_name: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_name, out);
    out << "\n";
  }

  // member: laser_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laser_type: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_type, out);
    out << "\n";
  }

  // member: motor_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_name, out);
    out << "\n";
  }

  // member: motor_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_type: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_type, out);
    out << "\n";
  }

  // member: motor_gear_reduction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_gear_reduction: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_gear_reduction, out);
    out << "\n";
  }

  // member: api_build_date
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "api_build_date: ";
    rosidl_generator_traits::value_to_yaml(msg.api_build_date, out);
    out << "\n";
  }

  // member: api_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "api_version: ";
    rosidl_generator_traits::value_to_yaml(msg.api_version, out);
    out << "\n";
  }

  // member: firmware_build_date
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firmware_build_date: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_build_date, out);
    out << "\n";
  }

  // member: firmware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << "\n";
  }

  // member: bitstream_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bitstream_version: ";
    rosidl_generator_traits::value_to_yaml(msg.bitstream_version, out);
    out << "\n";
  }

  // member: bitstream_magic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bitstream_magic: ";
    rosidl_generator_traits::value_to_yaml(msg.bitstream_magic, out);
    out << "\n";
  }

  // member: fpga_dna
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fpga_dna: ";
    rosidl_generator_traits::value_to_yaml(msg.fpga_dna, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeviceInfo & msg, bool use_flow_style = false)
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
  const multisense_msgs::msg::DeviceInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  multisense_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multisense_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const multisense_msgs::msg::DeviceInfo & msg)
{
  return multisense_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<multisense_msgs::msg::DeviceInfo>()
{
  return "multisense_msgs::msg::DeviceInfo";
}

template<>
inline const char * name<multisense_msgs::msg::DeviceInfo>()
{
  return "multisense_msgs/msg/DeviceInfo";
}

template<>
struct has_fixed_size<multisense_msgs::msg::DeviceInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<multisense_msgs::msg::DeviceInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<multisense_msgs::msg::DeviceInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MULTISENSE_MSGS__MSG__DETAIL__DEVICE_INFO__TRAITS_HPP_
