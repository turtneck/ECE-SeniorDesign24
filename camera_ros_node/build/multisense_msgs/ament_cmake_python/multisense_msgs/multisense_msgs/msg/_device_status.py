# generated from rosidl_generator_py/resource/_idl.py.em
# with input from multisense_msgs:msg/DeviceStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DeviceStatus(type):
    """Metaclass of message 'DeviceStatus'."""

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
                'multisense_msgs.msg.DeviceStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__device_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__device_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__device_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__device_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__device_status

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


class DeviceStatus(metaclass=Metaclass_DeviceStatus):
    """Message class 'DeviceStatus'."""

    __slots__ = [
        '_time_stamp',
        '_uptime',
        '_system_ok',
        '_laser_ok',
        '_laser_motor_ok',
        '_cameras_ok',
        '_imu_ok',
        '_external_leds_ok',
        '_processing_pipeline_ok',
        '_power_supply_temp',
        '_fpga_temp',
        '_left_imager_temp',
        '_right_imager_temp',
        '_input_voltage',
        '_input_current',
        '_fpga_power',
        '_logic_power',
        '_imager_power',
    ]

    _fields_and_field_types = {
        'time_stamp': 'builtin_interfaces/Time',
        'uptime': 'builtin_interfaces/Time',
        'system_ok': 'boolean',
        'laser_ok': 'boolean',
        'laser_motor_ok': 'boolean',
        'cameras_ok': 'boolean',
        'imu_ok': 'boolean',
        'external_leds_ok': 'boolean',
        'processing_pipeline_ok': 'boolean',
        'power_supply_temp': 'float',
        'fpga_temp': 'float',
        'left_imager_temp': 'float',
        'right_imager_temp': 'float',
        'input_voltage': 'float',
        'input_current': 'float',
        'fpga_power': 'float',
        'logic_power': 'float',
        'imager_power': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        from builtin_interfaces.msg import Time
        self.time_stamp = kwargs.get('time_stamp', Time())
        from builtin_interfaces.msg import Time
        self.uptime = kwargs.get('uptime', Time())
        self.system_ok = kwargs.get('system_ok', bool())
        self.laser_ok = kwargs.get('laser_ok', bool())
        self.laser_motor_ok = kwargs.get('laser_motor_ok', bool())
        self.cameras_ok = kwargs.get('cameras_ok', bool())
        self.imu_ok = kwargs.get('imu_ok', bool())
        self.external_leds_ok = kwargs.get('external_leds_ok', bool())
        self.processing_pipeline_ok = kwargs.get('processing_pipeline_ok', bool())
        self.power_supply_temp = kwargs.get('power_supply_temp', float())
        self.fpga_temp = kwargs.get('fpga_temp', float())
        self.left_imager_temp = kwargs.get('left_imager_temp', float())
        self.right_imager_temp = kwargs.get('right_imager_temp', float())
        self.input_voltage = kwargs.get('input_voltage', float())
        self.input_current = kwargs.get('input_current', float())
        self.fpga_power = kwargs.get('fpga_power', float())
        self.logic_power = kwargs.get('logic_power', float())
        self.imager_power = kwargs.get('imager_power', float())

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
        if self.time_stamp != other.time_stamp:
            return False
        if self.uptime != other.uptime:
            return False
        if self.system_ok != other.system_ok:
            return False
        if self.laser_ok != other.laser_ok:
            return False
        if self.laser_motor_ok != other.laser_motor_ok:
            return False
        if self.cameras_ok != other.cameras_ok:
            return False
        if self.imu_ok != other.imu_ok:
            return False
        if self.external_leds_ok != other.external_leds_ok:
            return False
        if self.processing_pipeline_ok != other.processing_pipeline_ok:
            return False
        if self.power_supply_temp != other.power_supply_temp:
            return False
        if self.fpga_temp != other.fpga_temp:
            return False
        if self.left_imager_temp != other.left_imager_temp:
            return False
        if self.right_imager_temp != other.right_imager_temp:
            return False
        if self.input_voltage != other.input_voltage:
            return False
        if self.input_current != other.input_current:
            return False
        if self.fpga_power != other.fpga_power:
            return False
        if self.logic_power != other.logic_power:
            return False
        if self.imager_power != other.imager_power:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def uptime(self):
        """Message field 'uptime'."""
        return self._uptime

    @uptime.setter
    def uptime(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'uptime' field must be a sub message of type 'Time'"
        self._uptime = value

    @builtins.property
    def system_ok(self):
        """Message field 'system_ok'."""
        return self._system_ok

    @system_ok.setter
    def system_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'system_ok' field must be of type 'bool'"
        self._system_ok = value

    @builtins.property
    def laser_ok(self):
        """Message field 'laser_ok'."""
        return self._laser_ok

    @laser_ok.setter
    def laser_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'laser_ok' field must be of type 'bool'"
        self._laser_ok = value

    @builtins.property
    def laser_motor_ok(self):
        """Message field 'laser_motor_ok'."""
        return self._laser_motor_ok

    @laser_motor_ok.setter
    def laser_motor_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'laser_motor_ok' field must be of type 'bool'"
        self._laser_motor_ok = value

    @builtins.property
    def cameras_ok(self):
        """Message field 'cameras_ok'."""
        return self._cameras_ok

    @cameras_ok.setter
    def cameras_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cameras_ok' field must be of type 'bool'"
        self._cameras_ok = value

    @builtins.property
    def imu_ok(self):
        """Message field 'imu_ok'."""
        return self._imu_ok

    @imu_ok.setter
    def imu_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'imu_ok' field must be of type 'bool'"
        self._imu_ok = value

    @builtins.property
    def external_leds_ok(self):
        """Message field 'external_leds_ok'."""
        return self._external_leds_ok

    @external_leds_ok.setter
    def external_leds_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'external_leds_ok' field must be of type 'bool'"
        self._external_leds_ok = value

    @builtins.property
    def processing_pipeline_ok(self):
        """Message field 'processing_pipeline_ok'."""
        return self._processing_pipeline_ok

    @processing_pipeline_ok.setter
    def processing_pipeline_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'processing_pipeline_ok' field must be of type 'bool'"
        self._processing_pipeline_ok = value

    @builtins.property
    def power_supply_temp(self):
        """Message field 'power_supply_temp'."""
        return self._power_supply_temp

    @power_supply_temp.setter
    def power_supply_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'power_supply_temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'power_supply_temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._power_supply_temp = value

    @builtins.property
    def fpga_temp(self):
        """Message field 'fpga_temp'."""
        return self._fpga_temp

    @fpga_temp.setter
    def fpga_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fpga_temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fpga_temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fpga_temp = value

    @builtins.property
    def left_imager_temp(self):
        """Message field 'left_imager_temp'."""
        return self._left_imager_temp

    @left_imager_temp.setter
    def left_imager_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_imager_temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_imager_temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_imager_temp = value

    @builtins.property
    def right_imager_temp(self):
        """Message field 'right_imager_temp'."""
        return self._right_imager_temp

    @right_imager_temp.setter
    def right_imager_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_imager_temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_imager_temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_imager_temp = value

    @builtins.property
    def input_voltage(self):
        """Message field 'input_voltage'."""
        return self._input_voltage

    @input_voltage.setter
    def input_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'input_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'input_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._input_voltage = value

    @builtins.property
    def input_current(self):
        """Message field 'input_current'."""
        return self._input_current

    @input_current.setter
    def input_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'input_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'input_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._input_current = value

    @builtins.property
    def fpga_power(self):
        """Message field 'fpga_power'."""
        return self._fpga_power

    @fpga_power.setter
    def fpga_power(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fpga_power' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fpga_power' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fpga_power = value

    @builtins.property
    def logic_power(self):
        """Message field 'logic_power'."""
        return self._logic_power

    @logic_power.setter
    def logic_power(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'logic_power' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'logic_power' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._logic_power = value

    @builtins.property
    def imager_power(self):
        """Message field 'imager_power'."""
        return self._imager_power

    @imager_power.setter
    def imager_power(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imager_power' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imager_power' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imager_power = value
