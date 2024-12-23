// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multisense_msgs:msg/RawImuData.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_IMU_DATA__STRUCT_H_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_IMU_DATA__STRUCT_H_

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
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/RawImuData in the package multisense_msgs.
typedef struct multisense_msgs__msg__RawImuData
{
  builtin_interfaces__msg__Time time_stamp;
  float x;
  float y;
  float z;
} multisense_msgs__msg__RawImuData;

// Struct for a sequence of multisense_msgs__msg__RawImuData.
typedef struct multisense_msgs__msg__RawImuData__Sequence
{
  multisense_msgs__msg__RawImuData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multisense_msgs__msg__RawImuData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_IMU_DATA__STRUCT_H_
