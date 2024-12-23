// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multisense_msgs:msg/Histogram.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__HISTOGRAM__STRUCT_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__HISTOGRAM__STRUCT_HPP_

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
# define DEPRECATED__multisense_msgs__msg__Histogram __attribute__((deprecated))
#else
# define DEPRECATED__multisense_msgs__msg__Histogram __declspec(deprecated)
#endif

namespace multisense_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Histogram_
{
  using Type = Histogram_<ContainerAllocator>;

  explicit Histogram_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_count = 0ll;
      this->width = 0ul;
      this->height = 0ul;
      this->gain = 0.0f;
      this->fps = 0.0f;
      this->exposure_time = 0ul;
      this->channels = 0ul;
      this->bins = 0ul;
    }
  }

  explicit Histogram_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_count = 0ll;
      this->width = 0ul;
      this->height = 0ul;
      this->gain = 0.0f;
      this->fps = 0.0f;
      this->exposure_time = 0ul;
      this->channels = 0ul;
      this->bins = 0ul;
    }
  }

  // field types and members
  using _frame_count_type =
    int64_t;
  _frame_count_type frame_count;
  using _time_stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_stamp_type time_stamp;
  using _width_type =
    uint32_t;
  _width_type width;
  using _height_type =
    uint32_t;
  _height_type height;
  using _gain_type =
    float;
  _gain_type gain;
  using _fps_type =
    float;
  _fps_type fps;
  using _exposure_time_type =
    uint32_t;
  _exposure_time_type exposure_time;
  using _channels_type =
    uint32_t;
  _channels_type channels;
  using _bins_type =
    uint32_t;
  _bins_type bins;
  using _data_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__frame_count(
    const int64_t & _arg)
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
  Type & set__width(
    const uint32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const uint32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__gain(
    const float & _arg)
  {
    this->gain = _arg;
    return *this;
  }
  Type & set__fps(
    const float & _arg)
  {
    this->fps = _arg;
    return *this;
  }
  Type & set__exposure_time(
    const uint32_t & _arg)
  {
    this->exposure_time = _arg;
    return *this;
  }
  Type & set__channels(
    const uint32_t & _arg)
  {
    this->channels = _arg;
    return *this;
  }
  Type & set__bins(
    const uint32_t & _arg)
  {
    this->bins = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multisense_msgs::msg::Histogram_<ContainerAllocator> *;
  using ConstRawPtr =
    const multisense_msgs::msg::Histogram_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multisense_msgs::msg::Histogram_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multisense_msgs::msg::Histogram_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::Histogram_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::Histogram_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::Histogram_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::Histogram_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multisense_msgs::msg::Histogram_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multisense_msgs::msg::Histogram_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multisense_msgs__msg__Histogram
    std::shared_ptr<multisense_msgs::msg::Histogram_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multisense_msgs__msg__Histogram
    std::shared_ptr<multisense_msgs::msg::Histogram_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Histogram_ & other) const
  {
    if (this->frame_count != other.frame_count) {
      return false;
    }
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->gain != other.gain) {
      return false;
    }
    if (this->fps != other.fps) {
      return false;
    }
    if (this->exposure_time != other.exposure_time) {
      return false;
    }
    if (this->channels != other.channels) {
      return false;
    }
    if (this->bins != other.bins) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Histogram_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Histogram_

// alias to use template instance with default allocator
using Histogram =
  multisense_msgs::msg::Histogram_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__HISTOGRAM__STRUCT_HPP_
