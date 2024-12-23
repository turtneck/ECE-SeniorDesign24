// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multisense_msgs:msg/PtpStatus.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__PTP_STATUS__STRUCT_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__PTP_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__multisense_msgs__msg__PtpStatus __attribute__((deprecated))
#else
# define DEPRECATED__multisense_msgs__msg__PtpStatus __declspec(deprecated)
#endif

namespace multisense_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PtpStatus_
{
  using Type = PtpStatus_<ContainerAllocator>;

  explicit PtpStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gm_present = false;
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->gm_id.begin(), this->gm_id.end(), 0);
      this->gm_offset = 0ll;
      this->path_delay = 0ll;
      this->steps_removed = 0;
    }
  }

  explicit PtpStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gm_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gm_present = false;
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->gm_id.begin(), this->gm_id.end(), 0);
      this->gm_offset = 0ll;
      this->path_delay = 0ll;
      this->steps_removed = 0;
    }
  }

  // field types and members
  using _gm_present_type =
    bool;
  _gm_present_type gm_present;
  using _gm_id_type =
    std::array<uint8_t, 8>;
  _gm_id_type gm_id;
  using _gm_offset_type =
    int64_t;
  _gm_offset_type gm_offset;
  using _path_delay_type =
    int64_t;
  _path_delay_type path_delay;
  using _steps_removed_type =
    int16_t;
  _steps_removed_type steps_removed;

  // setters for named parameter idiom
  Type & set__gm_present(
    const bool & _arg)
  {
    this->gm_present = _arg;
    return *this;
  }
  Type & set__gm_id(
    const std::array<uint8_t, 8> & _arg)
  {
    this->gm_id = _arg;
    return *this;
  }
  Type & set__gm_offset(
    const int64_t & _arg)
  {
    this->gm_offset = _arg;
    return *this;
  }
  Type & set__path_delay(
    const int64_t & _arg)
  {
    this->path_delay = _arg;
    return *this;
  }
  Type & set__steps_removed(
    const int16_t & _arg)
  {
    this->steps_removed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multisense_msgs::msg::PtpStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const multisense_msgs::msg::PtpStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multisense_msgs::msg::PtpStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multisense_msgs::msg::PtpStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::PtpStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::PtpStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::PtpStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::PtpStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multisense_msgs::msg::PtpStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multisense_msgs::msg::PtpStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multisense_msgs__msg__PtpStatus
    std::shared_ptr<multisense_msgs::msg::PtpStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multisense_msgs__msg__PtpStatus
    std::shared_ptr<multisense_msgs::msg::PtpStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PtpStatus_ & other) const
  {
    if (this->gm_present != other.gm_present) {
      return false;
    }
    if (this->gm_id != other.gm_id) {
      return false;
    }
    if (this->gm_offset != other.gm_offset) {
      return false;
    }
    if (this->path_delay != other.path_delay) {
      return false;
    }
    if (this->steps_removed != other.steps_removed) {
      return false;
    }
    return true;
  }
  bool operator!=(const PtpStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PtpStatus_

// alias to use template instance with default allocator
using PtpStatus =
  multisense_msgs::msg::PtpStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__PTP_STATUS__STRUCT_HPP_
