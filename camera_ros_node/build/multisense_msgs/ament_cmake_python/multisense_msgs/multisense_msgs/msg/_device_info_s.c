// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from multisense_msgs:msg/DeviceInfo.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "multisense_msgs/msg/detail/device_info__struct.h"
#include "multisense_msgs/msg/detail/device_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool multisense_msgs__msg__device_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("multisense_msgs.msg._device_info.DeviceInfo", full_classname_dest, 43) == 0);
  }
  multisense_msgs__msg__DeviceInfo * ros_message = _ros_message;
  {  // device_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->device_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // build_date
    PyObject * field = PyObject_GetAttrString(_pymsg, "build_date");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->build_date, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // serial_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "serial_number");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->serial_number, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // device_revision
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_revision");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->device_revision = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // number_of_pcbs
    PyObject * field = PyObject_GetAttrString(_pymsg, "number_of_pcbs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->number_of_pcbs = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pcb_serial_numbers
    PyObject * field = PyObject_GetAttrString(_pymsg, "pcb_serial_numbers");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(uint32_t);
      if (!rosidl_runtime_c__uint32__Sequence__init(&(ros_message->pcb_serial_numbers), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint32_t * dest = ros_message->pcb_serial_numbers.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'pcb_serial_numbers'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__uint32__Sequence__init(&(ros_message->pcb_serial_numbers), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint32_t * dest = ros_message->pcb_serial_numbers.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint32_t tmp = PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // pcb_names
    PyObject * field = PyObject_GetAttrString(_pymsg, "pcb_names");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'pcb_names'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->pcb_names), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->pcb_names.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // imager_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "imager_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->imager_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // imager_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "imager_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->imager_type = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // imager_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "imager_width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->imager_width = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // imager_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "imager_height");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->imager_height = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lens_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "lens_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->lens_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // lens_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "lens_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lens_type = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nominal_baseline
    PyObject * field = PyObject_GetAttrString(_pymsg, "nominal_baseline");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->nominal_baseline = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // nominal_focal_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "nominal_focal_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->nominal_focal_length = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // nominal_relative_aperture
    PyObject * field = PyObject_GetAttrString(_pymsg, "nominal_relative_aperture");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->nominal_relative_aperture = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lighting_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "lighting_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lighting_type = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // number_of_lights
    PyObject * field = PyObject_GetAttrString(_pymsg, "number_of_lights");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->number_of_lights = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // laser_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "laser_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->laser_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // laser_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "laser_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->laser_type = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motor_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->motor_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // motor_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_type = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motor_gear_reduction
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_gear_reduction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->motor_gear_reduction = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // api_build_date
    PyObject * field = PyObject_GetAttrString(_pymsg, "api_build_date");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->api_build_date, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // api_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "api_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->api_version = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // firmware_build_date
    PyObject * field = PyObject_GetAttrString(_pymsg, "firmware_build_date");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->firmware_build_date, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // firmware_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "firmware_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->firmware_version = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bitstream_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "bitstream_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bitstream_version = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // bitstream_magic
    PyObject * field = PyObject_GetAttrString(_pymsg, "bitstream_magic");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bitstream_magic = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // fpga_dna
    PyObject * field = PyObject_GetAttrString(_pymsg, "fpga_dna");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fpga_dna = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * multisense_msgs__msg__device_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DeviceInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("multisense_msgs.msg._device_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DeviceInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  multisense_msgs__msg__DeviceInfo * ros_message = (multisense_msgs__msg__DeviceInfo *)raw_ros_message;
  {  // device_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->device_name.data,
      strlen(ros_message->device_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // build_date
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->build_date.data,
      strlen(ros_message->build_date.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "build_date", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // serial_number
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->serial_number.data,
      strlen(ros_message->serial_number.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "serial_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // device_revision
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->device_revision);
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_revision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // number_of_pcbs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->number_of_pcbs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "number_of_pcbs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pcb_serial_numbers
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "pcb_serial_numbers");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(uint32_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->pcb_serial_numbers.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint32_t * src = &(ros_message->pcb_serial_numbers.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->pcb_serial_numbers.size * sizeof(uint32_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // pcb_names
    PyObject * field = NULL;
    size_t size = ros_message->pcb_names.size;
    rosidl_runtime_c__String * src = ros_message->pcb_names.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "pcb_names", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imager_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->imager_name.data,
      strlen(ros_message->imager_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "imager_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imager_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->imager_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imager_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imager_width
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->imager_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imager_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imager_height
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->imager_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imager_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lens_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->lens_name.data,
      strlen(ros_message->lens_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lens_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lens_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lens_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lens_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nominal_baseline
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->nominal_baseline);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nominal_baseline", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nominal_focal_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->nominal_focal_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nominal_focal_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nominal_relative_aperture
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->nominal_relative_aperture);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nominal_relative_aperture", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lighting_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lighting_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lighting_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // number_of_lights
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->number_of_lights);
    {
      int rc = PyObject_SetAttrString(_pymessage, "number_of_lights", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // laser_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->laser_name.data,
      strlen(ros_message->laser_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "laser_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // laser_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->laser_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "laser_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->motor_name.data,
      strlen(ros_message->motor_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motor_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_gear_reduction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->motor_gear_reduction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_gear_reduction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // api_build_date
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->api_build_date.data,
      strlen(ros_message->api_build_date.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "api_build_date", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // api_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->api_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "api_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // firmware_build_date
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->firmware_build_date.data,
      strlen(ros_message->firmware_build_date.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "firmware_build_date", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // firmware_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->firmware_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "firmware_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bitstream_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->bitstream_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bitstream_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bitstream_magic
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->bitstream_magic);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bitstream_magic", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fpga_dna
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->fpga_dna);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fpga_dna", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
