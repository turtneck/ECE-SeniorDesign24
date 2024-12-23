// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multisense_msgs:msg/RawLidarData.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_DATA__BUILDER_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "multisense_msgs/msg/detail/raw_lidar_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace multisense_msgs
{

namespace msg
{

namespace builder
{

class Init_RawLidarData_intensity
{
public:
  explicit Init_RawLidarData_intensity(::multisense_msgs::msg::RawLidarData & msg)
  : msg_(msg)
  {}
  ::multisense_msgs::msg::RawLidarData intensity(::multisense_msgs::msg::RawLidarData::_intensity_type arg)
  {
    msg_.intensity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multisense_msgs::msg::RawLidarData msg_;
};

class Init_RawLidarData_distance
{
public:
  explicit Init_RawLidarData_distance(::multisense_msgs::msg::RawLidarData & msg)
  : msg_(msg)
  {}
  Init_RawLidarData_intensity distance(::multisense_msgs::msg::RawLidarData::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_RawLidarData_intensity(msg_);
  }

private:
  ::multisense_msgs::msg::RawLidarData msg_;
};

class Init_RawLidarData_angle_end
{
public:
  explicit Init_RawLidarData_angle_end(::multisense_msgs::msg::RawLidarData & msg)
  : msg_(msg)
  {}
  Init_RawLidarData_distance angle_end(::multisense_msgs::msg::RawLidarData::_angle_end_type arg)
  {
    msg_.angle_end = std::move(arg);
    return Init_RawLidarData_distance(msg_);
  }

private:
  ::multisense_msgs::msg::RawLidarData msg_;
};

class Init_RawLidarData_angle_start
{
public:
  explicit Init_RawLidarData_angle_start(::multisense_msgs::msg::RawLidarData & msg)
  : msg_(msg)
  {}
  Init_RawLidarData_angle_end angle_start(::multisense_msgs::msg::RawLidarData::_angle_start_type arg)
  {
    msg_.angle_start = std::move(arg);
    return Init_RawLidarData_angle_end(msg_);
  }

private:
  ::multisense_msgs::msg::RawLidarData msg_;
};

class Init_RawLidarData_time_end
{
public:
  explicit Init_RawLidarData_time_end(::multisense_msgs::msg::RawLidarData & msg)
  : msg_(msg)
  {}
  Init_RawLidarData_angle_start time_end(::multisense_msgs::msg::RawLidarData::_time_end_type arg)
  {
    msg_.time_end = std::move(arg);
    return Init_RawLidarData_angle_start(msg_);
  }

private:
  ::multisense_msgs::msg::RawLidarData msg_;
};

class Init_RawLidarData_time_start
{
public:
  explicit Init_RawLidarData_time_start(::multisense_msgs::msg::RawLidarData & msg)
  : msg_(msg)
  {}
  Init_RawLidarData_time_end time_start(::multisense_msgs::msg::RawLidarData::_time_start_type arg)
  {
    msg_.time_start = std::move(arg);
    return Init_RawLidarData_time_end(msg_);
  }

private:
  ::multisense_msgs::msg::RawLidarData msg_;
};

class Init_RawLidarData_scan_count
{
public:
  Init_RawLidarData_scan_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawLidarData_time_start scan_count(::multisense_msgs::msg::RawLidarData::_scan_count_type arg)
  {
    msg_.scan_count = std::move(arg);
    return Init_RawLidarData_time_start(msg_);
  }

private:
  ::multisense_msgs::msg::RawLidarData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::multisense_msgs::msg::RawLidarData>()
{
  return multisense_msgs::msg::builder::Init_RawLidarData_scan_count();
}

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_DATA__BUILDER_HPP_
