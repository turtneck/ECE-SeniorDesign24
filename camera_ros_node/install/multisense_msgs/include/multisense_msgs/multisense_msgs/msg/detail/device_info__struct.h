// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multisense_msgs:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__DEVICE_INFO__STRUCT_H_
#define MULTISENSE_MSGS__MSG__DETAIL__DEVICE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'device_name'
// Member 'build_date'
// Member 'serial_number'
// Member 'pcb_names'
// Member 'imager_name'
// Member 'lens_name'
// Member 'laser_name'
// Member 'motor_name'
// Member 'api_build_date'
// Member 'firmware_build_date'
#include "rosidl_runtime_c/string.h"
// Member 'pcb_serial_numbers'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/DeviceInfo in the package multisense_msgs.
typedef struct multisense_msgs__msg__DeviceInfo
{
  rosidl_runtime_c__String device_name;
  rosidl_runtime_c__String build_date;
  rosidl_runtime_c__String serial_number;
  uint32_t device_revision;
  uint32_t number_of_pcbs;
  rosidl_runtime_c__uint32__Sequence pcb_serial_numbers;
  rosidl_runtime_c__String__Sequence pcb_names;
  rosidl_runtime_c__String imager_name;
  uint32_t imager_type;
  uint32_t imager_width;
  uint32_t imager_height;
  rosidl_runtime_c__String lens_name;
  uint32_t lens_type;
  float nominal_baseline;
  float nominal_focal_length;
  float nominal_relative_aperture;
  uint32_t lighting_type;
  uint32_t number_of_lights;
  rosidl_runtime_c__String laser_name;
  uint32_t laser_type;
  rosidl_runtime_c__String motor_name;
  uint32_t motor_type;
  float motor_gear_reduction;
  rosidl_runtime_c__String api_build_date;
  uint16_t api_version;
  rosidl_runtime_c__String firmware_build_date;
  uint16_t firmware_version;
  uint64_t bitstream_version;
  uint64_t bitstream_magic;
  uint64_t fpga_dna;
} multisense_msgs__msg__DeviceInfo;

// Struct for a sequence of multisense_msgs__msg__DeviceInfo.
typedef struct multisense_msgs__msg__DeviceInfo__Sequence
{
  multisense_msgs__msg__DeviceInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multisense_msgs__msg__DeviceInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTISENSE_MSGS__MSG__DETAIL__DEVICE_INFO__STRUCT_H_
