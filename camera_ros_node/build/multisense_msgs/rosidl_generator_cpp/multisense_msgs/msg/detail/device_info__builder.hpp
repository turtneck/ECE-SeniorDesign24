// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multisense_msgs:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__DEVICE_INFO__BUILDER_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__DEVICE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "multisense_msgs/msg/detail/device_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace multisense_msgs
{

namespace msg
{

namespace builder
{

class Init_DeviceInfo_fpga_dna
{
public:
  explicit Init_DeviceInfo_fpga_dna(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  ::multisense_msgs::msg::DeviceInfo fpga_dna(::multisense_msgs::msg::DeviceInfo::_fpga_dna_type arg)
  {
    msg_.fpga_dna = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_bitstream_magic
{
public:
  explicit Init_DeviceInfo_bitstream_magic(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_fpga_dna bitstream_magic(::multisense_msgs::msg::DeviceInfo::_bitstream_magic_type arg)
  {
    msg_.bitstream_magic = std::move(arg);
    return Init_DeviceInfo_fpga_dna(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_bitstream_version
{
public:
  explicit Init_DeviceInfo_bitstream_version(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_bitstream_magic bitstream_version(::multisense_msgs::msg::DeviceInfo::_bitstream_version_type arg)
  {
    msg_.bitstream_version = std::move(arg);
    return Init_DeviceInfo_bitstream_magic(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_firmware_version
{
public:
  explicit Init_DeviceInfo_firmware_version(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_bitstream_version firmware_version(::multisense_msgs::msg::DeviceInfo::_firmware_version_type arg)
  {
    msg_.firmware_version = std::move(arg);
    return Init_DeviceInfo_bitstream_version(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_firmware_build_date
{
public:
  explicit Init_DeviceInfo_firmware_build_date(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_firmware_version firmware_build_date(::multisense_msgs::msg::DeviceInfo::_firmware_build_date_type arg)
  {
    msg_.firmware_build_date = std::move(arg);
    return Init_DeviceInfo_firmware_version(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_api_version
{
public:
  explicit Init_DeviceInfo_api_version(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_firmware_build_date api_version(::multisense_msgs::msg::DeviceInfo::_api_version_type arg)
  {
    msg_.api_version = std::move(arg);
    return Init_DeviceInfo_firmware_build_date(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_api_build_date
{
public:
  explicit Init_DeviceInfo_api_build_date(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_api_version api_build_date(::multisense_msgs::msg::DeviceInfo::_api_build_date_type arg)
  {
    msg_.api_build_date = std::move(arg);
    return Init_DeviceInfo_api_version(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_motor_gear_reduction
{
public:
  explicit Init_DeviceInfo_motor_gear_reduction(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_api_build_date motor_gear_reduction(::multisense_msgs::msg::DeviceInfo::_motor_gear_reduction_type arg)
  {
    msg_.motor_gear_reduction = std::move(arg);
    return Init_DeviceInfo_api_build_date(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_motor_type
{
public:
  explicit Init_DeviceInfo_motor_type(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_motor_gear_reduction motor_type(::multisense_msgs::msg::DeviceInfo::_motor_type_type arg)
  {
    msg_.motor_type = std::move(arg);
    return Init_DeviceInfo_motor_gear_reduction(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_motor_name
{
public:
  explicit Init_DeviceInfo_motor_name(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_motor_type motor_name(::multisense_msgs::msg::DeviceInfo::_motor_name_type arg)
  {
    msg_.motor_name = std::move(arg);
    return Init_DeviceInfo_motor_type(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_laser_type
{
public:
  explicit Init_DeviceInfo_laser_type(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_motor_name laser_type(::multisense_msgs::msg::DeviceInfo::_laser_type_type arg)
  {
    msg_.laser_type = std::move(arg);
    return Init_DeviceInfo_motor_name(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_laser_name
{
public:
  explicit Init_DeviceInfo_laser_name(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_laser_type laser_name(::multisense_msgs::msg::DeviceInfo::_laser_name_type arg)
  {
    msg_.laser_name = std::move(arg);
    return Init_DeviceInfo_laser_type(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_number_of_lights
{
public:
  explicit Init_DeviceInfo_number_of_lights(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_laser_name number_of_lights(::multisense_msgs::msg::DeviceInfo::_number_of_lights_type arg)
  {
    msg_.number_of_lights = std::move(arg);
    return Init_DeviceInfo_laser_name(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_lighting_type
{
public:
  explicit Init_DeviceInfo_lighting_type(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_number_of_lights lighting_type(::multisense_msgs::msg::DeviceInfo::_lighting_type_type arg)
  {
    msg_.lighting_type = std::move(arg);
    return Init_DeviceInfo_number_of_lights(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_nominal_relative_aperture
{
public:
  explicit Init_DeviceInfo_nominal_relative_aperture(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_lighting_type nominal_relative_aperture(::multisense_msgs::msg::DeviceInfo::_nominal_relative_aperture_type arg)
  {
    msg_.nominal_relative_aperture = std::move(arg);
    return Init_DeviceInfo_lighting_type(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_nominal_focal_length
{
public:
  explicit Init_DeviceInfo_nominal_focal_length(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_nominal_relative_aperture nominal_focal_length(::multisense_msgs::msg::DeviceInfo::_nominal_focal_length_type arg)
  {
    msg_.nominal_focal_length = std::move(arg);
    return Init_DeviceInfo_nominal_relative_aperture(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_nominal_baseline
{
public:
  explicit Init_DeviceInfo_nominal_baseline(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_nominal_focal_length nominal_baseline(::multisense_msgs::msg::DeviceInfo::_nominal_baseline_type arg)
  {
    msg_.nominal_baseline = std::move(arg);
    return Init_DeviceInfo_nominal_focal_length(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_lens_type
{
public:
  explicit Init_DeviceInfo_lens_type(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_nominal_baseline lens_type(::multisense_msgs::msg::DeviceInfo::_lens_type_type arg)
  {
    msg_.lens_type = std::move(arg);
    return Init_DeviceInfo_nominal_baseline(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_lens_name
{
public:
  explicit Init_DeviceInfo_lens_name(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_lens_type lens_name(::multisense_msgs::msg::DeviceInfo::_lens_name_type arg)
  {
    msg_.lens_name = std::move(arg);
    return Init_DeviceInfo_lens_type(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_imager_height
{
public:
  explicit Init_DeviceInfo_imager_height(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_lens_name imager_height(::multisense_msgs::msg::DeviceInfo::_imager_height_type arg)
  {
    msg_.imager_height = std::move(arg);
    return Init_DeviceInfo_lens_name(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_imager_width
{
public:
  explicit Init_DeviceInfo_imager_width(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_imager_height imager_width(::multisense_msgs::msg::DeviceInfo::_imager_width_type arg)
  {
    msg_.imager_width = std::move(arg);
    return Init_DeviceInfo_imager_height(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_imager_type
{
public:
  explicit Init_DeviceInfo_imager_type(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_imager_width imager_type(::multisense_msgs::msg::DeviceInfo::_imager_type_type arg)
  {
    msg_.imager_type = std::move(arg);
    return Init_DeviceInfo_imager_width(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_imager_name
{
public:
  explicit Init_DeviceInfo_imager_name(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_imager_type imager_name(::multisense_msgs::msg::DeviceInfo::_imager_name_type arg)
  {
    msg_.imager_name = std::move(arg);
    return Init_DeviceInfo_imager_type(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_pcb_names
{
public:
  explicit Init_DeviceInfo_pcb_names(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_imager_name pcb_names(::multisense_msgs::msg::DeviceInfo::_pcb_names_type arg)
  {
    msg_.pcb_names = std::move(arg);
    return Init_DeviceInfo_imager_name(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_pcb_serial_numbers
{
public:
  explicit Init_DeviceInfo_pcb_serial_numbers(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_pcb_names pcb_serial_numbers(::multisense_msgs::msg::DeviceInfo::_pcb_serial_numbers_type arg)
  {
    msg_.pcb_serial_numbers = std::move(arg);
    return Init_DeviceInfo_pcb_names(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_number_of_pcbs
{
public:
  explicit Init_DeviceInfo_number_of_pcbs(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_pcb_serial_numbers number_of_pcbs(::multisense_msgs::msg::DeviceInfo::_number_of_pcbs_type arg)
  {
    msg_.number_of_pcbs = std::move(arg);
    return Init_DeviceInfo_pcb_serial_numbers(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_device_revision
{
public:
  explicit Init_DeviceInfo_device_revision(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_number_of_pcbs device_revision(::multisense_msgs::msg::DeviceInfo::_device_revision_type arg)
  {
    msg_.device_revision = std::move(arg);
    return Init_DeviceInfo_number_of_pcbs(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_serial_number
{
public:
  explicit Init_DeviceInfo_serial_number(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_device_revision serial_number(::multisense_msgs::msg::DeviceInfo::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return Init_DeviceInfo_device_revision(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_build_date
{
public:
  explicit Init_DeviceInfo_build_date(::multisense_msgs::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_serial_number build_date(::multisense_msgs::msg::DeviceInfo::_build_date_type arg)
  {
    msg_.build_date = std::move(arg);
    return Init_DeviceInfo_serial_number(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_device_name
{
public:
  Init_DeviceInfo_device_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeviceInfo_build_date device_name(::multisense_msgs::msg::DeviceInfo::_device_name_type arg)
  {
    msg_.device_name = std::move(arg);
    return Init_DeviceInfo_build_date(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::multisense_msgs::msg::DeviceInfo>()
{
  return multisense_msgs::msg::builder::Init_DeviceInfo_device_name();
}

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__DEVICE_INFO__BUILDER_HPP_
