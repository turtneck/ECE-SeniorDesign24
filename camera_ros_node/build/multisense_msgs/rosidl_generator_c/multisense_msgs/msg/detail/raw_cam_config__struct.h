// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multisense_msgs:msg/RawCamConfig.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CONFIG__STRUCT_H_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RawCamConfig in the package multisense_msgs.
typedef struct multisense_msgs__msg__RawCamConfig
{
  uint16_t width;
  uint16_t height;
  float frames_per_second;
  float gain;
  uint32_t exposure_time;
  float fx;
  float fy;
  float cx;
  float cy;
  float tx;
  float ty;
  float tz;
  float roll;
  float pitch;
  float yaw;
} multisense_msgs__msg__RawCamConfig;

// Struct for a sequence of multisense_msgs__msg__RawCamConfig.
typedef struct multisense_msgs__msg__RawCamConfig__Sequence
{
  multisense_msgs__msg__RawCamConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multisense_msgs__msg__RawCamConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_CONFIG__STRUCT_H_
