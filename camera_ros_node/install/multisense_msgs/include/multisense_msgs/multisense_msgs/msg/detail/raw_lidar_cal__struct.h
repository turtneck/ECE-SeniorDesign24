// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multisense_msgs:msg/RawLidarCal.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_CAL__STRUCT_H_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_CAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RawLidarCal in the package multisense_msgs.
typedef struct multisense_msgs__msg__RawLidarCal
{
  float laser_to_spindle[16];
  float camera_to_spindle_fixed[16];
} multisense_msgs__msg__RawLidarCal;

// Struct for a sequence of multisense_msgs__msg__RawLidarCal.
typedef struct multisense_msgs__msg__RawLidarCal__Sequence
{
  multisense_msgs__msg__RawLidarCal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multisense_msgs__msg__RawLidarCal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_CAL__STRUCT_H_
