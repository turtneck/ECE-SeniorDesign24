// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multisense_msgs:msg/RawLidarData.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_DATA__STRUCT_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time_start'
// Member 'time_end'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__multisense_msgs__msg__RawLidarData __attribute__((deprecated))
#else
# define DEPRECATED__multisense_msgs__msg__RawLidarData __declspec(deprecated)
#endif

namespace multisense_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RawLidarData_
{
  using Type = RawLidarData_<ContainerAllocator>;

  explicit RawLidarData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_start(_init),
    time_end(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scan_count = 0ul;
      this->angle_start = 0l;
      this->angle_end = 0l;
    }
  }

  explicit RawLidarData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_start(_alloc, _init),
    time_end(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scan_count = 0ul;
      this->angle_start = 0l;
      this->angle_end = 0l;
    }
  }

  // field types and members
  using _scan_count_type =
    uint32_t;
  _scan_count_type scan_count;
  using _time_start_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_start_type time_start;
  using _time_end_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_end_type time_end;
  using _angle_start_type =
    int32_t;
  _angle_start_type angle_start;
  using _angle_end_type =
    int32_t;
  _angle_end_type angle_end;
  using _distance_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _distance_type distance;
  using _intensity_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _intensity_type intensity;

  // setters for named parameter idiom
  Type & set__scan_count(
    const uint32_t & _arg)
  {
    this->scan_count = _arg;
    return *this;
  }
  Type & set__time_start(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->time_start = _arg;
    return *this;
  }
  Type & set__time_end(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->time_end = _arg;
    return *this;
  }
  Type & set__angle_start(
    const int32_t & _arg)
  {
    this->angle_start = _arg;
    return *this;
  }
  Type & set__angle_end(
    const int32_t & _arg)
  {
    this->angle_end = _arg;
    return *this;
  }
  Type & set__distance(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__intensity(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->intensity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multisense_msgs::msg::RawLidarData_<ContainerAllocator> *;
  using ConstRawPtr =
    const multisense_msgs::msg::RawLidarData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multisense_msgs::msg::RawLidarData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multisense_msgs::msg::RawLidarData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::RawLidarData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::RawLidarData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::RawLidarData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::RawLidarData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multisense_msgs::msg::RawLidarData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multisense_msgs::msg::RawLidarData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multisense_msgs__msg__RawLidarData
    std::shared_ptr<multisense_msgs::msg::RawLidarData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multisense_msgs__msg__RawLidarData
    std::shared_ptr<multisense_msgs::msg::RawLidarData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RawLidarData_ & other) const
  {
    if (this->scan_count != other.scan_count) {
      return false;
    }
    if (this->time_start != other.time_start) {
      return false;
    }
    if (this->time_end != other.time_end) {
      return false;
    }
    if (this->angle_start != other.angle_start) {
      return false;
    }
    if (this->angle_end != other.angle_end) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->intensity != other.intensity) {
      return false;
    }
    return true;
  }
  bool operator!=(const RawLidarData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RawLidarData_

// alias to use template instance with default allocator
using RawLidarData =
  multisense_msgs::msg::RawLidarData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_DATA__STRUCT_HPP_
