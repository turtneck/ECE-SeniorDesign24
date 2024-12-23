// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multisense_msgs:msg/RawImuData.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_IMU_DATA__STRUCT_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_IMU_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time_stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__multisense_msgs__msg__RawImuData __attribute__((deprecated))
#else
# define DEPRECATED__multisense_msgs__msg__RawImuData __declspec(deprecated)
#endif

namespace multisense_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RawImuData_
{
  using Type = RawImuData_<ContainerAllocator>;

  explicit RawImuData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
    }
  }

  explicit RawImuData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
    }
  }

  // field types and members
  using _time_stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_stamp_type time_stamp;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;

  // setters for named parameter idiom
  Type & set__time_stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multisense_msgs::msg::RawImuData_<ContainerAllocator> *;
  using ConstRawPtr =
    const multisense_msgs::msg::RawImuData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multisense_msgs::msg::RawImuData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multisense_msgs::msg::RawImuData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::RawImuData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::RawImuData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::RawImuData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::RawImuData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multisense_msgs::msg::RawImuData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multisense_msgs::msg::RawImuData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multisense_msgs__msg__RawImuData
    std::shared_ptr<multisense_msgs::msg::RawImuData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multisense_msgs__msg__RawImuData
    std::shared_ptr<multisense_msgs::msg::RawImuData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RawImuData_ & other) const
  {
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const RawImuData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RawImuData_

// alias to use template instance with default allocator
using RawImuData =
  multisense_msgs::msg::RawImuData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_IMU_DATA__STRUCT_HPP_
