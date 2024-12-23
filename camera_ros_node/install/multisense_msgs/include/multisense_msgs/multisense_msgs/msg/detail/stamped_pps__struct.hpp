// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multisense_msgs:msg/StampedPps.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__STAMPED_PPS__STRUCT_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__STAMPED_PPS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
// Member 'host_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__multisense_msgs__msg__StampedPps __attribute__((deprecated))
#else
# define DEPRECATED__multisense_msgs__msg__StampedPps __declspec(deprecated)
#endif

namespace multisense_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StampedPps_
{
  using Type = StampedPps_<ContainerAllocator>;

  explicit StampedPps_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_init),
    host_time(_init)
  {
    (void)_init;
  }

  explicit StampedPps_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc, _init),
    host_time(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _data_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _data_type data;
  using _host_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _host_time_type host_time;

  // setters for named parameter idiom
  Type & set__data(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__host_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->host_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multisense_msgs::msg::StampedPps_<ContainerAllocator> *;
  using ConstRawPtr =
    const multisense_msgs::msg::StampedPps_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multisense_msgs::msg::StampedPps_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multisense_msgs::msg::StampedPps_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::StampedPps_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::StampedPps_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::StampedPps_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::StampedPps_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multisense_msgs::msg::StampedPps_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multisense_msgs::msg::StampedPps_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multisense_msgs__msg__StampedPps
    std::shared_ptr<multisense_msgs::msg::StampedPps_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multisense_msgs__msg__StampedPps
    std::shared_ptr<multisense_msgs::msg::StampedPps_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StampedPps_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->host_time != other.host_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const StampedPps_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StampedPps_

// alias to use template instance with default allocator
using StampedPps =
  multisense_msgs::msg::StampedPps_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__STAMPED_PPS__STRUCT_HPP_
