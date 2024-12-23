// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multisense_msgs:msg/StampedPps.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__STAMPED_PPS__BUILDER_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__STAMPED_PPS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "multisense_msgs/msg/detail/stamped_pps__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace multisense_msgs
{

namespace msg
{

namespace builder
{

class Init_StampedPps_host_time
{
public:
  explicit Init_StampedPps_host_time(::multisense_msgs::msg::StampedPps & msg)
  : msg_(msg)
  {}
  ::multisense_msgs::msg::StampedPps host_time(::multisense_msgs::msg::StampedPps::_host_time_type arg)
  {
    msg_.host_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multisense_msgs::msg::StampedPps msg_;
};

class Init_StampedPps_data
{
public:
  Init_StampedPps_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StampedPps_host_time data(::multisense_msgs::msg::StampedPps::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_StampedPps_host_time(msg_);
  }

private:
  ::multisense_msgs::msg::StampedPps msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::multisense_msgs::msg::StampedPps>()
{
  return multisense_msgs::msg::builder::Init_StampedPps_data();
}

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__STAMPED_PPS__BUILDER_HPP_
