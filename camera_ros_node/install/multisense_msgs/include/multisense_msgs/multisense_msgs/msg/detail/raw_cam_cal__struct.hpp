// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multisense_msgs:msg/RawCamCal.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CAL__STRUCT_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__multisense_msgs__msg__RawCamCal __attribute__((deprecated))
#else
# define DEPRECATED__multisense_msgs__msg__RawCamCal __declspec(deprecated)
#endif

namespace multisense_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RawCamCal_
{
  using Type = RawCamCal_<ContainerAllocator>;

  explicit RawCamCal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 9>::iterator, float>(this->left_m.begin(), this->left_m.end(), 0.0f);
      std::fill<typename std::array<float, 8>::iterator, float>(this->left_d.begin(), this->left_d.end(), 0.0f);
      std::fill<typename std::array<float, 9>::iterator, float>(this->left_r.begin(), this->left_r.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->left_p.begin(), this->left_p.end(), 0.0f);
      std::fill<typename std::array<float, 9>::iterator, float>(this->right_m.begin(), this->right_m.end(), 0.0f);
      std::fill<typename std::array<float, 8>::iterator, float>(this->right_d.begin(), this->right_d.end(), 0.0f);
      std::fill<typename std::array<float, 9>::iterator, float>(this->right_r.begin(), this->right_r.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->right_p.begin(), this->right_p.end(), 0.0f);
    }
  }

  explicit RawCamCal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_m(_alloc),
    left_d(_alloc),
    left_r(_alloc),
    left_p(_alloc),
    right_m(_alloc),
    right_d(_alloc),
    right_r(_alloc),
    right_p(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 9>::iterator, float>(this->left_m.begin(), this->left_m.end(), 0.0f);
      std::fill<typename std::array<float, 8>::iterator, float>(this->left_d.begin(), this->left_d.end(), 0.0f);
      std::fill<typename std::array<float, 9>::iterator, float>(this->left_r.begin(), this->left_r.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->left_p.begin(), this->left_p.end(), 0.0f);
      std::fill<typename std::array<float, 9>::iterator, float>(this->right_m.begin(), this->right_m.end(), 0.0f);
      std::fill<typename std::array<float, 8>::iterator, float>(this->right_d.begin(), this->right_d.end(), 0.0f);
      std::fill<typename std::array<float, 9>::iterator, float>(this->right_r.begin(), this->right_r.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->right_p.begin(), this->right_p.end(), 0.0f);
    }
  }

  // field types and members
  using _left_m_type =
    std::array<float, 9>;
  _left_m_type left_m;
  using _left_d_type =
    std::array<float, 8>;
  _left_d_type left_d;
  using _left_r_type =
    std::array<float, 9>;
  _left_r_type left_r;
  using _left_p_type =
    std::array<float, 12>;
  _left_p_type left_p;
  using _right_m_type =
    std::array<float, 9>;
  _right_m_type right_m;
  using _right_d_type =
    std::array<float, 8>;
  _right_d_type right_d;
  using _right_r_type =
    std::array<float, 9>;
  _right_r_type right_r;
  using _right_p_type =
    std::array<float, 12>;
  _right_p_type right_p;

  // setters for named parameter idiom
  Type & set__left_m(
    const std::array<float, 9> & _arg)
  {
    this->left_m = _arg;
    return *this;
  }
  Type & set__left_d(
    const std::array<float, 8> & _arg)
  {
    this->left_d = _arg;
    return *this;
  }
  Type & set__left_r(
    const std::array<float, 9> & _arg)
  {
    this->left_r = _arg;
    return *this;
  }
  Type & set__left_p(
    const std::array<float, 12> & _arg)
  {
    this->left_p = _arg;
    return *this;
  }
  Type & set__right_m(
    const std::array<float, 9> & _arg)
  {
    this->right_m = _arg;
    return *this;
  }
  Type & set__right_d(
    const std::array<float, 8> & _arg)
  {
    this->right_d = _arg;
    return *this;
  }
  Type & set__right_r(
    const std::array<float, 9> & _arg)
  {
    this->right_r = _arg;
    return *this;
  }
  Type & set__right_p(
    const std::array<float, 12> & _arg)
  {
    this->right_p = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multisense_msgs::msg::RawCamCal_<ContainerAllocator> *;
  using ConstRawPtr =
    const multisense_msgs::msg::RawCamCal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multisense_msgs::msg::RawCamCal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multisense_msgs::msg::RawCamCal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::RawCamCal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::RawCamCal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::RawCamCal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::RawCamCal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multisense_msgs::msg::RawCamCal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multisense_msgs::msg::RawCamCal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multisense_msgs__msg__RawCamCal
    std::shared_ptr<multisense_msgs::msg::RawCamCal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multisense_msgs__msg__RawCamCal
    std::shared_ptr<multisense_msgs::msg::RawCamCal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RawCamCal_ & other) const
  {
    if (this->left_m != other.left_m) {
      return false;
    }
    if (this->left_d != other.left_d) {
      return false;
    }
    if (this->left_r != other.left_r) {
      return false;
    }
    if (this->left_p != other.left_p) {
      return false;
    }
    if (this->right_m != other.right_m) {
      return false;
    }
    if (this->right_d != other.right_d) {
      return false;
    }
    if (this->right_r != other.right_r) {
      return false;
    }
    if (this->right_p != other.right_p) {
      return false;
    }
    return true;
  }
  bool operator!=(const RawCamCal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RawCamCal_

// alias to use template instance with default allocator
using RawCamCal =
  multisense_msgs::msg::RawCamCal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CAL__STRUCT_HPP_
