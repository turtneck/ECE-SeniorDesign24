// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multisense_msgs:msg/RawImuData.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_IMU_DATA__BUILDER_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_IMU_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "multisense_msgs/msg/detail/raw_imu_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace multisense_msgs
{

namespace msg
{

namespace builder
{

class Init_RawImuData_z
{
public:
  explicit Init_RawImuData_z(::multisense_msgs::msg::RawImuData & msg)
  : msg_(msg)
  {}
  ::multisense_msgs::msg::RawImuData z(::multisense_msgs::msg::RawImuData::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multisense_msgs::msg::RawImuData msg_;
};

class Init_RawImuData_y
{
public:
  explicit Init_RawImuData_y(::multisense_msgs::msg::RawImuData & msg)
  : msg_(msg)
  {}
  Init_RawImuData_z y(::multisense_msgs::msg::RawImuData::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RawImuData_z(msg_);
  }

private:
  ::multisense_msgs::msg::RawImuData msg_;
};

class Init_RawImuData_x
{
public:
  explicit Init_RawImuData_x(::multisense_msgs::msg::RawImuData & msg)
  : msg_(msg)
  {}
  Init_RawImuData_y x(::multisense_msgs::msg::RawImuData::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RawImuData_y(msg_);
  }

private:
  ::multisense_msgs::msg::RawImuData msg_;
};

class Init_RawImuData_time_stamp
{
public:
  Init_RawImuData_time_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawImuData_x time_stamp(::multisense_msgs::msg::RawImuData::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_RawImuData_x(msg_);
  }

private:
  ::multisense_msgs::msg::RawImuData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::multisense_msgs::msg::RawImuData>()
{
  return multisense_msgs::msg::builder::Init_RawImuData_time_stamp();
}

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_IMU_DATA__BUILDER_HPP_
