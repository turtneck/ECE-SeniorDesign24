// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multisense_msgs:msg/StampedPps.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__STAMPED_PPS__STRUCT_H_
#define MULTISENSE_MSGS__MSG__DETAIL__STAMPED_PPS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
// Member 'host_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/StampedPps in the package multisense_msgs.
typedef struct multisense_msgs__msg__StampedPps
{
  builtin_interfaces__msg__Time data;
  builtin_interfaces__msg__Time host_time;
} multisense_msgs__msg__StampedPps;

// Struct for a sequence of multisense_msgs__msg__StampedPps.
typedef struct multisense_msgs__msg__StampedPps__Sequence
{
  multisense_msgs__msg__StampedPps * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multisense_msgs__msg__StampedPps__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTISENSE_MSGS__MSG__DETAIL__STAMPED_PPS__STRUCT_H_
