# generated from rosidl_generator_py/resource/_idl.py.em
# with input from multisense_msgs:msg/RawCamData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'gray_scale_image'
# Member 'disparity_image'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RawCamData(type):
    """Metaclass of message 'RawCamData'."""

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
                'multisense_msgs.msg.RawCamData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__raw_cam_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__raw_cam_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__raw_cam_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__raw_cam_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__raw_cam_data

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RawCamData(metaclass=Metaclass_RawCamData):
    """Message class 'RawCamData'."""

    __slots__ = [
        '_frames_per_second',
        '_gain',
        '_exposure_time',
        '_frame_count',
        '_time_stamp',
        '_angle',
        '_width',
        '_height',
        '_gray_scale_image',
        '_disparity_image',
    ]

    _fields_and_field_types = {
        'frames_per_second': 'float',
        'gain': 'float',
        'exposure_time': 'uint32',
        'frame_count': 'uint32',
        'time_stamp': 'builtin_interfaces/Time',
        'angle': 'uint32',
        'width': 'uint16',
        'height': 'uint16',
        'gray_scale_image': 'sequence<uint8>',
        'disparity_image': 'sequence<uint16>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.frames_per_second = kwargs.get('frames_per_second', float())
        self.gain = kwargs.get('gain', float())
        self.exposure_time = kwargs.get('exposure_time', int())
        self.frame_count = kwargs.get('frame_count', int())
        from builtin_interfaces.msg import Time
        self.time_stamp = kwargs.get('time_stamp', Time())
        self.angle = kwargs.get('angle', int())
        self.width = kwargs.get('width', int())
        self.height = kwargs.get('height', int())
        self.gray_scale_image = array.array('B', kwargs.get('gray_scale_image', []))
        self.disparity_image = array.array('H', kwargs.get('disparity_image', []))

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
        if self.frames_per_second != other.frames_per_second:
            return False
        if self.gain != other.gain:
            return False
        if self.exposure_time != other.exposure_time:
            return False
        if self.frame_count != other.frame_count:
            return False
        if self.time_stamp != other.time_stamp:
            return False
        if self.angle != other.angle:
            return False
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.gray_scale_image != other.gray_scale_image:
            return False
        if self.disparity_image != other.disparity_image:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def frames_per_second(self):
        """Message field 'frames_per_second'."""
        return self._frames_per_second

    @frames_per_second.setter
    def frames_per_second(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'frames_per_second' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'frames_per_second' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._frames_per_second = value

    @builtins.property
    def gain(self):
        """Message field 'gain'."""
        return self._gain

    @gain.setter
    def gain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gain' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gain' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gain = value

    @builtins.property
    def exposure_time(self):
        """Message field 'exposure_time'."""
        return self._exposure_time

    @exposure_time.setter
    def exposure_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'exposure_time' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'exposure_time' field must be an unsigned integer in [0, 4294967295]"
        self._exposure_time = value

    @builtins.property
    def frame_count(self):
        """Message field 'frame_count'."""
        return self._frame_count

    @frame_count.setter
    def frame_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frame_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'frame_count' field must be an unsigned integer in [0, 4294967295]"
        self._frame_count = value

    @builtins.property
    def time_stamp(self):
        """Message field 'time_stamp'."""
        return self._time_stamp

    @time_stamp.setter
    def time_stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'time_stamp' field must be a sub message of type 'Time'"
        self._time_stamp = value

    @builtins.property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'angle' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'angle' field must be an unsigned integer in [0, 4294967295]"
        self._angle = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'width' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'width' field must be an unsigned integer in [0, 65535]"
        self._width = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'height' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'height' field must be an unsigned integer in [0, 65535]"
        self._height = value

    @builtins.property
    def gray_scale_image(self):
        """Message field 'gray_scale_image'."""
        return self._gray_scale_image

    @gray_scale_image.setter
    def gray_scale_image(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'gray_scale_image' array.array() must have the type code of 'B'"
            self._gray_scale_image = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'gray_scale_image' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._gray_scale_image = array.array('B', value)

    @builtins.property
    def disparity_image(self):
        """Message field 'disparity_image'."""
        return self._disparity_image

    @disparity_image.setter
    def disparity_image(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'disparity_image' array.array() must have the type code of 'H'"
            self._disparity_image = value
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
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'disparity_image' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._disparity_image = array.array('H', value)
