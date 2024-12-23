# generated from rosidl_generator_py/resource/_idl.py.em
# with input from multisense_msgs:msg/RawCamConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RawCamConfig(type):
    """Metaclass of message 'RawCamConfig'."""

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
                'multisense_msgs.msg.RawCamConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__raw_cam_config
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__raw_cam_config
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__raw_cam_config
            cls._TYPE_SUPPORT = module.type_support_msg__msg__raw_cam_config
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__raw_cam_config

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RawCamConfig(metaclass=Metaclass_RawCamConfig):
    """Message class 'RawCamConfig'."""

    __slots__ = [
        '_width',
        '_height',
        '_frames_per_second',
        '_gain',
        '_exposure_time',
        '_fx',
        '_fy',
        '_cx',
        '_cy',
        '_tx',
        '_ty',
        '_tz',
        '_roll',
        '_pitch',
        '_yaw',
    ]

    _fields_and_field_types = {
        'width': 'uint16',
        'height': 'uint16',
        'frames_per_second': 'float',
        'gain': 'float',
        'exposure_time': 'uint32',
        'fx': 'float',
        'fy': 'float',
        'cx': 'float',
        'cy': 'float',
        'tx': 'float',
        'ty': 'float',
        'tz': 'float',
        'roll': 'float',
        'pitch': 'float',
        'yaw': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.width = kwargs.get('width', int())
        self.height = kwargs.get('height', int())
        self.frames_per_second = kwargs.get('frames_per_second', float())
        self.gain = kwargs.get('gain', float())
        self.exposure_time = kwargs.get('exposure_time', int())
        self.fx = kwargs.get('fx', float())
        self.fy = kwargs.get('fy', float())
        self.cx = kwargs.get('cx', float())
        self.cy = kwargs.get('cy', float())
        self.tx = kwargs.get('tx', float())
        self.ty = kwargs.get('ty', float())
        self.tz = kwargs.get('tz', float())
        self.roll = kwargs.get('roll', float())
        self.pitch = kwargs.get('pitch', float())
        self.yaw = kwargs.get('yaw', float())

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
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.frames_per_second != other.frames_per_second:
            return False
        if self.gain != other.gain:
            return False
        if self.exposure_time != other.exposure_time:
            return False
        if self.fx != other.fx:
            return False
        if self.fy != other.fy:
            return False
        if self.cx != other.cx:
            return False
        if self.cy != other.cy:
            return False
        if self.tx != other.tx:
            return False
        if self.ty != other.ty:
            return False
        if self.tz != other.tz:
            return False
        if self.roll != other.roll:
            return False
        if self.pitch != other.pitch:
            return False
        if self.yaw != other.yaw:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def fx(self):
        """Message field 'fx'."""
        return self._fx

    @fx.setter
    def fx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fx = value

    @builtins.property
    def fy(self):
        """Message field 'fy'."""
        return self._fy

    @fy.setter
    def fy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fy = value

    @builtins.property
    def cx(self):
        """Message field 'cx'."""
        return self._cx

    @cx.setter
    def cx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cx = value

    @builtins.property
    def cy(self):
        """Message field 'cy'."""
        return self._cy

    @cy.setter
    def cy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cy = value

    @builtins.property
    def tx(self):
        """Message field 'tx'."""
        return self._tx

    @tx.setter
    def tx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tx = value

    @builtins.property
    def ty(self):
        """Message field 'ty'."""
        return self._ty

    @ty.setter
    def ty(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ty' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ty' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ty = value

    @builtins.property
    def tz(self):
        """Message field 'tz'."""
        return self._tz

    @tz.setter
    def tz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tz = value

    @builtins.property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'roll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._roll = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw = value
