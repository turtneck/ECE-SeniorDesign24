// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multisense_msgs:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef MULTISENSE_MSGS__MSG__DETAIL__DEVICE_INFO__STRUCT_HPP_
#define MULTISENSE_MSGS__MSG__DETAIL__DEVICE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__multisense_msgs__msg__DeviceInfo __attribute__((deprecated))
#else
# define DEPRECATED__multisense_msgs__msg__DeviceInfo __declspec(deprecated)
#endif

namespace multisense_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DeviceInfo_
{
  using Type = DeviceInfo_<ContainerAllocator>;

  explicit DeviceInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_name = "";
      this->build_date = "";
      this->serial_number = "";
      this->device_revision = 0ul;
      this->number_of_pcbs = 0ul;
      this->imager_name = "";
      this->imager_type = 0ul;
      this->imager_width = 0ul;
      this->imager_height = 0ul;
      this->lens_name = "";
      this->lens_type = 0ul;
      this->nominal_baseline = 0.0f;
      this->nominal_focal_length = 0.0f;
      this->nominal_relative_aperture = 0.0f;
      this->lighting_type = 0ul;
      this->number_of_lights = 0ul;
      this->laser_name = "";
      this->laser_type = 0ul;
      this->motor_name = "";
      this->motor_type = 0ul;
      this->motor_gear_reduction = 0.0f;
      this->api_build_date = "";
      this->api_version = 0;
      this->firmware_build_date = "";
      this->firmware_version = 0;
      this->bitstream_version = 0ull;
      this->bitstream_magic = 0ull;
      this->fpga_dna = 0ull;
    }
  }

  explicit DeviceInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : device_name(_alloc),
    build_date(_alloc),
    serial_number(_alloc),
    imager_name(_alloc),
    lens_name(_alloc),
    laser_name(_alloc),
    motor_name(_alloc),
    api_build_date(_alloc),
    firmware_build_date(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_name = "";
      this->build_date = "";
      this->serial_number = "";
      this->device_revision = 0ul;
      this->number_of_pcbs = 0ul;
      this->imager_name = "";
      this->imager_type = 0ul;
      this->imager_width = 0ul;
      this->imager_height = 0ul;
      this->lens_name = "";
      this->lens_type = 0ul;
      this->nominal_baseline = 0.0f;
      this->nominal_focal_length = 0.0f;
      this->nominal_relative_aperture = 0.0f;
      this->lighting_type = 0ul;
      this->number_of_lights = 0ul;
      this->laser_name = "";
      this->laser_type = 0ul;
      this->motor_name = "";
      this->motor_type = 0ul;
      this->motor_gear_reduction = 0.0f;
      this->api_build_date = "";
      this->api_version = 0;
      this->firmware_build_date = "";
      this->firmware_version = 0;
      this->bitstream_version = 0ull;
      this->bitstream_magic = 0ull;
      this->fpga_dna = 0ull;
    }
  }

  // field types and members
  using _device_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _device_name_type device_name;
  using _build_date_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _build_date_type build_date;
  using _serial_number_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _serial_number_type serial_number;
  using _device_revision_type =
    uint32_t;
  _device_revision_type device_revision;
  using _number_of_pcbs_type =
    uint32_t;
  _number_of_pcbs_type number_of_pcbs;
  using _pcb_serial_numbers_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _pcb_serial_numbers_type pcb_serial_numbers;
  using _pcb_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _pcb_names_type pcb_names;
  using _imager_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _imager_name_type imager_name;
  using _imager_type_type =
    uint32_t;
  _imager_type_type imager_type;
  using _imager_width_type =
    uint32_t;
  _imager_width_type imager_width;
  using _imager_height_type =
    uint32_t;
  _imager_height_type imager_height;
  using _lens_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lens_name_type lens_name;
  using _lens_type_type =
    uint32_t;
  _lens_type_type lens_type;
  using _nominal_baseline_type =
    float;
  _nominal_baseline_type nominal_baseline;
  using _nominal_focal_length_type =
    float;
  _nominal_focal_length_type nominal_focal_length;
  using _nominal_relative_aperture_type =
    float;
  _nominal_relative_aperture_type nominal_relative_aperture;
  using _lighting_type_type =
    uint32_t;
  _lighting_type_type lighting_type;
  using _number_of_lights_type =
    uint32_t;
  _number_of_lights_type number_of_lights;
  using _laser_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _laser_name_type laser_name;
  using _laser_type_type =
    uint32_t;
  _laser_type_type laser_type;
  using _motor_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _motor_name_type motor_name;
  using _motor_type_type =
    uint32_t;
  _motor_type_type motor_type;
  using _motor_gear_reduction_type =
    float;
  _motor_gear_reduction_type motor_gear_reduction;
  using _api_build_date_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _api_build_date_type api_build_date;
  using _api_version_type =
    uint16_t;
  _api_version_type api_version;
  using _firmware_build_date_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _firmware_build_date_type firmware_build_date;
  using _firmware_version_type =
    uint16_t;
  _firmware_version_type firmware_version;
  using _bitstream_version_type =
    uint64_t;
  _bitstream_version_type bitstream_version;
  using _bitstream_magic_type =
    uint64_t;
  _bitstream_magic_type bitstream_magic;
  using _fpga_dna_type =
    uint64_t;
  _fpga_dna_type fpga_dna;

  // setters for named parameter idiom
  Type & set__device_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->device_name = _arg;
    return *this;
  }
  Type & set__build_date(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->build_date = _arg;
    return *this;
  }
  Type & set__serial_number(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->serial_number = _arg;
    return *this;
  }
  Type & set__device_revision(
    const uint32_t & _arg)
  {
    this->device_revision = _arg;
    return *this;
  }
  Type & set__number_of_pcbs(
    const uint32_t & _arg)
  {
    this->number_of_pcbs = _arg;
    return *this;
  }
  Type & set__pcb_serial_numbers(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->pcb_serial_numbers = _arg;
    return *this;
  }
  Type & set__pcb_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->pcb_names = _arg;
    return *this;
  }
  Type & set__imager_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->imager_name = _arg;
    return *this;
  }
  Type & set__imager_type(
    const uint32_t & _arg)
  {
    this->imager_type = _arg;
    return *this;
  }
  Type & set__imager_width(
    const uint32_t & _arg)
  {
    this->imager_width = _arg;
    return *this;
  }
  Type & set__imager_height(
    const uint32_t & _arg)
  {
    this->imager_height = _arg;
    return *this;
  }
  Type & set__lens_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lens_name = _arg;
    return *this;
  }
  Type & set__lens_type(
    const uint32_t & _arg)
  {
    this->lens_type = _arg;
    return *this;
  }
  Type & set__nominal_baseline(
    const float & _arg)
  {
    this->nominal_baseline = _arg;
    return *this;
  }
  Type & set__nominal_focal_length(
    const float & _arg)
  {
    this->nominal_focal_length = _arg;
    return *this;
  }
  Type & set__nominal_relative_aperture(
    const float & _arg)
  {
    this->nominal_relative_aperture = _arg;
    return *this;
  }
  Type & set__lighting_type(
    const uint32_t & _arg)
  {
    this->lighting_type = _arg;
    return *this;
  }
  Type & set__number_of_lights(
    const uint32_t & _arg)
  {
    this->number_of_lights = _arg;
    return *this;
  }
  Type & set__laser_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->laser_name = _arg;
    return *this;
  }
  Type & set__laser_type(
    const uint32_t & _arg)
  {
    this->laser_type = _arg;
    return *this;
  }
  Type & set__motor_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->motor_name = _arg;
    return *this;
  }
  Type & set__motor_type(
    const uint32_t & _arg)
  {
    this->motor_type = _arg;
    return *this;
  }
  Type & set__motor_gear_reduction(
    const float & _arg)
  {
    this->motor_gear_reduction = _arg;
    return *this;
  }
  Type & set__api_build_date(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->api_build_date = _arg;
    return *this;
  }
  Type & set__api_version(
    const uint16_t & _arg)
  {
    this->api_version = _arg;
    return *this;
  }
  Type & set__firmware_build_date(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->firmware_build_date = _arg;
    return *this;
  }
  Type & set__firmware_version(
    const uint16_t & _arg)
  {
    this->firmware_version = _arg;
    return *this;
  }
  Type & set__bitstream_version(
    const uint64_t & _arg)
  {
    this->bitstream_version = _arg;
    return *this;
  }
  Type & set__bitstream_magic(
    const uint64_t & _arg)
  {
    this->bitstream_magic = _arg;
    return *this;
  }
  Type & set__fpga_dna(
    const uint64_t & _arg)
  {
    this->fpga_dna = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multisense_msgs::msg::DeviceInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const multisense_msgs::msg::DeviceInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multisense_msgs::msg::DeviceInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multisense_msgs::msg::DeviceInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::DeviceInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::DeviceInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multisense_msgs::msg::DeviceInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multisense_msgs::msg::DeviceInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multisense_msgs::msg::DeviceInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multisense_msgs::msg::DeviceInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multisense_msgs__msg__DeviceInfo
    std::shared_ptr<multisense_msgs::msg::DeviceInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multisense_msgs__msg__DeviceInfo
    std::shared_ptr<multisense_msgs::msg::DeviceInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeviceInfo_ & other) const
  {
    if (this->device_name != other.device_name) {
      return false;
    }
    if (this->build_date != other.build_date) {
      return false;
    }
    if (this->serial_number != other.serial_number) {
      return false;
    }
    if (this->device_revision != other.device_revision) {
      return false;
    }
    if (this->number_of_pcbs != other.number_of_pcbs) {
      return false;
    }
    if (this->pcb_serial_numbers != other.pcb_serial_numbers) {
      return false;
    }
    if (this->pcb_names != other.pcb_names) {
      return false;
    }
    if (this->imager_name != other.imager_name) {
      return false;
    }
    if (this->imager_type != other.imager_type) {
      return false;
    }
    if (this->imager_width != other.imager_width) {
      return false;
    }
    if (this->imager_height != other.imager_height) {
      return false;
    }
    if (this->lens_name != other.lens_name) {
      return false;
    }
    if (this->lens_type != other.lens_type) {
      return false;
    }
    if (this->nominal_baseline != other.nominal_baseline) {
      return false;
    }
    if (this->nominal_focal_length != other.nominal_focal_length) {
      return false;
    }
    if (this->nominal_relative_aperture != other.nominal_relative_aperture) {
      return false;
    }
    if (this->lighting_type != other.lighting_type) {
      return false;
    }
    if (this->number_of_lights != other.number_of_lights) {
      return false;
    }
    if (this->laser_name != other.laser_name) {
      return false;
    }
    if (this->laser_type != other.laser_type) {
      return false;
    }
    if (this->motor_name != other.motor_name) {
      return false;
    }
    if (this->motor_type != other.motor_type) {
      return false;
    }
    if (this->motor_gear_reduction != other.motor_gear_reduction) {
      return false;
    }
    if (this->api_build_date != other.api_build_date) {
      return false;
    }
    if (this->api_version != other.api_version) {
      return false;
    }
    if (this->firmware_build_date != other.firmware_build_date) {
      return false;
    }
    if (this->firmware_version != other.firmware_version) {
      return false;
    }
    if (this->bitstream_version != other.bitstream_version) {
      return false;
    }
    if (this->bitstream_magic != other.bitstream_magic) {
      return false;
    }
    if (this->fpga_dna != other.fpga_dna) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeviceInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeviceInfo_

// alias to use template instance with default allocator
using DeviceInfo =
  multisense_msgs::msg::DeviceInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace multisense_msgs

#endif  // MULTISENSE_MSGS__MSG__DETAIL__DEVICE_INFO__STRUCT_HPP_
