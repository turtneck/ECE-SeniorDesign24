// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multisense_msgs:msg/RawCamData.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_DATA__STRUCT_H_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_DATA__STRUCT_H_

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
// Member 'gray_scale_image'
// Member 'disparity_image'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RawCamData in the package multisense_msgs.
typedef struct multisense_msgs__msg__RawCamData
{
  float frames_per_second;
  float gain;
  uint32_t exposure_time;
  uint32_t frame_count;
  builtin_interfaces__msg__Time time_stamp;
  uint32_t angle;
  uint16_t width;
  uint16_t height;
  rosidl_runtime_c__uint8__Sequence gray_scale_image;
  rosidl_runtime_c__uint16__Sequence disparity_image;
} multisense_msgs__msg__RawCamData;

// Struct for a sequence of multisense_msgs__msg__RawCamData.
typedef struct multisense_msgs__msg__RawCamData__Sequence
{
  multisense_msgs__msg__RawCamData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multisense_msgs__msg__RawCamData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_CAM_DATA__STRUCT_H_
