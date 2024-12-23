// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from multisense_msgs:msg/RawCamCal.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "multisense_msgs/msg/detail/raw_cam_cal__struct.hpp"
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

void RawCamCal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) multisense_msgs::msg::RawCamCal(_init);
}

void RawCamCal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<multisense_msgs::msg::RawCamCal *>(message_memory);
  typed_message->~RawCamCal();
}

size_t size_function__RawCamCal__left_m(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__RawCamCal__left_m(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__RawCamCal__left_m(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__RawCamCal__left_m(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RawCamCal__left_m(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RawCamCal__left_m(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RawCamCal__left_m(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__RawCamCal__left_d(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__RawCamCal__left_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__RawCamCal__left_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 8> *>(untyped_member);
  return &member[index];
}

void fetch_function__RawCamCal__left_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RawCamCal__left_d(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RawCamCal__left_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RawCamCal__left_d(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__RawCamCal__left_r(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__RawCamCal__left_r(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__RawCamCal__left_r(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__RawCamCal__left_r(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RawCamCal__left_r(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RawCamCal__left_r(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RawCamCal__left_r(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__RawCamCal__left_p(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__RawCamCal__left_p(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__RawCamCal__left_p(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__RawCamCal__left_p(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RawCamCal__left_p(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RawCamCal__left_p(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RawCamCal__left_p(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__RawCamCal__right_m(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__RawCamCal__right_m(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__RawCamCal__right_m(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__RawCamCal__right_m(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RawCamCal__right_m(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RawCamCal__right_m(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RawCamCal__right_m(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__RawCamCal__right_d(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__RawCamCal__right_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__RawCamCal__right_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 8> *>(untyped_member);
  return &member[index];
}

void fetch_function__RawCamCal__right_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RawCamCal__right_d(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RawCamCal__right_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RawCamCal__right_d(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__RawCamCal__right_r(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__RawCamCal__right_r(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__RawCamCal__right_r(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__RawCamCal__right_r(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RawCamCal__right_r(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RawCamCal__right_r(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RawCamCal__right_r(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__RawCamCal__right_p(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__RawCamCal__right_p(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__RawCamCal__right_p(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__RawCamCal__right_p(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RawCamCal__right_p(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RawCamCal__right_p(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RawCamCal__right_p(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RawCamCal_message_member_array[8] = {
  {
    "left_m",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs::msg::RawCamCal, left_m),  // bytes offset in struct
    nullptr,  // default value
    size_function__RawCamCal__left_m,  // size() function pointer
    get_const_function__RawCamCal__left_m,  // get_const(index) function pointer
    get_function__RawCamCal__left_m,  // get(index) function pointer
    fetch_function__RawCamCal__left_m,  // fetch(index, &value) function pointer
    assign_function__RawCamCal__left_m,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs::msg::RawCamCal, left_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__RawCamCal__left_d,  // size() function pointer
    get_const_function__RawCamCal__left_d,  // get_const(index) function pointer
    get_function__RawCamCal__left_d,  // get(index) function pointer
    fetch_function__RawCamCal__left_d,  // fetch(index, &value) function pointer
    assign_function__RawCamCal__left_d,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left_r",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs::msg::RawCamCal, left_r),  // bytes offset in struct
    nullptr,  // default value
    size_function__RawCamCal__left_r,  // size() function pointer
    get_const_function__RawCamCal__left_r,  // get_const(index) function pointer
    get_function__RawCamCal__left_r,  // get(index) function pointer
    fetch_function__RawCamCal__left_r,  // fetch(index, &value) function pointer
    assign_function__RawCamCal__left_r,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left_p",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs::msg::RawCamCal, left_p),  // bytes offset in struct
    nullptr,  // default value
    size_function__RawCamCal__left_p,  // size() function pointer
    get_const_function__RawCamCal__left_p,  // get_const(index) function pointer
    get_function__RawCamCal__left_p,  // get(index) function pointer
    fetch_function__RawCamCal__left_p,  // fetch(index, &value) function pointer
    assign_function__RawCamCal__left_p,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_m",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs::msg::RawCamCal, right_m),  // bytes offset in struct
    nullptr,  // default value
    size_function__RawCamCal__right_m,  // size() function pointer
    get_const_function__RawCamCal__right_m,  // get_const(index) function pointer
    get_function__RawCamCal__right_m,  // get(index) function pointer
    fetch_function__RawCamCal__right_m,  // fetch(index, &value) function pointer
    assign_function__RawCamCal__right_m,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs::msg::RawCamCal, right_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__RawCamCal__right_d,  // size() function pointer
    get_const_function__RawCamCal__right_d,  // get_const(index) function pointer
    get_function__RawCamCal__right_d,  // get(index) function pointer
    fetch_function__RawCamCal__right_d,  // fetch(index, &value) function pointer
    assign_function__RawCamCal__right_d,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_r",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs::msg::RawCamCal, right_r),  // bytes offset in struct
    nullptr,  // default value
    size_function__RawCamCal__right_r,  // size() function pointer
    get_const_function__RawCamCal__right_r,  // get_const(index) function pointer
    get_function__RawCamCal__right_r,  // get(index) function pointer
    fetch_function__RawCamCal__right_r,  // fetch(index, &value) function pointer
    assign_function__RawCamCal__right_r,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_p",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(multisense_msgs::msg::RawCamCal, right_p),  // bytes offset in struct
    nullptr,  // default value
    size_function__RawCamCal__right_p,  // size() function pointer
    get_const_function__RawCamCal__right_p,  // get_const(index) function pointer
    get_function__RawCamCal__right_p,  // get(index) function pointer
    fetch_function__RawCamCal__right_p,  // fetch(index, &value) function pointer
    assign_function__RawCamCal__right_p,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RawCamCal_message_members = {
  "multisense_msgs::msg",  // message namespace
  "RawCamCal",  // message name
  8,  // number of fields
  sizeof(multisense_msgs::msg::RawCamCal),
  RawCamCal_message_member_array,  // message members
  RawCamCal_init_function,  // function to initialize message memory (memory has to be allocated)
  RawCamCal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RawCamCal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RawCamCal_message_members,
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
get_message_type_support_handle<multisense_msgs::msg::RawCamCal>()
{
  return &::multisense_msgs::msg::rosidl_typesupport_introspection_cpp::RawCamCal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, multisense_msgs, msg, RawCamCal)() {
  return &::multisense_msgs::msg::rosidl_typesupport_introspection_cpp::RawCamCal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
