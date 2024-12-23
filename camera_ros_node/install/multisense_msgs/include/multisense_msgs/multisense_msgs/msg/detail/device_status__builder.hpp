// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multisense_msgs:msg/DeviceStatus.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__DEVICE_STATUS__BUILDER_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__DEVICE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "multisense_msgs/msg/detail/device_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace multisense_msgs
{

namespace msg
{

namespace builder
{

class Init_DeviceStatus_imager_power
{
public:
  explicit Init_DeviceStatus_imager_power(::multisense_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  ::multisense_msgs::msg::DeviceStatus imager_power(::multisense_msgs::msg::DeviceStatus::_imager_power_type arg)
  {
    msg_.imager_power = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_logic_power
{
public:
  explicit Init_DeviceStatus_logic_power(::multisense_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  Init_DeviceStatus_imager_power logic_power(::multisense_msgs::msg::DeviceStatus::_logic_power_type arg)
  {
    msg_.logic_power = std::move(arg);
    return Init_DeviceStatus_imager_power(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_fpga_power
{
public:
  explicit Init_DeviceStatus_fpga_power(::multisense_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  Init_DeviceStatus_logic_power fpga_power(::multisense_msgs::msg::DeviceStatus::_fpga_power_type arg)
  {
    msg_.fpga_power = std::move(arg);
    return Init_DeviceStatus_logic_power(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_input_current
{
public:
  explicit Init_DeviceStatus_input_current(::multisense_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  Init_DeviceStatus_fpga_power input_current(::multisense_msgs::msg::DeviceStatus::_input_current_type arg)
  {
    msg_.input_current = std::move(arg);
    return Init_DeviceStatus_fpga_power(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_input_voltage
{
public:
  explicit Init_DeviceStatus_input_voltage(::multisense_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  Init_DeviceStatus_input_current input_voltage(::multisense_msgs::msg::DeviceStatus::_input_voltage_type arg)
  {
    msg_.input_voltage = std::move(arg);
    return Init_DeviceStatus_input_current(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_right_imager_temp
{
public:
  explicit Init_DeviceStatus_right_imager_temp(::multisense_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  Init_DeviceStatus_input_voltage right_imager_temp(::multisense_msgs::msg::DeviceStatus::_right_imager_temp_type arg)
  {
    msg_.right_imager_temp = std::move(arg);
    return Init_DeviceStatus_input_voltage(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_left_imager_temp
{
public:
  explicit Init_DeviceStatus_left_imager_temp(::multisense_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  Init_DeviceStatus_right_imager_temp left_imager_temp(::multisense_msgs::msg::DeviceStatus::_left_imager_temp_type arg)
  {
    msg_.left_imager_temp = std::move(arg);
    return Init_DeviceStatus_right_imager_temp(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_fpga_temp
{
public:
  explicit Init_DeviceStatus_fpga_temp(::multisense_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  Init_DeviceStatus_left_imager_temp fpga_temp(::multisense_msgs::msg::DeviceStatus::_fpga_temp_type arg)
  {
    msg_.fpga_temp = std::move(arg);
    return Init_DeviceStatus_left_imager_temp(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_power_supply_temp
{
public:
  explicit Init_DeviceStatus_power_supply_temp(::multisense_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  Init_DeviceStatus_fpga_temp power_supply_temp(::multisense_msgs::msg::DeviceStatus::_power_supply_temp_type arg)
  {
    msg_.power_supply_temp = std::move(arg);
    return Init_DeviceStatus_fpga_temp(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_processing_pipeline_ok
{
public:
  explicit Init_DeviceStatus_processing_pipeline_ok(::multisense_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  Init_DeviceStatus_power_supply_temp processing_pipeline_ok(::multisense_msgs::msg::DeviceStatus::_processing_pipeline_ok_type arg)
  {
    msg_.processing_pipeline_ok = std::move(arg);
    return Init_DeviceStatus_power_supply_temp(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_external_leds_ok
{
public:
  explicit Init_DeviceStatus_external_leds_ok(::multisense_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  Init_DeviceStatus_processing_pipeline_ok external_leds_ok(::multisense_msgs::msg::DeviceStatus::_external_leds_ok_type arg)
  {
    msg_.external_leds_ok = std::move(arg);
    return Init_DeviceStatus_processing_pipeline_ok(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_imu_ok
{
public:
  explicit Init_DeviceStatus_imu_ok(::multisense_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  Init_DeviceStatus_external_leds_ok imu_ok(::multisense_msgs::msg::DeviceStatus::_imu_ok_type arg)
  {
    msg_.imu_ok = std::move(arg);
    return Init_DeviceStatus_external_leds_ok(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_cameras_ok
{
public:
  explicit Init_DeviceStatus_cameras_ok(::multisense_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  Init_DeviceStatus_imu_ok cameras_ok(::multisense_msgs::msg::DeviceStatus::_cameras_ok_type arg)
  {
    msg_.cameras_ok = std::move(arg);
    return Init_DeviceStatus_imu_ok(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_laser_motor_ok
{
public:
  explicit Init_DeviceStatus_laser_motor_ok(::multisense_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  Init_DeviceStatus_cameras_ok laser_motor_ok(::multisense_msgs::msg::DeviceStatus::_laser_motor_ok_type arg)
  {
    msg_.laser_motor_ok = std::move(arg);
    return Init_DeviceStatus_cameras_ok(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_laser_ok
{
public:
  explicit Init_DeviceStatus_laser_ok(::multisense_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  Init_DeviceStatus_laser_motor_ok laser_ok(::multisense_msgs::msg::DeviceStatus::_laser_ok_type arg)
  {
    msg_.laser_ok = std::move(arg);
    return Init_DeviceStatus_laser_motor_ok(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_system_ok
{
public:
  explicit Init_DeviceStatus_system_ok(::multisense_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  Init_DeviceStatus_laser_ok system_ok(::multisense_msgs::msg::DeviceStatus::_system_ok_type arg)
  {
    msg_.system_ok = std::move(arg);
    return Init_DeviceStatus_laser_ok(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_uptime
{
public:
  explicit Init_DeviceStatus_uptime(::multisense_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  Init_DeviceStatus_system_ok uptime(::multisense_msgs::msg::DeviceStatus::_uptime_type arg)
  {
    msg_.uptime = std::move(arg);
    return Init_DeviceStatus_system_ok(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_time_stamp
{
public:
  Init_DeviceStatus_time_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeviceStatus_uptime time_stamp(::multisense_msgs::msg::DeviceStatus::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_DeviceStatus_uptime(msg_);
  }

private:
  ::multisense_msgs::msg::DeviceStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::multisense_msgs::msg::DeviceStatus>()
{
  return multisense_msgs::msg::builder::Init_DeviceStatus_time_stamp();
}

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__DEVICE_STATUS__BUILDER_HPP_
