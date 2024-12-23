// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multisense_msgs:msg/RawLidarData.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_DATA__STRUCT_H_
#define MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'time_start'
// Member 'time_end'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'distance'
// Member 'intensity'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RawLidarData in the package multisense_msgs.
typedef struct multisense_msgs__msg__RawLidarData
{
  uint32_t scan_count;
  builtin_interfaces__msg__Time time_start;
  builtin_interfaces__msg__Time time_end;
  int32_t angle_start;
  int32_t angle_end;
  rosidl_runtime_c__uint32__Sequence distance;
  rosidl_runtime_c__uint32__Sequence intensity;
} multisense_msgs__msg__RawLidarData;

// Struct for a sequence of multisense_msgs__msg__RawLidarData.
typedef struct multisense_msgs__msg__RawLidarData__Sequence
{
  multisense_msgs__msg__RawLidarData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multisense_msgs__msg__RawLidarData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTISENSE_MSGS__MSG__DETAIL__RAW_LIDAR_DATA__STRUCT_H_
