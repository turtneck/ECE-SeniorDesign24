// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multisense_msgs:msg/RawCamData.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_DATA__STRUCT_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_DATA__STRUCT_HPP_

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
# define DEPRECATED__multisense_msgs__msg__RawCamData __attribute__((deprecated))
#else
# define DEPRECATED__multisense_msgs__msg__RawCamData __declspec(deprecated)
#endif

namespace multisense_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RawCamData_
{
  using Type = RawCamData_<ContainerAllocator>;

  explicit RawCamData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frames_per_second = 0.0f;
      this->gain = 0.0f;
      this->exposure_time = 0ul;
      this->frame_count = 0ul;
      this->angle = 0ul;
      this->width = 0;
      this->height = 0;
    }
  }

  explicit RawCamData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frames_per_second = 0.0f;
      this->gain = 0.0f;
      this->exposure_time = 0ul;
      this->frame_count = 0ul;
      this->angle = 0ul;
      this->width = 0;
      this->height = 0;
    }
  }

  // field types and members
  using _frames_per_second_type =
    float;
  _frames_per_second_type frames_per_second;
  using _gain_type =
    float;
  _gain_type gain;
  using _exposure_time_type =
    uint32_t;
  _exposure_time_type exposure_time;
  using _frame_count_type =
    uint32_t;
  _frame_count_type frame_count;
  using _time_stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_stamp_type time_stamp;
  using _angle_type =
    uint32_t;
  _angle_type angle;
  using _width_type =
    uint16_t;
  _width_type width;
  using _height_type =
    uint16_t;
  _height_type height;
  using _gray_scale_image_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _gray_scale_image_type gray_scale_image;
  using _disparity_image_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _disparity_image_type disparity_image;

  // setters for named parameter idiom
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
  Type & set__frame_count(
    const uint32_t & _arg)
  {
    this->frame_count = _arg;
    return *this;
  }
  Type & set__time_stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__angle(
    const uint32_t & _arg)
  {
    this->angle = _arg;
    return *this;
  }
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
  Type & set__gray_scale_image(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->gray_scale_image = _arg;
    return *this;
  }
  Type & set__disparity_image(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->disparity_image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multisense_msgs::msg::RawCamData_<ContainerAllocator> *;
  using ConstRawPtr =
    const multisense_msgs::msg::RawCamData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multisense_msgs::msg::RawCamData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multisense_msgs::msg::RawCamData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::RawCamData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::RawCamData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::RawCamData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::RawCamData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multisense_msgs::msg::RawCamData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multisense_msgs::msg::RawCamData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multisense_msgs__msg__RawCamData
    std::shared_ptr<multisense_msgs::msg::RawCamData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multisense_msgs__msg__RawCamData
    std::shared_ptr<multisense_msgs::msg::RawCamData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RawCamData_ & other) const
  {
    if (this->frames_per_second != other.frames_per_second) {
      return false;
    }
    if (this->gain != other.gain) {
      return false;
    }
    if (this->exposure_time != other.exposure_time) {
      return false;
    }
    if (this->frame_count != other.frame_count) {
      return false;
    }
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->gray_scale_image != other.gray_scale_image) {
      return false;
    }
    if (this->disparity_image != other.disparity_image) {
      return false;
    }
    return true;
  }
  bool operator!=(const RawCamData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RawCamData_

// alias to use template instance with default allocator
using RawCamData =
  multisense_msgs::msg::RawCamData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_DATA__STRUCT_HPP_
