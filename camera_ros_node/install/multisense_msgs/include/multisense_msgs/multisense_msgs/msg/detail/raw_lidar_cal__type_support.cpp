// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from multisense_msgs:msg/RawLidarCal.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "multisense_msgs/msg/detail/raw_lidar_cal__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace multisense_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RawLidarCal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) multisense_msgs::msg::RawLidarCal(_init);
}

void RawLidarCal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<multisense_msgs::msg::RawLidarCal *>(message_memory);
  typed_message->~RawLidarCal();
}

size_t size_function__RawLidarCal__laser_to_spindle(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__RawLidarCal__laser_to_spindle(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__RawLidarCal__laser_to_spindle(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 16> *>(untyped_member);
  return &member[index];
}

void fetch_function__RawLidarCal__laser_to_spindle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RawLidarCal__laser_to_spindle(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RawLidarCal__laser_to_spindle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RawLidarCal__laser_to_spindle(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__RawLidarCal__camera_to_spindle_fixed(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__RawLidarCal__camera_to_spindle_fixed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__RawLidarCal__camera_to_spindle_fixed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 16> *>(untyped_member);
  return &member[index];
}

void fetch_function__RawLidarCal__camera_to_spindle_fixed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RawLidarCal__camera_to_spindle_fixed(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RawLidarCal__camera_to_spindle_fixed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RawLidarCal__camera_to_spindle_fixed(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RawLidarCal_message_member_array[2] = {
  {
    "laser_to_spindle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs::msg::RawLidarCal, laser_to_spindle),  // bytes offset in struct
    nullptr,  // default value
    size_function__RawLidarCal__laser_to_spindle,  // size() function pointer
    get_const_function__RawLidarCal__laser_to_spindle,  // get_const(index) function pointer
    get_function__RawLidarCal__laser_to_spindle,  // get(index) function pointer
    fetch_function__RawLidarCal__laser_to_spindle,  // fetch(index, &value) function pointer
    assign_function__RawLidarCal__laser_to_spindle,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "camera_to_spindle_fixed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs::msg::RawLidarCal, camera_to_spindle_fixed),  // bytes offset in struct
    nullptr,  // default value
    size_function__RawLidarCal__camera_to_spindle_fixed,  // size() function pointer
    get_const_function__RawLidarCal__camera_to_spindle_fixed,  // get_const(index) function pointer
    get_function__RawLidarCal__camera_to_spindle_fixed,  // get(index) function pointer
    fetch_function__RawLidarCal__camera_to_spindle_fixed,  // fetch(index, &value) function pointer
    assign_function__RawLidarCal__camera_to_spindle_fixed,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RawLidarCal_message_members = {
  "multisense_msgs::msg",  // message namespace
  "RawLidarCal",  // message name
  2,  // number of fields
  sizeof(multisense_msgs::msg::RawLidarCal),
  RawLidarCal_message_member_array,  // message members
  RawLidarCal_init_function,  // function to initialize message memory (memory has to be allocated)
  RawLidarCal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RawLidarCal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RawLidarCal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace multisense_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<multisense_msgs::msg::RawLidarCal>()
{
  return &::multisense_msgs::msg::rosidl_typesupport_introspection_cpp::RawLidarCal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, multisense_msgs, msg, RawLidarCal)() {
  return &::multisense_msgs::msg::rosidl_typesupport_introspection_cpp::RawLidarCal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
