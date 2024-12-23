// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multisense_msgs:msg/DeviceStatus.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__DEVICE_STATUS__STRUCT_H_
#define MULTISENSE_MSGS__MSG__DETAIL__DEVICE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'time_stamp'
// Member 'uptime'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/DeviceStatus in the package multisense_msgs.
typedef struct multisense_msgs__msg__DeviceStatus
{
  builtin_interfaces__msg__Time time_stamp;
  builtin_interfaces__msg__Time uptime;
  bool system_ok;
  bool laser_ok;
  bool laser_motor_ok;
  bool cameras_ok;
  bool imu_ok;
  bool external_leds_ok;
  bool processing_pipeline_ok;
  float power_supply_temp;
  float fpga_temp;
  float left_imager_temp;
  float right_imager_temp;
  float input_voltage;
  float input_current;
  float fpga_power;
  float logic_power;
  float imager_power;
} multisense_msgs__msg__DeviceStatus;

// Struct for a sequence of multisense_msgs__msg__DeviceStatus.
typedef struct multisense_msgs__msg__DeviceStatus__Sequence
{
  multisense_msgs__msg__DeviceStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multisense_msgs__msg__DeviceStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTISENSE_MSGS__MSG__DETAIL__DEVICE_STATUS__STRUCT_H_
