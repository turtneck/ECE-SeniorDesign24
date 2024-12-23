# generated from rosidl_generator_py/resource/_idl.py.em
# with input from multisense_msgs:msg/PtpStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'gm_id'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PtpStatus(type):
    """Metaclass of message 'PtpStatus'."""

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
                'multisense_msgs.msg.PtpStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ptp_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ptp_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ptp_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ptp_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ptp_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PtpStatus(metaclass=Metaclass_PtpStatus):
    """Message class 'PtpStatus'."""

    __slots__ = [
        '_gm_present',
        '_gm_id',
        '_gm_offset',
        '_path_delay',
        '_steps_removed',
    ]

    _fields_and_field_types = {
        'gm_present': 'boolean',
        'gm_id': 'uint8[8]',
        'gm_offset': 'int64',
        'path_delay': 'int64',
        'steps_removed': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 8),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.gm_present = kwargs.get('gm_present', bool())
        if 'gm_id' not in kwargs:
            self.gm_id = numpy.zeros(8, dtype=numpy.uint8)
        else:
            self.gm_id = numpy.array(kwargs.get('gm_id'), dtype=numpy.uint8)
            assert self.gm_id.shape == (8, )
        self.gm_offset = kwargs.get('gm_offset', int())
        self.path_delay = kwargs.get('path_delay', int())
        self.steps_removed = kwargs.get('steps_removed', int())

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
        if self.gm_present != other.gm_present:
            return False
        if all(self.gm_id != other.gm_id):
            return False
        if self.gm_offset != other.gm_offset:
            return False
        if self.path_delay != other.path_delay:
            return False
        if self.steps_removed != other.steps_removed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def gm_present(self):
        """Message field 'gm_present'."""
        return self._gm_present

    @gm_present.setter
    def gm_present(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gm_present' field must be of type 'bool'"
        self._gm_present = value

    @builtins.property
    def gm_id(self):
        """Message field 'gm_id'."""
        return self._gm_id

    @gm_id.setter
    def gm_id(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'gm_id' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 8, \
                "The 'gm_id' numpy.ndarray() must have a size of 8"
            self._gm_id = value
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
                 len(value) == 8 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'gm_id' field must be a set or sequence with length 8 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._gm_id = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def gm_offset(self):
        """Message field 'gm_offset'."""
        return self._gm_offset

    @gm_offset.setter
    def gm_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gm_offset' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'gm_offset' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._gm_offset = value

    @builtins.property
    def path_delay(self):
        """Message field 'path_delay'."""
        return self._path_delay

    @path_delay.setter
    def path_delay(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'path_delay' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'path_delay' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._path_delay = value

    @builtins.property
    def steps_removed(self):
        """Message field 'steps_removed'."""
        return self._steps_removed

    @steps_removed.setter
    def steps_removed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steps_removed' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'steps_removed' field must be an integer in [-32768, 32767]"
        self._steps_removed = value
