# generated from rosidl_generator_py/resource/_idl.py.em
# with input from multisense_msgs:msg/RawCamCal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'left_m'
# Member 'left_d'
# Member 'left_r'
# Member 'left_p'
# Member 'right_m'
# Member 'right_d'
# Member 'right_r'
# Member 'right_p'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RawCamCal(type):
    """Metaclass of message 'RawCamCal'."""

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
                'multisense_msgs.msg.RawCamCal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__raw_cam_cal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__raw_cam_cal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__raw_cam_cal
            cls._TYPE_SUPPORT = module.type_support_msg__msg__raw_cam_cal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__raw_cam_cal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RawCamCal(metaclass=Metaclass_RawCamCal):
    """Message class 'RawCamCal'."""

    __slots__ = [
        '_left_m',
        '_left_d',
        '_left_r',
        '_left_p',
        '_right_m',
        '_right_d',
        '_right_r',
        '_right_p',
    ]

    _fields_and_field_types = {
        'left_m': 'float[9]',
        'left_d': 'float[8]',
        'left_r': 'float[9]',
        'left_p': 'float[12]',
        'right_m': 'float[9]',
        'right_d': 'float[8]',
        'right_r': 'float[9]',
        'right_p': 'float[12]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 9),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 8),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 9),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 9),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 8),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 9),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'left_m' not in kwargs:
            self.left_m = numpy.zeros(9, dtype=numpy.float32)
        else:
            self.left_m = numpy.array(kwargs.get('left_m'), dtype=numpy.float32)
            assert self.left_m.shape == (9, )
        if 'left_d' not in kwargs:
            self.left_d = numpy.zeros(8, dtype=numpy.float32)
        else:
            self.left_d = numpy.array(kwargs.get('left_d'), dtype=numpy.float32)
            assert self.left_d.shape == (8, )
        if 'left_r' not in kwargs:
            self.left_r = numpy.zeros(9, dtype=numpy.float32)
        else:
            self.left_r = numpy.array(kwargs.get('left_r'), dtype=numpy.float32)
            assert self.left_r.shape == (9, )
        if 'left_p' not in kwargs:
            self.left_p = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.left_p = numpy.array(kwargs.get('left_p'), dtype=numpy.float32)
            assert self.left_p.shape == (12, )
        if 'right_m' not in kwargs:
            self.right_m = numpy.zeros(9, dtype=numpy.float32)
        else:
            self.right_m = numpy.array(kwargs.get('right_m'), dtype=numpy.float32)
            assert self.right_m.shape == (9, )
        if 'right_d' not in kwargs:
            self.right_d = numpy.zeros(8, dtype=numpy.float32)
        else:
            self.right_d = numpy.array(kwargs.get('right_d'), dtype=numpy.float32)
            assert self.right_d.shape == (8, )
        if 'right_r' not in kwargs:
            self.right_r = numpy.zeros(9, dtype=numpy.float32)
        else:
            self.right_r = numpy.array(kwargs.get('right_r'), dtype=numpy.float32)
            assert self.right_r.shape == (9, )
        if 'right_p' not in kwargs:
            self.right_p = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.right_p = numpy.array(kwargs.get('right_p'), dtype=numpy.float32)
            assert self.right_p.shape == (12, )

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
        if all(self.left_m != other.left_m):
            return False
        if all(self.left_d != other.left_d):
            return False
        if all(self.left_r != other.left_r):
            return False
        if all(self.left_p != other.left_p):
            return False
        if all(self.right_m != other.right_m):
            return False
        if all(self.right_d != other.right_d):
            return False
        if all(self.right_r != other.right_r):
            return False
        if all(self.right_p != other.right_p):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_m(self):
        """Message field 'left_m'."""
        return self._left_m

    @left_m.setter
    def left_m(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'left_m' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 9, \
                "The 'left_m' numpy.ndarray() must have a size of 9"
            self._left_m = value
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
                 len(value) == 9 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'left_m' field must be a set or sequence with length 9 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._left_m = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def left_d(self):
        """Message field 'left_d'."""
        return self._left_d

    @left_d.setter
    def left_d(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'left_d' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 8, \
                "The 'left_d' numpy.ndarray() must have a size of 8"
            self._left_d = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'left_d' field must be a set or sequence with length 8 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._left_d = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def left_r(self):
        """Message field 'left_r'."""
        return self._left_r

    @left_r.setter
    def left_r(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'left_r' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 9, \
                "The 'left_r' numpy.ndarray() must have a size of 9"
            self._left_r = value
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
                 len(value) == 9 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'left_r' field must be a set or sequence with length 9 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._left_r = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def left_p(self):
        """Message field 'left_p'."""
        return self._left_p

    @left_p.setter
    def left_p(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'left_p' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'left_p' numpy.ndarray() must have a size of 12"
            self._left_p = value
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
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'left_p' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._left_p = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def right_m(self):
        """Message field 'right_m'."""
        return self._right_m

    @right_m.setter
    def right_m(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'right_m' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 9, \
                "The 'right_m' numpy.ndarray() must have a size of 9"
            self._right_m = value
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
                 len(value) == 9 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'right_m' field must be a set or sequence with length 9 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._right_m = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def right_d(self):
        """Message field 'right_d'."""
        return self._right_d

    @right_d.setter
    def right_d(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'right_d' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 8, \
                "The 'right_d' numpy.ndarray() must have a size of 8"
            self._right_d = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'right_d' field must be a set or sequence with length 8 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._right_d = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def right_r(self):
        """Message field 'right_r'."""
        return self._right_r

    @right_r.setter
    def right_r(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'right_r' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 9, \
                "The 'right_r' numpy.ndarray() must have a size of 9"
            self._right_r = value
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
                 len(value) == 9 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'right_r' field must be a set or sequence with length 9 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._right_r = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def right_p(self):
        """Message field 'right_p'."""
        return self._right_p

    @right_p.setter
    def right_p(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'right_p' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 12, \
                "The 'right_p' numpy.ndarray() must have a size of 12"
            self._right_p = value
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
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'right_p' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._right_p = numpy.array(value, dtype=numpy.float32)
