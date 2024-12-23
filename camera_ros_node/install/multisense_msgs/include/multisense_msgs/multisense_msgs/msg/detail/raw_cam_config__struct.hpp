// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multisense_msgs:msg/RawCamConfig.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CONFIG__STRUCT_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__multisense_msgs__msg__RawCamConfig __attribute__((deprecated))
#else
# define DEPRECATED__multisense_msgs__msg__RawCamConfig __declspec(deprecated)
#endif

namespace multisense_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RawCamConfig_
{
  using Type = RawCamConfig_<ContainerAllocator>;

  explicit RawCamConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0;
      this->height = 0;
      this->frames_per_second = 0.0f;
      this->gain = 0.0f;
      this->exposure_time = 0ul;
      this->fx = 0.0f;
      this->fy = 0.0f;
      this->cx = 0.0f;
      this->cy = 0.0f;
      this->tx = 0.0f;
      this->ty = 0.0f;
      this->tz = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
    }
  }

  explicit RawCamConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0;
      this->height = 0;
      this->frames_per_second = 0.0f;
      this->gain = 0.0f;
      this->exposure_time = 0ul;
      this->fx = 0.0f;
      this->fy = 0.0f;
      this->cx = 0.0f;
      this->cy = 0.0f;
      this->tx = 0.0f;
      this->ty = 0.0f;
      this->tz = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
    }
  }

  // field types and members
  using _width_type =
    uint16_t;
  _width_type width;
  using _height_type =
    uint16_t;
  _height_type height;
  using _frames_per_second_type =
    float;
  _frames_per_second_type frames_per_second;
  using _gain_type =
    float;
  _gain_type gain;
  using _exposure_time_type =
    uint32_t;
  _exposure_time_type exposure_time;
  using _fx_type =
    float;
  _fx_type fx;
  using _fy_type =
    float;
  _fy_type fy;
  using _cx_type =
    float;
  _cx_type cx;
  using _cy_type =
    float;
  _cy_type cy;
  using _tx_type =
    float;
  _tx_type tx;
  using _ty_type =
    float;
  _ty_type ty;
  using _tz_type =
    float;
  _tz_type tz;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__width(
    const uint16_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const uint16_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__frames_per_second(
    const float & _arg)
  {
    this->frames_per_second = _arg;
    return *this;
  }
  Type & set__gain(
    const float & _arg)
  {
    this->gain = _arg;
    return *this;
  }
  Type & set__exposure_time(
    const uint32_t & _arg)
  {
    this->exposure_time = _arg;
    return *this;
  }
  Type & set__fx(
    const float & _arg)
  {
    this->fx = _arg;
    return *this;
  }
  Type & set__fy(
    const float & _arg)
  {
    this->fy = _arg;
    return *this;
  }
  Type & set__cx(
    const float & _arg)
  {
    this->cx = _arg;
    return *this;
  }
  Type & set__cy(
    const float & _arg)
  {
    this->cy = _arg;
    return *this;
  }
  Type & set__tx(
    const float & _arg)
  {
    this->tx = _arg;
    return *this;
  }
  Type & set__ty(
    const float & _arg)
  {
    this->ty = _arg;
    return *this;
  }
  Type & set__tz(
    const float & _arg)
  {
    this->tz = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multisense_msgs::msg::RawCamConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const multisense_msgs::msg::RawCamConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multisense_msgs::msg::RawCamConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multisense_msgs::msg::RawCamConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::RawCamConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::RawCamConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::RawCamConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::RawCamConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multisense_msgs::msg::RawCamConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multisense_msgs::msg::RawCamConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multisense_msgs__msg__RawCamConfig
    std::shared_ptr<multisense_msgs::msg::RawCamConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multisense_msgs__msg__RawCamConfig
    std::shared_ptr<multisense_msgs::msg::RawCamConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RawCamConfig_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->frames_per_second != other.frames_per_second) {
      return false;
    }
    if (this->gain != other.gain) {
      return false;
    }
    if (this->exposure_time != other.exposure_time) {
      return false;
    }
    if (this->fx != other.fx) {
      return false;
    }
    if (this->fy != other.fy) {
      return false;
    }
    if (this->cx != other.cx) {
      return false;
    }
    if (this->cy != other.cy) {
      return false;
    }
    if (this->tx != other.tx) {
      return false;
    }
    if (this->ty != other.ty) {
      return false;
    }
    if (this->tz != other.tz) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const RawCamConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RawCamConfig_

// alias to use template instance with default allocator
using RawCamConfig =
  multisense_msgs::msg::RawCamConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CONFIG__STRUCT_HPP_
