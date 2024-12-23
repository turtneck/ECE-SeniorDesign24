// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multisense_msgs:msg/RawLidarCal.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_CAL__STRUCT_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_CAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__multisense_msgs__msg__RawLidarCal __attribute__((deprecated))
#else
# define DEPRECATED__multisense_msgs__msg__RawLidarCal __declspec(deprecated)
#endif

namespace multisense_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RawLidarCal_
{
  using Type = RawLidarCal_<ContainerAllocator>;

  explicit RawLidarCal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 16>::iterator, float>(this->laser_to_spindle.begin(), this->laser_to_spindle.end(), 0.0f);
      std::fill<typename std::array<float, 16>::iterator, float>(this->camera_to_spindle_fixed.begin(), this->camera_to_spindle_fixed.end(), 0.0f);
    }
  }

  explicit RawLidarCal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : laser_to_spindle(_alloc),
    camera_to_spindle_fixed(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 16>::iterator, float>(this->laser_to_spindle.begin(), this->laser_to_spindle.end(), 0.0f);
      std::fill<typename std::array<float, 16>::iterator, float>(this->camera_to_spindle_fixed.begin(), this->camera_to_spindle_fixed.end(), 0.0f);
    }
  }

  // field types and members
  using _laser_to_spindle_type =
    std::array<float, 16>;
  _laser_to_spindle_type laser_to_spindle;
  using _camera_to_spindle_fixed_type =
    std::array<float, 16>;
  _camera_to_spindle_fixed_type camera_to_spindle_fixed;

  // setters for named parameter idiom
  Type & set__laser_to_spindle(
    const std::array<float, 16> & _arg)
  {
    this->laser_to_spindle = _arg;
    return *this;
  }
  Type & set__camera_to_spindle_fixed(
    const std::array<float, 16> & _arg)
  {
    this->camera_to_spindle_fixed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multisense_msgs::msg::RawLidarCal_<ContainerAllocator> *;
  using ConstRawPtr =
    const multisense_msgs::msg::RawLidarCal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multisense_msgs::msg::RawLidarCal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multisense_msgs::msg::RawLidarCal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::RawLidarCal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::RawLidarCal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::RawLidarCal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::RawLidarCal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multisense_msgs::msg::RawLidarCal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multisense_msgs::msg::RawLidarCal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multisense_msgs__msg__RawLidarCal
    std::shared_ptr<multisense_msgs::msg::RawLidarCal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multisense_msgs__msg__RawLidarCal
    std::shared_ptr<multisense_msgs::msg::RawLidarCal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RawLidarCal_ & other) const
  {
    if (this->laser_to_spindle != other.laser_to_spindle) {
      return false;
    }
    if (this->camera_to_spindle_fixed != other.camera_to_spindle_fixed) {
      return false;
    }
    return true;
  }
  bool operator!=(const RawLidarCal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RawLidarCal_

// alias to use template instance with default allocator
using RawLidarCal =
  multisense_msgs::msg::RawLidarCal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_CAL__STRUCT_HPP_
