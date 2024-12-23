# generated from rosidl_generator_py/resource/_idl.py.em
# with input from multisense_msgs:msg/RawLidarData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'distance'
# Member 'intensity'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RawLidarData(type):
    """Metaclass of message 'RawLidarData'."""

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
                'multisense_msgs.msg.RawLidarData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__raw_lidar_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__raw_lidar_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__raw_lidar_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__raw_lidar_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__raw_lidar_data

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


class RawLidarData(metaclass=Metaclass_RawLidarData):
    """Message class 'RawLidarData'."""

    __slots__ = [
        '_scan_count',
        '_time_start',
        '_time_end',
        '_angle_start',
        '_angle_end',
        '_distance',
        '_intensity',
    ]

    _fields_and_field_types = {
        'scan_count': 'uint32',
        'time_start': 'builtin_interfaces/Time',
        'time_end': 'builtin_interfaces/Time',
        'angle_start': 'int32',
        'angle_end': 'int32',
        'distance': 'sequence<uint32>',
        'intensity': 'sequence<uint32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.scan_count = kwargs.get('scan_count', int())
        from builtin_interfaces.msg import Time
        self.time_start = kwargs.get('time_start', Time())
        from builtin_interfaces.msg import Time
        self.time_end = kwargs.get('time_end', Time())
        self.angle_start = kwargs.get('angle_start', int())
        self.angle_end = kwargs.get('angle_end', int())
        self.distance = array.array('I', kwargs.get('distance', []))
        self.intensity = array.array('I', kwargs.get('intensity', []))

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
        if self.scan_count != other.scan_count:
            return False
        if self.time_start != other.time_start:
            return False
        if self.time_end != other.time_end:
            return False
        if self.angle_start != other.angle_start:
            return False
        if self.angle_end != other.angle_end:
            return False
        if self.distance != other.distance:
            return False
        if self.intensity != other.intensity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def scan_count(self):
        """Message field 'scan_count'."""
        return self._scan_count

    @scan_count.setter
    def scan_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scan_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'scan_count' field must be an unsigned integer in [0, 4294967295]"
        self._scan_count = value

    @builtins.property
    def time_start(self):
        """Message field 'time_start'."""
        return self._time_start

    @time_start.setter
    def time_start(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'time_start' field must be a sub message of type 'Time'"
        self._time_start = value

    @builtins.property
    def time_end(self):
        """Message field 'time_end'."""
        return self._time_end

    @time_end.setter
    def time_end(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'time_end' field must be a sub message of type 'Time'"
        self._time_end = value

    @builtins.property
    def angle_start(self):
        """Message field 'angle_start'."""
        return self._angle_start

    @angle_start.setter
    def angle_start(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'angle_start' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'angle_start' field must be an integer in [-2147483648, 2147483647]"
        self._angle_start = value

    @builtins.property
    def angle_end(self):
        """Message field 'angle_end'."""
        return self._angle_end

    @angle_end.setter
    def angle_end(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'angle_end' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'angle_end' field must be an integer in [-2147483648, 2147483647]"
        self._angle_end = value

    @builtins.property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'distance' array.array() must have the type code of 'I'"
            self._distance = value
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
                "The 'distance' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._distance = array.array('I', value)

    @builtins.property
    def intensity(self):
        """Message field 'intensity'."""
        return self._intensity

    @intensity.setter
    def intensity(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'intensity' array.array() must have the type code of 'I'"
            self._intensity = value
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
                "The 'intensity' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._intensity = array.array('I', value)
