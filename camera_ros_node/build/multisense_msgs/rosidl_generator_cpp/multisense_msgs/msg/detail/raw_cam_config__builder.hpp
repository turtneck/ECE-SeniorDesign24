// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multisense_msgs:msg/RawCamConfig.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CONFIG__BUILDER_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "multisense_msgs/msg/detail/raw_cam_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace multisense_msgs
{

namespace msg
{

namespace builder
{

class Init_RawCamConfig_yaw
{
public:
  explicit Init_RawCamConfig_yaw(::multisense_msgs::msg::RawCamConfig & msg)
  : msg_(msg)
  {}
  ::multisense_msgs::msg::RawCamConfig yaw(::multisense_msgs::msg::RawCamConfig::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamConfig msg_;
};

class Init_RawCamConfig_pitch
{
public:
  explicit Init_RawCamConfig_pitch(::multisense_msgs::msg::RawCamConfig & msg)
  : msg_(msg)
  {}
  Init_RawCamConfig_yaw pitch(::multisense_msgs::msg::RawCamConfig::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_RawCamConfig_yaw(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamConfig msg_;
};

class Init_RawCamConfig_roll
{
public:
  explicit Init_RawCamConfig_roll(::multisense_msgs::msg::RawCamConfig & msg)
  : msg_(msg)
  {}
  Init_RawCamConfig_pitch roll(::multisense_msgs::msg::RawCamConfig::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_RawCamConfig_pitch(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamConfig msg_;
};

class Init_RawCamConfig_tz
{
public:
  explicit Init_RawCamConfig_tz(::multisense_msgs::msg::RawCamConfig & msg)
  : msg_(msg)
  {}
  Init_RawCamConfig_roll tz(::multisense_msgs::msg::RawCamConfig::_tz_type arg)
  {
    msg_.tz = std::move(arg);
    return Init_RawCamConfig_roll(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamConfig msg_;
};

class Init_RawCamConfig_ty
{
public:
  explicit Init_RawCamConfig_ty(::multisense_msgs::msg::RawCamConfig & msg)
  : msg_(msg)
  {}
  Init_RawCamConfig_tz ty(::multisense_msgs::msg::RawCamConfig::_ty_type arg)
  {
    msg_.ty = std::move(arg);
    return Init_RawCamConfig_tz(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamConfig msg_;
};

class Init_RawCamConfig_tx
{
public:
  explicit Init_RawCamConfig_tx(::multisense_msgs::msg::RawCamConfig & msg)
  : msg_(msg)
  {}
  Init_RawCamConfig_ty tx(::multisense_msgs::msg::RawCamConfig::_tx_type arg)
  {
    msg_.tx = std::move(arg);
    return Init_RawCamConfig_ty(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamConfig msg_;
};

class Init_RawCamConfig_cy
{
public:
  explicit Init_RawCamConfig_cy(::multisense_msgs::msg::RawCamConfig & msg)
  : msg_(msg)
  {}
  Init_RawCamConfig_tx cy(::multisense_msgs::msg::RawCamConfig::_cy_type arg)
  {
    msg_.cy = std::move(arg);
    return Init_RawCamConfig_tx(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamConfig msg_;
};

class Init_RawCamConfig_cx
{
public:
  explicit Init_RawCamConfig_cx(::multisense_msgs::msg::RawCamConfig & msg)
  : msg_(msg)
  {}
  Init_RawCamConfig_cy cx(::multisense_msgs::msg::RawCamConfig::_cx_type arg)
  {
    msg_.cx = std::move(arg);
    return Init_RawCamConfig_cy(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamConfig msg_;
};

class Init_RawCamConfig_fy
{
public:
  explicit Init_RawCamConfig_fy(::multisense_msgs::msg::RawCamConfig & msg)
  : msg_(msg)
  {}
  Init_RawCamConfig_cx fy(::multisense_msgs::msg::RawCamConfig::_fy_type arg)
  {
    msg_.fy = std::move(arg);
    return Init_RawCamConfig_cx(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamConfig msg_;
};

class Init_RawCamConfig_fx
{
public:
  explicit Init_RawCamConfig_fx(::multisense_msgs::msg::RawCamConfig & msg)
  : msg_(msg)
  {}
  Init_RawCamConfig_fy fx(::multisense_msgs::msg::RawCamConfig::_fx_type arg)
  {
    msg_.fx = std::move(arg);
    return Init_RawCamConfig_fy(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamConfig msg_;
};

class Init_RawCamConfig_exposure_time
{
public:
  explicit Init_RawCamConfig_exposure_time(::multisense_msgs::msg::RawCamConfig & msg)
  : msg_(msg)
  {}
  Init_RawCamConfig_fx exposure_time(::multisense_msgs::msg::RawCamConfig::_exposure_time_type arg)
  {
    msg_.exposure_time = std::move(arg);
    return Init_RawCamConfig_fx(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamConfig msg_;
};

class Init_RawCamConfig_gain
{
public:
  explicit Init_RawCamConfig_gain(::multisense_msgs::msg::RawCamConfig & msg)
  : msg_(msg)
  {}
  Init_RawCamConfig_exposure_time gain(::multisense_msgs::msg::RawCamConfig::_gain_type arg)
  {
    msg_.gain = std::move(arg);
    return Init_RawCamConfig_exposure_time(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamConfig msg_;
};

class Init_RawCamConfig_frames_per_second
{
public:
  explicit Init_RawCamConfig_frames_per_second(::multisense_msgs::msg::RawCamConfig & msg)
  : msg_(msg)
  {}
  Init_RawCamConfig_gain frames_per_second(::multisense_msgs::msg::RawCamConfig::_frames_per_second_type arg)
  {
    msg_.frames_per_second = std::move(arg);
    return Init_RawCamConfig_gain(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamConfig msg_;
};

class Init_RawCamConfig_height
{
public:
  explicit Init_RawCamConfig_height(::multisense_msgs::msg::RawCamConfig & msg)
  : msg_(msg)
  {}
  Init_RawCamConfig_frames_per_second height(::multisense_msgs::msg::RawCamConfig::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_RawCamConfig_frames_per_second(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamConfig msg_;
};

class Init_RawCamConfig_width
{
public:
  Init_RawCamConfig_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawCamConfig_height width(::multisense_msgs::msg::RawCamConfig::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_RawCamConfig_height(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::multisense_msgs::msg::RawCamConfig>()
{
  return multisense_msgs::msg::builder::Init_RawCamConfig_width();
}

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CONFIG__BUILDER_HPP_
