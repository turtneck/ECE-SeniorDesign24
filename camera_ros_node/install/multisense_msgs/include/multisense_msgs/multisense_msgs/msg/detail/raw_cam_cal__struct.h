// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multisense_msgs:msg/RawCamCal.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CAL__STRUCT_H_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RawCamCal in the package multisense_msgs.
typedef struct multisense_msgs__msg__RawCamCal
{
  float left_m[9];
  float left_d[8];
  float left_r[9];
  float left_p[12];
  float right_m[9];
  float right_d[8];
  float right_r[9];
  float right_p[12];
} multisense_msgs__msg__RawCamCal;

// Struct for a sequence of multisense_msgs__msg__RawCamCal.
typedef struct multisense_msgs__msg__RawCamCal__Sequence
{
  multisense_msgs__msg__RawCamCal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multisense_msgs__msg__RawCamCal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CAL__STRUCT_H_
