// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multisense_msgs:msg/RawLidarCal.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_CAL__BUILDER_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_CAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "multisense_msgs/msg/detail/raw_lidar_cal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace multisense_msgs
{

namespace msg
{

namespace builder
{

class Init_RawLidarCal_camera_to_spindle_fixed
{
public:
  explicit Init_RawLidarCal_camera_to_spindle_fixed(::multisense_msgs::msg::RawLidarCal & msg)
  : msg_(msg)
  {}
  ::multisense_msgs::msg::RawLidarCal camera_to_spindle_fixed(::multisense_msgs::msg::RawLidarCal::_camera_to_spindle_fixed_type arg)
  {
    msg_.camera_to_spindle_fixed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multisense_msgs::msg::RawLidarCal msg_;
};

class Init_RawLidarCal_laser_to_spindle
{
public:
  Init_RawLidarCal_laser_to_spindle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawLidarCal_camera_to_spindle_fixed laser_to_spindle(::multisense_msgs::msg::RawLidarCal::_laser_to_spindle_type arg)
  {
    msg_.laser_to_spindle = std::move(arg);
    return Init_RawLidarCal_camera_to_spindle_fixed(msg_);
  }

private:
  ::multisense_msgs::msg::RawLidarCal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::multisense_msgs::msg::RawLidarCal>()
{
  return multisense_msgs::msg::builder::Init_RawLidarCal_laser_to_spindle();
}

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_CAL__BUILDER_HPP_
