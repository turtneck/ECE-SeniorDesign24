// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from multisense_msgs:msg/DeviceInfo.idl
// generated code does not contain a copyright notice
#include "multisense_msgs/msg/detail/device_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "multisense_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "multisense_msgs/msg/detail/device_info__struct.h"
#include "multisense_msgs/msg/detail/device_info__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // pcb_serial_numbers
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // pcb_serial_numbers
#include "rosidl_runtime_c/string.h"  // api_build_date, build_date, device_name, firmware_build_date, imager_name, laser_name, lens_name, motor_name, pcb_names, serial_number
#include "rosidl_runtime_c/string_functions.h"  // api_build_date, build_date, device_name, firmware_build_date, imager_name, laser_name, lens_name, motor_name, pcb_names, serial_number

// forward declare type support functions


using _DeviceInfo__ros_msg_type = multisense_msgs__msg__DeviceInfo;

static bool _DeviceInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DeviceInfo__ros_msg_type * ros_message = static_cast<const _DeviceInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: device_name
  {
    const rosidl_runtime_c__String * str = &ros_message->device_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: build_date
  {
    const rosidl_runtime_c__String * str = &ros_message->build_date;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: serial_number
  {
    const rosidl_runtime_c__String * str = &ros_message->serial_number;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: device_revision
  {
    cdr << ros_message->device_revision;
  }

  // Field name: number_of_pcbs
  {
    cdr << ros_message->number_of_pcbs;
  }

  // Field name: pcb_serial_numbers
  {
    size_t size = ros_message->pcb_serial_numbers.size;
    auto array_ptr = ros_message->pcb_serial_numbers.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pcb_names
  {
    size_t size = ros_message->pcb_names.size;
    auto array_ptr = ros_message->pcb_names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: imager_name
  {
    const rosidl_runtime_c__String * str = &ros_message->imager_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: imager_type
  {
    cdr << ros_message->imager_type;
  }

  // Field name: imager_width
  {
    cdr << ros_message->imager_width;
  }

  // Field name: imager_height
  {
    cdr << ros_message->imager_height;
  }

  // Field name: lens_name
  {
    const rosidl_runtime_c__String * str = &ros_message->lens_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: lens_type
  {
    cdr << ros_message->lens_type;
  }

  // Field name: nominal_baseline
  {
    cdr << ros_message->nominal_baseline;
  }

  // Field name: nominal_focal_length
  {
    cdr << ros_message->nominal_focal_length;
  }

  // Field name: nominal_relative_aperture
  {
    cdr << ros_message->nominal_relative_aperture;
  }

  // Field name: lighting_type
  {
    cdr << ros_message->lighting_type;
  }

  // Field name: number_of_lights
  {
    cdr << ros_message->number_of_lights;
  }

  // Field name: laser_name
  {
    const rosidl_runtime_c__String * str = &ros_message->laser_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: laser_type
  {
    cdr << ros_message->laser_type;
  }

  // Field name: motor_name
  {
    const rosidl_runtime_c__String * str = &ros_message->motor_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: motor_type
  {
    cdr << ros_message->motor_type;
  }

  // Field name: motor_gear_reduction
  {
    cdr << ros_message->motor_gear_reduction;
  }

  // Field name: api_build_date
  {
    const rosidl_runtime_c__String * str = &ros_message->api_build_date;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: api_version
  {
    cdr << ros_message->api_version;
  }

  // Field name: firmware_build_date
  {
    const rosidl_runtime_c__String * str = &ros_message->firmware_build_date;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: firmware_version
  {
    cdr << ros_message->firmware_version;
  }

  // Field name: bitstream_version
  {
    cdr << ros_message->bitstream_version;
  }

  // Field name: bitstream_magic
  {
    cdr << ros_message->bitstream_magic;
  }

  // Field name: fpga_dna
  {
    cdr << ros_message->fpga_dna;
  }

  return true;
}

static bool _DeviceInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DeviceInfo__ros_msg_type * ros_message = static_cast<_DeviceInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: device_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->device_name.data) {
      rosidl_runtime_c__String__init(&ros_message->device_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->device_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'device_name'\n");
      return false;
    }
  }

  // Field name: build_date
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->build_date.data) {
      rosidl_runtime_c__String__init(&ros_message->build_date);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->build_date,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'build_date'\n");
      return false;
    }
  }

  // Field name: serial_number
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->serial_number.data) {
      rosidl_runtime_c__String__init(&ros_message->serial_number);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->serial_number,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'serial_number'\n");
      return false;
    }
  }

  // Field name: device_revision
  {
    cdr >> ros_message->device_revision;
  }

  // Field name: number_of_pcbs
  {
    cdr >> ros_message->number_of_pcbs;
  }

  // Field name: pcb_serial_numbers
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pcb_serial_numbers.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->pcb_serial_numbers);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->pcb_serial_numbers, size)) {
      fprintf(stderr, "failed to create array for field 'pcb_serial_numbers'");
      return false;
    }
    auto array_ptr = ros_message->pcb_serial_numbers.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pcb_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pcb_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->pcb_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->pcb_names, size)) {
      fprintf(stderr, "failed to create array for field 'pcb_names'");
      return false;
    }
    auto array_ptr = ros_message->pcb_names.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'pcb_names'\n");
        return false;
      }
    }
  }

  // Field name: imager_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->imager_name.data) {
      rosidl_runtime_c__String__init(&ros_message->imager_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->imager_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'imager_name'\n");
      return false;
    }
  }

  // Field name: imager_type
  {
    cdr >> ros_message->imager_type;
  }

  // Field name: imager_width
  {
    cdr >> ros_message->imager_width;
  }

  // Field name: imager_height
  {
    cdr >> ros_message->imager_height;
  }

  // Field name: lens_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lens_name.data) {
      rosidl_runtime_c__String__init(&ros_message->lens_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lens_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lens_name'\n");
      return false;
    }
  }

  // Field name: lens_type
  {
    cdr >> ros_message->lens_type;
  }

  // Field name: nominal_baseline
  {
    cdr >> ros_message->nominal_baseline;
  }

  // Field name: nominal_focal_length
  {
    cdr >> ros_message->nominal_focal_length;
  }

  // Field name: nominal_relative_aperture
  {
    cdr >> ros_message->nominal_relative_aperture;
  }

  // Field name: lighting_type
  {
    cdr >> ros_message->lighting_type;
  }

  // Field name: number_of_lights
  {
    cdr >> ros_message->number_of_lights;
  }

  // Field name: laser_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->laser_name.data) {
      rosidl_runtime_c__String__init(&ros_message->laser_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->laser_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'laser_name'\n");
      return false;
    }
  }

  // Field name: laser_type
  {
    cdr >> ros_message->laser_type;
  }

  // Field name: motor_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->motor_name.data) {
      rosidl_runtime_c__String__init(&ros_message->motor_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->motor_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'motor_name'\n");
      return false;
    }
  }

  // Field name: motor_type
  {
    cdr >> ros_message->motor_type;
  }

  // Field name: motor_gear_reduction
  {
    cdr >> ros_message->motor_gear_reduction;
  }

  // Field name: api_build_date
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->api_build_date.data) {
      rosidl_runtime_c__String__init(&ros_message->api_build_date);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->api_build_date,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'api_build_date'\n");
      return false;
    }
  }

  // Field name: api_version
  {
    cdr >> ros_message->api_version;
  }

  // Field name: firmware_build_date
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->firmware_build_date.data) {
      rosidl_runtime_c__String__init(&ros_message->firmware_build_date);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->firmware_build_date,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'firmware_build_date'\n");
      return false;
    }
  }

  // Field name: firmware_version
  {
    cdr >> ros_message->firmware_version;
  }

  // Field name: bitstream_version
  {
    cdr >> ros_message->bitstream_version;
  }

  // Field name: bitstream_magic
  {
    cdr >> ros_message->bitstream_magic;
  }

  // Field name: fpga_dna
  {
    cdr >> ros_message->fpga_dna;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_multisense_msgs
size_t get_serialized_size_multisense_msgs__msg__DeviceInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DeviceInfo__ros_msg_type * ros_message = static_cast<const _DeviceInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name device_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->device_name.size + 1);
  // field.name build_date
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->build_date.size + 1);
  // field.name serial_number
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->serial_number.size + 1);
  // field.name device_revision
  {
    size_t item_size = sizeof(ros_message->device_revision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name number_of_pcbs
  {
    size_t item_size = sizeof(ros_message->number_of_pcbs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pcb_serial_numbers
  {
    size_t array_size = ros_message->pcb_serial_numbers.size;
    auto array_ptr = ros_message->pcb_serial_numbers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pcb_names
  {
    size_t array_size = ros_message->pcb_names.size;
    auto array_ptr = ros_message->pcb_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name imager_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->imager_name.size + 1);
  // field.name imager_type
  {
    size_t item_size = sizeof(ros_message->imager_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imager_width
  {
    size_t item_size = sizeof(ros_message->imager_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imager_height
  {
    size_t item_size = sizeof(ros_message->imager_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lens_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lens_name.size + 1);
  // field.name lens_type
  {
    size_t item_size = sizeof(ros_message->lens_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nominal_baseline
  {
    size_t item_size = sizeof(ros_message->nominal_baseline);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nominal_focal_length
  {
    size_t item_size = sizeof(ros_message->nominal_focal_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nominal_relative_aperture
  {
    size_t item_size = sizeof(ros_message->nominal_relative_aperture);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lighting_type
  {
    size_t item_size = sizeof(ros_message->lighting_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name number_of_lights
  {
    size_t item_size = sizeof(ros_message->number_of_lights);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name laser_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->laser_name.size + 1);
  // field.name laser_type
  {
    size_t item_size = sizeof(ros_message->laser_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->motor_name.size + 1);
  // field.name motor_type
  {
    size_t item_size = sizeof(ros_message->motor_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_gear_reduction
  {
    size_t item_size = sizeof(ros_message->motor_gear_reduction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name api_build_date
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->api_build_date.size + 1);
  // field.name api_version
  {
    size_t item_size = sizeof(ros_message->api_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name firmware_build_date
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->firmware_build_date.size + 1);
  // field.name firmware_version
  {
    size_t item_size = sizeof(ros_message->firmware_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bitstream_version
  {
    size_t item_size = sizeof(ros_message->bitstream_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bitstream_magic
  {
    size_t item_size = sizeof(ros_message->bitstream_magic);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fpga_dna
  {
    size_t item_size = sizeof(ros_message->fpga_dna);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DeviceInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_multisense_msgs__msg__DeviceInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_multisense_msgs
size_t max_serialized_size_multisense_msgs__msg__DeviceInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: device_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: build_date
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: serial_number
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: device_revision
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: number_of_pcbs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pcb_serial_numbers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pcb_names
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: imager_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: imager_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imager_width
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imager_height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lens_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: lens_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: nominal_baseline
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: nominal_focal_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: nominal_relative_aperture
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lighting_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: number_of_lights
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: laser_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: laser_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: motor_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor_gear_reduction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: api_build_date
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: api_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: firmware_build_date
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: firmware_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: bitstream_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: bitstream_magic
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: fpga_dna
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = multisense_msgs__msg__DeviceInfo;
    is_plain =
      (
      offsetof(DataType, fpga_dna) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DeviceInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_multisense_msgs__msg__DeviceInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DeviceInfo = {
  "multisense_msgs::msg",
  "DeviceInfo",
  _DeviceInfo__cdr_serialize,
  _DeviceInfo__cdr_deserialize,
  _DeviceInfo__get_serialized_size,
  _DeviceInfo__max_serialized_size
};

static rosidl_message_type_support_t _DeviceInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DeviceInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, multisense_msgs, msg, DeviceInfo)() {
  return &_DeviceInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
