// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multisense_msgs:msg/RawCamCal.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CAL__BUILDER_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "multisense_msgs/msg/detail/raw_cam_cal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace multisense_msgs
{

namespace msg
{

namespace builder
{

class Init_RawCamCal_right_p
{
public:
  explicit Init_RawCamCal_right_p(::multisense_msgs::msg::RawCamCal & msg)
  : msg_(msg)
  {}
  ::multisense_msgs::msg::RawCamCal right_p(::multisense_msgs::msg::RawCamCal::_right_p_type arg)
  {
    msg_.right_p = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamCal msg_;
};

class Init_RawCamCal_right_r
{
public:
  explicit Init_RawCamCal_right_r(::multisense_msgs::msg::RawCamCal & msg)
  : msg_(msg)
  {}
  Init_RawCamCal_right_p right_r(::multisense_msgs::msg::RawCamCal::_right_r_type arg)
  {
    msg_.right_r = std::move(arg);
    return Init_RawCamCal_right_p(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamCal msg_;
};

class Init_RawCamCal_right_d
{
public:
  explicit Init_RawCamCal_right_d(::multisense_msgs::msg::RawCamCal & msg)
  : msg_(msg)
  {}
  Init_RawCamCal_right_r right_d(::multisense_msgs::msg::RawCamCal::_right_d_type arg)
  {
    msg_.right_d = std::move(arg);
    return Init_RawCamCal_right_r(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamCal msg_;
};

class Init_RawCamCal_right_m
{
public:
  explicit Init_RawCamCal_right_m(::multisense_msgs::msg::RawCamCal & msg)
  : msg_(msg)
  {}
  Init_RawCamCal_right_d right_m(::multisense_msgs::msg::RawCamCal::_right_m_type arg)
  {
    msg_.right_m = std::move(arg);
    return Init_RawCamCal_right_d(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamCal msg_;
};

class Init_RawCamCal_left_p
{
public:
  explicit Init_RawCamCal_left_p(::multisense_msgs::msg::RawCamCal & msg)
  : msg_(msg)
  {}
  Init_RawCamCal_right_m left_p(::multisense_msgs::msg::RawCamCal::_left_p_type arg)
  {
    msg_.left_p = std::move(arg);
    return Init_RawCamCal_right_m(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamCal msg_;
};

class Init_RawCamCal_left_r
{
public:
  explicit Init_RawCamCal_left_r(::multisense_msgs::msg::RawCamCal & msg)
  : msg_(msg)
  {}
  Init_RawCamCal_left_p left_r(::multisense_msgs::msg::RawCamCal::_left_r_type arg)
  {
    msg_.left_r = std::move(arg);
    return Init_RawCamCal_left_p(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamCal msg_;
};

class Init_RawCamCal_left_d
{
public:
  explicit Init_RawCamCal_left_d(::multisense_msgs::msg::RawCamCal & msg)
  : msg_(msg)
  {}
  Init_RawCamCal_left_r left_d(::multisense_msgs::msg::RawCamCal::_left_d_type arg)
  {
    msg_.left_d = std::move(arg);
    return Init_RawCamCal_left_r(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamCal msg_;
};

class Init_RawCamCal_left_m
{
public:
  Init_RawCamCal_left_m()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawCamCal_left_d left_m(::multisense_msgs::msg::RawCamCal::_left_m_type arg)
  {
    msg_.left_m = std::move(arg);
    return Init_RawCamCal_left_d(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamCal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::multisense_msgs::msg::RawCamCal>()
{
  return multisense_msgs::msg::builder::Init_RawCamCal_left_m();
}

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CAL__BUILDER_HPP_
