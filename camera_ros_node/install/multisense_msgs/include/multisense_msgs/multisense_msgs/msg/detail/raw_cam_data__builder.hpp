// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multisense_msgs:msg/RawCamData.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_DATA__BUILDER_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "multisense_msgs/msg/detail/raw_cam_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace multisense_msgs
{

namespace msg
{

namespace builder
{

class Init_RawCamData_disparity_image
{
public:
  explicit Init_RawCamData_disparity_image(::multisense_msgs::msg::RawCamData & msg)
  : msg_(msg)
  {}
  ::multisense_msgs::msg::RawCamData disparity_image(::multisense_msgs::msg::RawCamData::_disparity_image_type arg)
  {
    msg_.disparity_image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamData msg_;
};

class Init_RawCamData_gray_scale_image
{
public:
  explicit Init_RawCamData_gray_scale_image(::multisense_msgs::msg::RawCamData & msg)
  : msg_(msg)
  {}
  Init_RawCamData_disparity_image gray_scale_image(::multisense_msgs::msg::RawCamData::_gray_scale_image_type arg)
  {
    msg_.gray_scale_image = std::move(arg);
    return Init_RawCamData_disparity_image(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamData msg_;
};

class Init_RawCamData_height
{
public:
  explicit Init_RawCamData_height(::multisense_msgs::msg::RawCamData & msg)
  : msg_(msg)
  {}
  Init_RawCamData_gray_scale_image height(::multisense_msgs::msg::RawCamData::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_RawCamData_gray_scale_image(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamData msg_;
};

class Init_RawCamData_width
{
public:
  explicit Init_RawCamData_width(::multisense_msgs::msg::RawCamData & msg)
  : msg_(msg)
  {}
  Init_RawCamData_height width(::multisense_msgs::msg::RawCamData::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_RawCamData_height(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamData msg_;
};

class Init_RawCamData_angle
{
public:
  explicit Init_RawCamData_angle(::multisense_msgs::msg::RawCamData & msg)
  : msg_(msg)
  {}
  Init_RawCamData_width angle(::multisense_msgs::msg::RawCamData::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_RawCamData_width(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamData msg_;
};

class Init_RawCamData_time_stamp
{
public:
  explicit Init_RawCamData_time_stamp(::multisense_msgs::msg::RawCamData & msg)
  : msg_(msg)
  {}
  Init_RawCamData_angle time_stamp(::multisense_msgs::msg::RawCamData::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_RawCamData_angle(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamData msg_;
};

class Init_RawCamData_frame_count
{
public:
  explicit Init_RawCamData_frame_count(::multisense_msgs::msg::RawCamData & msg)
  : msg_(msg)
  {}
  Init_RawCamData_time_stamp frame_count(::multisense_msgs::msg::RawCamData::_frame_count_type arg)
  {
    msg_.frame_count = std::move(arg);
    return Init_RawCamData_time_stamp(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamData msg_;
};

class Init_RawCamData_exposure_time
{
public:
  explicit Init_RawCamData_exposure_time(::multisense_msgs::msg::RawCamData & msg)
  : msg_(msg)
  {}
  Init_RawCamData_frame_count exposure_time(::multisense_msgs::msg::RawCamData::_exposure_time_type arg)
  {
    msg_.exposure_time = std::move(arg);
    return Init_RawCamData_frame_count(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamData msg_;
};

class Init_RawCamData_gain
{
public:
  explicit Init_RawCamData_gain(::multisense_msgs::msg::RawCamData & msg)
  : msg_(msg)
  {}
  Init_RawCamData_exposure_time gain(::multisense_msgs::msg::RawCamData::_gain_type arg)
  {
    msg_.gain = std::move(arg);
    return Init_RawCamData_exposure_time(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamData msg_;
};

class Init_RawCamData_frames_per_second
{
public:
  Init_RawCamData_frames_per_second()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawCamData_gain frames_per_second(::multisense_msgs::msg::RawCamData::_frames_per_second_type arg)
  {
    msg_.frames_per_second = std::move(arg);
    return Init_RawCamData_gain(msg_);
  }

private:
  ::multisense_msgs::msg::RawCamData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::multisense_msgs::msg::RawCamData>()
{
  return multisense_msgs::msg::builder::Init_RawCamData_frames_per_second();
}

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_DATA__BUILDER_HPP_
