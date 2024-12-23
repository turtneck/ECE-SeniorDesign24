// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multisense_msgs:msg/DeviceStatus.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__DEVICE_STATUS__STRUCT_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__DEVICE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time_stamp'
// Member 'uptime'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__multisense_msgs__msg__DeviceStatus __attribute__((deprecated))
#else
# define DEPRECATED__multisense_msgs__msg__DeviceStatus __declspec(deprecated)
#endif

namespace multisense_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DeviceStatus_
{
  using Type = DeviceStatus_<ContainerAllocator>;

  explicit DeviceStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_stamp(_init),
    uptime(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->system_ok = false;
      this->laser_ok = false;
      this->laser_motor_ok = false;
      this->cameras_ok = false;
      this->imu_ok = false;
      this->external_leds_ok = false;
      this->processing_pipeline_ok = false;
      this->power_supply_temp = 0.0f;
      this->fpga_temp = 0.0f;
      this->left_imager_temp = 0.0f;
      this->right_imager_temp = 0.0f;
      this->input_voltage = 0.0f;
      this->input_current = 0.0f;
      this->fpga_power = 0.0f;
      this->logic_power = 0.0f;
      this->imager_power = 0.0f;
    }
  }

  explicit DeviceStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_stamp(_alloc, _init),
    uptime(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->system_ok = false;
      this->laser_ok = false;
      this->laser_motor_ok = false;
      this->cameras_ok = false;
      this->imu_ok = false;
      this->external_leds_ok = false;
      this->processing_pipeline_ok = false;
      this->power_supply_temp = 0.0f;
      this->fpga_temp = 0.0f;
      this->left_imager_temp = 0.0f;
      this->right_imager_temp = 0.0f;
      this->input_voltage = 0.0f;
      this->input_current = 0.0f;
      this->fpga_power = 0.0f;
      this->logic_power = 0.0f;
      this->imager_power = 0.0f;
    }
  }

  // field types and members
  using _time_stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_stamp_type time_stamp;
  using _uptime_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _uptime_type uptime;
  using _system_ok_type =
    bool;
  _system_ok_type system_ok;
  using _laser_ok_type =
    bool;
  _laser_ok_type laser_ok;
  using _laser_motor_ok_type =
    bool;
  _laser_motor_ok_type laser_motor_ok;
  using _cameras_ok_type =
    bool;
  _cameras_ok_type cameras_ok;
  using _imu_ok_type =
    bool;
  _imu_ok_type imu_ok;
  using _external_leds_ok_type =
    bool;
  _external_leds_ok_type external_leds_ok;
  using _processing_pipeline_ok_type =
    bool;
  _processing_pipeline_ok_type processing_pipeline_ok;
  using _power_supply_temp_type =
    float;
  _power_supply_temp_type power_supply_temp;
  using _fpga_temp_type =
    float;
  _fpga_temp_type fpga_temp;
  using _left_imager_temp_type =
    float;
  _left_imager_temp_type left_imager_temp;
  using _right_imager_temp_type =
    float;
  _right_imager_temp_type right_imager_temp;
  using _input_voltage_type =
    float;
  _input_voltage_type input_voltage;
  using _input_current_type =
    float;
  _input_current_type input_current;
  using _fpga_power_type =
    float;
  _fpga_power_type fpga_power;
  using _logic_power_type =
    float;
  _logic_power_type logic_power;
  using _imager_power_type =
    float;
  _imager_power_type imager_power;

  // setters for named parameter idiom
  Type & set__time_stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__uptime(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->uptime = _arg;
    return *this;
  }
  Type & set__system_ok(
    const bool & _arg)
  {
    this->system_ok = _arg;
    return *this;
  }
  Type & set__laser_ok(
    const bool & _arg)
  {
    this->laser_ok = _arg;
    return *this;
  }
  Type & set__laser_motor_ok(
    const bool & _arg)
  {
    this->laser_motor_ok = _arg;
    return *this;
  }
  Type & set__cameras_ok(
    const bool & _arg)
  {
    this->cameras_ok = _arg;
    return *this;
  }
  Type & set__imu_ok(
    const bool & _arg)
  {
    this->imu_ok = _arg;
    return *this;
  }
  Type & set__external_leds_ok(
    const bool & _arg)
  {
    this->external_leds_ok = _arg;
    return *this;
  }
  Type & set__processing_pipeline_ok(
    const bool & _arg)
  {
    this->processing_pipeline_ok = _arg;
    return *this;
  }
  Type & set__power_supply_temp(
    const float & _arg)
  {
    this->power_supply_temp = _arg;
    return *this;
  }
  Type & set__fpga_temp(
    const float & _arg)
  {
    this->fpga_temp = _arg;
    return *this;
  }
  Type & set__left_imager_temp(
    const float & _arg)
  {
    this->left_imager_temp = _arg;
    return *this;
  }
  Type & set__right_imager_temp(
    const float & _arg)
  {
    this->right_imager_temp = _arg;
    return *this;
  }
  Type & set__input_voltage(
    const float & _arg)
  {
    this->input_voltage = _arg;
    return *this;
  }
  Type & set__input_current(
    const float & _arg)
  {
    this->input_current = _arg;
    return *this;
  }
  Type & set__fpga_power(
    const float & _arg)
  {
    this->fpga_power = _arg;
    return *this;
  }
  Type & set__logic_power(
    const float & _arg)
  {
    this->logic_power = _arg;
    return *this;
  }
  Type & set__imager_power(
    const float & _arg)
  {
    this->imager_power = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multisense_msgs::msg::DeviceStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const multisense_msgs::msg::DeviceStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multisense_msgs::msg::DeviceStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multisense_msgs::msg::DeviceStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::DeviceStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::DeviceStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::DeviceStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::DeviceStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multisense_msgs::msg::DeviceStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multisense_msgs::msg::DeviceStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multisense_msgs__msg__DeviceStatus
    std::shared_ptr<multisense_msgs::msg::DeviceStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multisense_msgs__msg__DeviceStatus
    std::shared_ptr<multisense_msgs::msg::DeviceStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeviceStatus_ & other) const
  {
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->uptime != other.uptime) {
      return false;
    }
    if (this->system_ok != other.system_ok) {
      return false;
    }
    if (this->laser_ok != other.laser_ok) {
      return false;
    }
    if (this->laser_motor_ok != other.laser_motor_ok) {
      return false;
    }
    if (this->cameras_ok != other.cameras_ok) {
      return false;
    }
    if (this->imu_ok != other.imu_ok) {
      return false;
    }
    if (this->external_leds_ok != other.external_leds_ok) {
      return false;
    }
    if (this->processing_pipeline_ok != other.processing_pipeline_ok) {
      return false;
    }
    if (this->power_supply_temp != other.power_supply_temp) {
      return false;
    }
    if (this->fpga_temp != other.fpga_temp) {
      return false;
    }
    if (this->left_imager_temp != other.left_imager_temp) {
      return false;
    }
    if (this->right_imager_temp != other.right_imager_temp) {
      return false;
    }
    if (this->input_voltage != other.input_voltage) {
      return false;
    }
    if (this->input_current != other.input_current) {
      return false;
    }
    if (this->fpga_power != other.fpga_power) {
      return false;
    }
    if (this->logic_power != other.logic_power) {
      return false;
    }
    if (this->imager_power != other.imager_power) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeviceStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeviceStatus_

// alias to use template instance with default allocator
using DeviceStatus =
  multisense_msgs::msg::DeviceStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__DEVICE_STATUS__STRUCT_HPP_
