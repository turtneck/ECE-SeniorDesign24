# generated from rosidl_generator_py/resource/_idl.py.em
# with input from multisense_msgs:msg/DeviceInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'pcb_serial_numbers'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DeviceInfo(type):
    """Metaclass of message 'DeviceInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('multisense_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'multisense_msgs.msg.DeviceInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__device_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__device_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__device_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__device_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__device_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DeviceInfo(metaclass=Metaclass_DeviceInfo):
    """Message class 'DeviceInfo'."""

    __slots__ = [
        '_device_name',
        '_build_date',
        '_serial_number',
        '_device_revision',
        '_number_of_pcbs',
        '_pcb_serial_numbers',
        '_pcb_names',
        '_imager_name',
        '_imager_type',
        '_imager_width',
        '_imager_height',
        '_lens_name',
        '_lens_type',
        '_nominal_baseline',
        '_nominal_focal_length',
        '_nominal_relative_aperture',
        '_lighting_type',
        '_number_of_lights',
        '_laser_name',
        '_laser_type',
        '_motor_name',
        '_motor_type',
        '_motor_gear_reduction',
        '_api_build_date',
        '_api_version',
        '_firmware_build_date',
        '_firmware_version',
        '_bitstream_version',
        '_bitstream_magic',
        '_fpga_dna',
    ]

    _fields_and_field_types = {
        'device_name': 'string',
        'build_date': 'string',
        'serial_number': 'string',
        'device_revision': 'uint32',
        'number_of_pcbs': 'uint32',
        'pcb_serial_numbers': 'sequence<uint32>',
        'pcb_names': 'sequence<string>',
        'imager_name': 'string',
        'imager_type': 'uint32',
        'imager_width': 'uint32',
        'imager_height': 'uint32',
        'lens_name': 'string',
        'lens_type': 'uint32',
        'nominal_baseline': 'float',
        'nominal_focal_length': 'float',
        'nominal_relative_aperture': 'float',
        'lighting_type': 'uint32',
        'number_of_lights': 'uint32',
        'laser_name': 'string',
        'laser_type': 'uint32',
        'motor_name': 'string',
        'motor_type': 'uint32',
        'motor_gear_reduction': 'float',
        'api_build_date': 'string',
        'api_version': 'uint16',
        'firmware_build_date': 'string',
        'firmware_version': 'uint16',
        'bitstream_version': 'uint64',
        'bitstream_magic': 'uint64',
        'fpga_dna': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.device_name = kwargs.get('device_name', str())
        self.build_date = kwargs.get('build_date', str())
        self.serial_number = kwargs.get('serial_number', str())
        self.device_revision = kwargs.get('device_revision', int())
        self.number_of_pcbs = kwargs.get('number_of_pcbs', int())
        self.pcb_serial_numbers = array.array('I', kwargs.get('pcb_serial_numbers', []))
        self.pcb_names = kwargs.get('pcb_names', [])
        self.imager_name = kwargs.get('imager_name', str())
        self.imager_type = kwargs.get('imager_type', int())
        self.imager_width = kwargs.get('imager_width', int())
        self.imager_height = kwargs.get('imager_height', int())
        self.lens_name = kwargs.get('lens_name', str())
        self.lens_type = kwargs.get('lens_type', int())
        self.nominal_baseline = kwargs.get('nominal_baseline', float())
        self.nominal_focal_length = kwargs.get('nominal_focal_length', float())
        self.nominal_relative_aperture = kwargs.get('nominal_relative_aperture', float())
        self.lighting_type = kwargs.get('lighting_type', int())
        self.number_of_lights = kwargs.get('number_of_lights', int())
        self.laser_name = kwargs.get('laser_name', str())
        self.laser_type = kwargs.get('laser_type', int())
        self.motor_name = kwargs.get('motor_name', str())
        self.motor_type = kwargs.get('motor_type', int())
        self.motor_gear_reduction = kwargs.get('motor_gear_reduction', float())
        self.api_build_date = kwargs.get('api_build_date', str())
        self.api_version = kwargs.get('api_version', int())
        self.firmware_build_date = kwargs.get('firmware_build_date', str())
        self.firmware_version = kwargs.get('firmware_version', int())
        self.bitstream_version = kwargs.get('bitstream_version', int())
        self.bitstream_magic = kwargs.get('bitstream_magic', int())
        self.fpga_dna = kwargs.get('fpga_dna', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.device_name != other.device_name:
            return False
        if self.build_date != other.build_date:
            return False
        if self.serial_number != other.serial_number:
            return False
        if self.device_revision != other.device_revision:
            return False
        if self.number_of_pcbs != other.number_of_pcbs:
            return False
        if self.pcb_serial_numbers != other.pcb_serial_numbers:
            return False
        if self.pcb_names != other.pcb_names:
            return False
        if self.imager_name != other.imager_name:
            return False
        if self.imager_type != other.imager_type:
            return False
        if self.imager_width != other.imager_width:
            return False
        if self.imager_height != other.imager_height:
            return False
        if self.lens_name != other.lens_name:
            return False
        if self.lens_type != other.lens_type:
            return False
        if self.nominal_baseline != other.nominal_baseline:
            return False
        if self.nominal_focal_length != other.nominal_focal_length:
            return False
        if self.nominal_relative_aperture != other.nominal_relative_aperture:
            return False
        if self.lighting_type != other.lighting_type:
            return False
        if self.number_of_lights != other.number_of_lights:
            return False
        if self.laser_name != other.laser_name:
            return False
        if self.laser_type != other.laser_type:
            return False
        if self.motor_name != other.motor_name:
            return False
        if self.motor_type != other.motor_type:
            return False
        if self.motor_gear_reduction != other.motor_gear_reduction:
            return False
        if self.api_build_date != other.api_build_date:
            return False
        if self.api_version != other.api_version:
            return False
        if self.firmware_build_date != other.firmware_build_date:
            return False
        if self.firmware_version != other.firmware_version:
            return False
        if self.bitstream_version != other.bitstream_version:
            return False
        if self.bitstream_magic != other.bitstream_magic:
            return False
        if self.fpga_dna != other.fpga_dna:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def device_name(self):
        """Message field 'device_name'."""
        return self._device_name

    @device_name.setter
    def device_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'device_name' field must be of type 'str'"
        self._device_name = value

    @builtins.property
    def build_date(self):
        """Message field 'build_date'."""
        return self._build_date

    @build_date.setter
    def build_date(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'build_date' field must be of type 'str'"
        self._build_date = value

    @builtins.property
    def serial_number(self):
        """Message field 'serial_number'."""
        return self._serial_number

    @serial_number.setter
    def serial_number(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'serial_number' field must be of type 'str'"
        self._serial_number = value

    @builtins.property
    def device_revision(self):
        """Message field 'device_revision'."""
        return self._device_revision

    @device_revision.setter
    def device_revision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_revision' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'device_revision' field must be an unsigned integer in [0, 4294967295]"
        self._device_revision = value

    @builtins.property
    def number_of_pcbs(self):
        """Message field 'number_of_pcbs'."""
        return self._number_of_pcbs

    @number_of_pcbs.setter
    def number_of_pcbs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_pcbs' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'number_of_pcbs' field must be an unsigned integer in [0, 4294967295]"
        self._number_of_pcbs = value

    @builtins.property
    def pcb_serial_numbers(self):
        """Message field 'pcb_serial_numbers'."""
        return self._pcb_serial_numbers

    @pcb_serial_numbers.setter
    def pcb_serial_numbers(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'pcb_serial_numbers' array.array() must have the type code of 'I'"
            self._pcb_serial_numbers = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'pcb_serial_numbers' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._pcb_serial_numbers = array.array('I', value)

    @builtins.property
    def pcb_names(self):
        """Message field 'pcb_names'."""
        return self._pcb_names

    @pcb_names.setter
    def pcb_names(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'pcb_names' field must be a set or sequence and each value of type 'str'"
        self._pcb_names = value

    @builtins.property
    def imager_name(self):
        """Message field 'imager_name'."""
        return self._imager_name

    @imager_name.setter
    def imager_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'imager_name' field must be of type 'str'"
        self._imager_name = value

    @builtins.property
    def imager_type(self):
        """Message field 'imager_type'."""
        return self._imager_type

    @imager_type.setter
    def imager_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'imager_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'imager_type' field must be an unsigned integer in [0, 4294967295]"
        self._imager_type = value

    @builtins.property
    def imager_width(self):
        """Message field 'imager_width'."""
        return self._imager_width

    @imager_width.setter
    def imager_width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'imager_width' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'imager_width' field must be an unsigned integer in [0, 4294967295]"
        self._imager_width = value

    @builtins.property
    def imager_height(self):
        """Message field 'imager_height'."""
        return self._imager_height

    @imager_height.setter
    def imager_height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'imager_height' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'imager_height' field must be an unsigned integer in [0, 4294967295]"
        self._imager_height = value

    @builtins.property
    def lens_name(self):
        """Message field 'lens_name'."""
        return self._lens_name

    @lens_name.setter
    def lens_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lens_name' field must be of type 'str'"
        self._lens_name = value

    @builtins.property
    def lens_type(self):
        """Message field 'lens_type'."""
        return self._lens_type

    @lens_type.setter
    def lens_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lens_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lens_type' field must be an unsigned integer in [0, 4294967295]"
        self._lens_type = value

    @builtins.property
    def nominal_baseline(self):
        """Message field 'nominal_baseline'."""
        return self._nominal_baseline

    @nominal_baseline.setter
    def nominal_baseline(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'nominal_baseline' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'nominal_baseline' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._nominal_baseline = value

    @builtins.property
    def nominal_focal_length(self):
        """Message field 'nominal_focal_length'."""
        return self._nominal_focal_length

    @nominal_focal_length.setter
    def nominal_focal_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'nominal_focal_length' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'nominal_focal_length' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._nominal_focal_length = value

    @builtins.property
    def nominal_relative_aperture(self):
        """Message field 'nominal_relative_aperture'."""
        return self._nominal_relative_aperture

    @nominal_relative_aperture.setter
    def nominal_relative_aperture(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'nominal_relative_aperture' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'nominal_relative_aperture' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._nominal_relative_aperture = value

    @builtins.property
    def lighting_type(self):
        """Message field 'lighting_type'."""
        return self._lighting_type

    @lighting_type.setter
    def lighting_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lighting_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lighting_type' field must be an unsigned integer in [0, 4294967295]"
        self._lighting_type = value

    @builtins.property
    def number_of_lights(self):
        """Message field 'number_of_lights'."""
        return self._number_of_lights

    @number_of_lights.setter
    def number_of_lights(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_lights' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'number_of_lights' field must be an unsigned integer in [0, 4294967295]"
        self._number_of_lights = value

    @builtins.property
    def laser_name(self):
        """Message field 'laser_name'."""
        return self._laser_name

    @laser_name.setter
    def laser_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'laser_name' field must be of type 'str'"
        self._laser_name = value

    @builtins.property
    def laser_type(self):
        """Message field 'laser_type'."""
        return self._laser_type

    @laser_type.setter
    def laser_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'laser_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'laser_type' field must be an unsigned integer in [0, 4294967295]"
        self._laser_type = value

    @builtins.property
    def motor_name(self):
        """Message field 'motor_name'."""
        return self._motor_name

    @motor_name.setter
    def motor_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'motor_name' field must be of type 'str'"
        self._motor_name = value

    @builtins.property
    def motor_type(self):
        """Message field 'motor_type'."""
        return self._motor_type

    @motor_type.setter
    def motor_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'motor_type' field must be an unsigned integer in [0, 4294967295]"
        self._motor_type = value

    @builtins.property
    def motor_gear_reduction(self):
        """Message field 'motor_gear_reduction'."""
        return self._motor_gear_reduction

    @motor_gear_reduction.setter
    def motor_gear_reduction(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_gear_reduction' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor_gear_reduction' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor_gear_reduction = value

    @builtins.property
    def api_build_date(self):
        """Message field 'api_build_date'."""
        return self._api_build_date

    @api_build_date.setter
    def api_build_date(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'api_build_date' field must be of type 'str'"
        self._api_build_date = value

    @builtins.property
    def api_version(self):
        """Message field 'api_version'."""
        return self._api_version

    @api_version.setter
    def api_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'api_version' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'api_version' field must be an unsigned integer in [0, 65535]"
        self._api_version = value

    @builtins.property
    def firmware_build_date(self):
        """Message field 'firmware_build_date'."""
        return self._firmware_build_date

    @firmware_build_date.setter
    def firmware_build_date(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'firmware_build_date' field must be of type 'str'"
        self._firmware_build_date = value

    @builtins.property
    def firmware_version(self):
        """Message field 'firmware_version'."""
        return self._firmware_version

    @firmware_version.setter
    def firmware_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'firmware_version' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'firmware_version' field must be an unsigned integer in [0, 65535]"
        self._firmware_version = value

    @builtins.property
    def bitstream_version(self):
        """Message field 'bitstream_version'."""
        return self._bitstream_version

    @bitstream_version.setter
    def bitstream_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bitstream_version' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'bitstream_version' field must be an unsigned integer in [0, 18446744073709551615]"
        self._bitstream_version = value

    @builtins.property
    def bitstream_magic(self):
        """Message field 'bitstream_magic'."""
        return self._bitstream_magic

    @bitstream_magic.setter
    def bitstream_magic(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bitstream_magic' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'bitstream_magic' field must be an unsigned integer in [0, 18446744073709551615]"
        self._bitstream_magic = value

    @builtins.property
    def fpga_dna(self):
        """Message field 'fpga_dna'."""
        return self._fpga_dna

    @fpga_dna.setter
    def fpga_dna(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fpga_dna' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'fpga_dna' field must be an unsigned integer in [0, 18446744073709551615]"
        self._fpga_dna = value
