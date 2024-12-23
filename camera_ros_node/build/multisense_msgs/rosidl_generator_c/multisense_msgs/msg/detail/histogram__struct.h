// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multisense_msgs:msg/Histogram.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__HISTOGRAM__STRUCT_H_
#define MULTISENSE_MSGS__MSG__DETAIL__HISTOGRAM__STRUCT_H_

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
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Histogram in the package multisense_msgs.
typedef struct multisense_msgs__msg__Histogram
{
  int64_t frame_count;
  builtin_interfaces__msg__Time time_stamp;
  uint32_t width;
  uint32_t height;
  float gain;
  float fps;
  uint32_t exposure_time;
  uint32_t channels;
  uint32_t bins;
  rosidl_runtime_c__uint32__Sequence data;
} multisense_msgs__msg__Histogram;

// Struct for a sequence of multisense_msgs__msg__Histogram.
typedef struct multisense_msgs__msg__Histogram__Sequence
{
  multisense_msgs__msg__Histogram * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multisense_msgs__msg__Histogram__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTISENSE_MSGS__MSG__DETAIL__HISTOGRAM__STRUCT_H_
