// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multisense_msgs:msg/PtpStatus.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__PTP_STATUS__BUILDER_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__PTP_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "multisense_msgs/msg/detail/ptp_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace multisense_msgs
{

namespace msg
{

namespace builder
{

class Init_PtpStatus_steps_removed
{
public:
  explicit Init_PtpStatus_steps_removed(::multisense_msgs::msg::PtpStatus & msg)
  : msg_(msg)
  {}
  ::multisense_msgs::msg::PtpStatus steps_removed(::multisense_msgs::msg::PtpStatus::_steps_removed_type arg)
  {
    msg_.steps_removed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multisense_msgs::msg::PtpStatus msg_;
};

class Init_PtpStatus_path_delay
{
public:
  explicit Init_PtpStatus_path_delay(::multisense_msgs::msg::PtpStatus & msg)
  : msg_(msg)
  {}
  Init_PtpStatus_steps_removed path_delay(::multisense_msgs::msg::PtpStatus::_path_delay_type arg)
  {
    msg_.path_delay = std::move(arg);
    return Init_PtpStatus_steps_removed(msg_);
  }

private:
  ::multisense_msgs::msg::PtpStatus msg_;
};

class Init_PtpStatus_gm_offset
{
public:
  explicit Init_PtpStatus_gm_offset(::multisense_msgs::msg::PtpStatus & msg)
  : msg_(msg)
  {}
  Init_PtpStatus_path_delay gm_offset(::multisense_msgs::msg::PtpStatus::_gm_offset_type arg)
  {
    msg_.gm_offset = std::move(arg);
    return Init_PtpStatus_path_delay(msg_);
  }

private:
  ::multisense_msgs::msg::PtpStatus msg_;
};

class Init_PtpStatus_gm_id
{
public:
  explicit Init_PtpStatus_gm_id(::multisense_msgs::msg::PtpStatus & msg)
  : msg_(msg)
  {}
  Init_PtpStatus_gm_offset gm_id(::multisense_msgs::msg::PtpStatus::_gm_id_type arg)
  {
    msg_.gm_id = std::move(arg);
    return Init_PtpStatus_gm_offset(msg_);
  }

private:
  ::multisense_msgs::msg::PtpStatus msg_;
};

class Init_PtpStatus_gm_present
{
public:
  Init_PtpStatus_gm_present()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PtpStatus_gm_id gm_present(::multisense_msgs::msg::PtpStatus::_gm_present_type arg)
  {
    msg_.gm_present = std::move(arg);
    return Init_PtpStatus_gm_id(msg_);
  }

private:
  ::multisense_msgs::msg::PtpStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::multisense_msgs::msg::PtpStatus>()
{
  return multisense_msgs::msg::builder::Init_PtpStatus_gm_present();
}

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__PTP_STATUS__BUILDER_HPP_
