// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multisense_msgs:msg/Histogram.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__HISTOGRAM__BUILDER_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__HISTOGRAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "multisense_msgs/msg/detail/histogram__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace multisense_msgs
{

namespace msg
{

namespace builder
{

class Init_Histogram_data
{
public:
  explicit Init_Histogram_data(::multisense_msgs::msg::Histogram & msg)
  : msg_(msg)
  {}
  ::multisense_msgs::msg::Histogram data(::multisense_msgs::msg::Histogram::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multisense_msgs::msg::Histogram msg_;
};

class Init_Histogram_bins
{
public:
  explicit Init_Histogram_bins(::multisense_msgs::msg::Histogram & msg)
  : msg_(msg)
  {}
  Init_Histogram_data bins(::multisense_msgs::msg::Histogram::_bins_type arg)
  {
    msg_.bins = std::move(arg);
    return Init_Histogram_data(msg_);
  }

private:
  ::multisense_msgs::msg::Histogram msg_;
};

class Init_Histogram_channels
{
public:
  explicit Init_Histogram_channels(::multisense_msgs::msg::Histogram & msg)
  : msg_(msg)
  {}
  Init_Histogram_bins channels(::multisense_msgs::msg::Histogram::_channels_type arg)
  {
    msg_.channels = std::move(arg);
    return Init_Histogram_bins(msg_);
  }

private:
  ::multisense_msgs::msg::Histogram msg_;
};

class Init_Histogram_exposure_time
{
public:
  explicit Init_Histogram_exposure_time(::multisense_msgs::msg::Histogram & msg)
  : msg_(msg)
  {}
  Init_Histogram_channels exposure_time(::multisense_msgs::msg::Histogram::_exposure_time_type arg)
  {
    msg_.exposure_time = std::move(arg);
    return Init_Histogram_channels(msg_);
  }

private:
  ::multisense_msgs::msg::Histogram msg_;
};

class Init_Histogram_fps
{
public:
  explicit Init_Histogram_fps(::multisense_msgs::msg::Histogram & msg)
  : msg_(msg)
  {}
  Init_Histogram_exposure_time fps(::multisense_msgs::msg::Histogram::_fps_type arg)
  {
    msg_.fps = std::move(arg);
    return Init_Histogram_exposure_time(msg_);
  }

private:
  ::multisense_msgs::msg::Histogram msg_;
};

class Init_Histogram_gain
{
public:
  explicit Init_Histogram_gain(::multisense_msgs::msg::Histogram & msg)
  : msg_(msg)
  {}
  Init_Histogram_fps gain(::multisense_msgs::msg::Histogram::_gain_type arg)
  {
    msg_.gain = std::move(arg);
    return Init_Histogram_fps(msg_);
  }

private:
  ::multisense_msgs::msg::Histogram msg_;
};

class Init_Histogram_height
{
public:
  explicit Init_Histogram_height(::multisense_msgs::msg::Histogram & msg)
  : msg_(msg)
  {}
  Init_Histogram_gain height(::multisense_msgs::msg::Histogram::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Histogram_gain(msg_);
  }

private:
  ::multisense_msgs::msg::Histogram msg_;
};

class Init_Histogram_width
{
public:
  explicit Init_Histogram_width(::multisense_msgs::msg::Histogram & msg)
  : msg_(msg)
  {}
  Init_Histogram_height width(::multisense_msgs::msg::Histogram::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Histogram_height(msg_);
  }

private:
  ::multisense_msgs::msg::Histogram msg_;
};

class Init_Histogram_time_stamp
{
public:
  explicit Init_Histogram_time_stamp(::multisense_msgs::msg::Histogram & msg)
  : msg_(msg)
  {}
  Init_Histogram_width time_stamp(::multisense_msgs::msg::Histogram::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_Histogram_width(msg_);
  }

private:
  ::multisense_msgs::msg::Histogram msg_;
};

class Init_Histogram_frame_count
{
public:
  Init_Histogram_frame_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Histogram_time_stamp frame_count(::multisense_msgs::msg::Histogram::_frame_count_type arg)
  {
    msg_.frame_count = std::move(arg);
    return Init_Histogram_time_stamp(msg_);
  }

private:
  ::multisense_msgs::msg::Histogram msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::multisense_msgs::msg::Histogram>()
{
  return multisense_msgs::msg::builder::Init_Histogram_frame_count();
}

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__HISTOGRAM__BUILDER_HPP_
