// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multisense_msgs:msg/PtpStatus.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__PTP_STATUS__STRUCT_H_
#define MULTISENSE_MSGS__MSG__DETAIL__PTP_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PtpStatus in the package multisense_msgs.
typedef struct multisense_msgs__msg__PtpStatus
{
  bool gm_present;
  uint8_t gm_id[8];
  int64_t gm_offset;
  int64_t path_delay;
  int16_t steps_removed;
} multisense_msgs__msg__PtpStatus;

// Struct for a sequence of multisense_msgs__msg__PtpStatus.
typedef struct multisense_msgs__msg__PtpStatus__Sequence
{
  multisense_msgs__msg__PtpStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multisense_msgs__msg__PtpStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTISENSE_MSGS__MSG__DETAIL__PTP_STATUS__STRUCT_H_
