// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from multisense_msgs:msg/DeviceStatus.idl
// generated code does not contain a copyright notice
#include "multisense_msgs/msg/detail/device_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "multisense_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "multisense_msgs/msg/detail/device_status__struct.h"
#include "multisense_msgs/msg/detail/device_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // time_stamp, uptime

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_multisense_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_multisense_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_multisense_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _DeviceStatus__ros_msg_type = multisense_msgs__msg__DeviceStatus;

static bool _DeviceStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DeviceStatus__ros_msg_type * ros_message = static_cast<const _DeviceStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: time_stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->time_stamp, cdr))
    {
      return false;
    }
  }

  // Field name: uptime
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->uptime, cdr))
    {
      return false;
    }
  }

  // Field name: system_ok
  {
    cdr << (ros_message->system_ok ? true : false);
  }

  // Field name: laser_ok
  {
    cdr << (ros_message->laser_ok ? true : false);
  }

  // Field name: laser_motor_ok
  {
    cdr << (ros_message->laser_motor_ok ? true : false);
  }

  // Field name: cameras_ok
  {
    cdr << (ros_message->cameras_ok ? true : false);
  }

  // Field name: imu_ok
  {
    cdr << (ros_message->imu_ok ? true : false);
  }

  // Field name: external_leds_ok
  {
    cdr << (ros_message->external_leds_ok ? true : false);
  }

  // Field name: processing_pipeline_ok
  {
    cdr << (ros_message->processing_pipeline_ok ? true : false);
  }

  // Field name: power_supply_temp
  {
    cdr << ros_message->power_supply_temp;
  }

  // Field name: fpga_temp
  {
    cdr << ros_message->fpga_temp;
  }

  // Field name: left_imager_temp
  {
    cdr << ros_message->left_imager_temp;
  }

  // Field name: right_imager_temp
  {
    cdr << ros_message->right_imager_temp;
  }

  // Field name: input_voltage
  {
    cdr << ros_message->input_voltage;
  }

  // Field name: input_current
  {
    cdr << ros_message->input_current;
  }

  // Field name: fpga_power
  {
    cdr << ros_message->fpga_power;
  }

  // Field name: logic_power
  {
    cdr << ros_message->logic_power;
  }

  // Field name: imager_power
  {
    cdr << ros_message->imager_power;
  }

  return true;
}

static bool _DeviceStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DeviceStatus__ros_msg_type * ros_message = static_cast<_DeviceStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: time_stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->time_stamp))
    {
      return false;
    }
  }

  // Field name: uptime
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->uptime))
    {
      return false;
    }
  }

  // Field name: system_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->system_ok = tmp ? true : false;
  }

  // Field name: laser_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->laser_ok = tmp ? true : false;
  }

  // Field name: laser_motor_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->laser_motor_ok = tmp ? true : false;
  }

  // Field name: cameras_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cameras_ok = tmp ? true : false;
  }

  // Field name: imu_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->imu_ok = tmp ? true : false;
  }

  // Field name: external_leds_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->external_leds_ok = tmp ? true : false;
  }

  // Field name: processing_pipeline_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->processing_pipeline_ok = tmp ? true : false;
  }

  // Field name: power_supply_temp
  {
    cdr >> ros_message->power_supply_temp;
  }

  // Field name: fpga_temp
  {
    cdr >> ros_message->fpga_temp;
  }

  // Field name: left_imager_temp
  {
    cdr >> ros_message->left_imager_temp;
  }

  // Field name: right_imager_temp
  {
    cdr >> ros_message->right_imager_temp;
  }

  // Field name: input_voltage
  {
    cdr >> ros_message->input_voltage;
  }

  // Field name: input_current
  {
    cdr >> ros_message->input_current;
  }

  // Field name: fpga_power
  {
    cdr >> ros_message->fpga_power;
  }

  // Field name: logic_power
  {
    cdr >> ros_message->logic_power;
  }

  // Field name: imager_power
  {
    cdr >> ros_message->imager_power;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_multisense_msgs
size_t get_serialized_size_multisense_msgs__msg__DeviceStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DeviceStatus__ros_msg_type * ros_message = static_cast<const _DeviceStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name time_stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->time_stamp), current_alignment);
  // field.name uptime

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->uptime), current_alignment);
  // field.name system_ok
  {
    size_t item_size = sizeof(ros_message->system_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name laser_ok
  {
    size_t item_size = sizeof(ros_message->laser_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name laser_motor_ok
  {
    size_t item_size = sizeof(ros_message->laser_motor_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cameras_ok
  {
    size_t item_size = sizeof(ros_message->cameras_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_ok
  {
    size_t item_size = sizeof(ros_message->imu_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name external_leds_ok
  {
    size_t item_size = sizeof(ros_message->external_leds_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name processing_pipeline_ok
  {
    size_t item_size = sizeof(ros_message->processing_pipeline_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_supply_temp
  {
    size_t item_size = sizeof(ros_message->power_supply_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fpga_temp
  {
    size_t item_size = sizeof(ros_message->fpga_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_imager_temp
  {
    size_t item_size = sizeof(ros_message->left_imager_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_imager_temp
  {
    size_t item_size = sizeof(ros_message->right_imager_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name input_voltage
  {
    size_t item_size = sizeof(ros_message->input_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name input_current
  {
    size_t item_size = sizeof(ros_message->input_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fpga_power
  {
    size_t item_size = sizeof(ros_message->fpga_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name logic_power
  {
    size_t item_size = sizeof(ros_message->logic_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imager_power
  {
    size_t item_size = sizeof(ros_message->imager_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DeviceStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_multisense_msgs__msg__DeviceStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_multisense_msgs
size_t max_serialized_size_multisense_msgs__msg__DeviceStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: time_stamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: uptime
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: system_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: laser_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: laser_motor_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cameras_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: imu_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: external_leds_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: processing_pipeline_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: power_supply_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fpga_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_imager_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_imager_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: input_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: input_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fpga_power
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: logic_power
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imager_power
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = multisense_msgs__msg__DeviceStatus;
    is_plain =
      (
      offsetof(DataType, imager_power) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DeviceStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_multisense_msgs__msg__DeviceStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DeviceStatus = {
  "multisense_msgs::msg",
  "DeviceStatus",
  _DeviceStatus__cdr_serialize,
  _DeviceStatus__cdr_deserialize,
  _DeviceStatus__get_serialized_size,
  _DeviceStatus__max_serialized_size
};

static rosidl_message_type_support_t _DeviceStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DeviceStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, multisense_msgs, msg, DeviceStatus)() {
  return &_DeviceStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
