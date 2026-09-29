# generated from rosidl_generator_py/resource/_idl.py.em
# with input from underground_world:msg/RobotMetrics.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotMetrics(type):
    """Metaclass of message 'RobotMetrics'."""

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
            module = import_type_support('underground_world')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'underground_world.msg.RobotMetrics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_metrics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_metrics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_metrics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_metrics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_metrics

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotMetrics(metaclass=Metaclass_RobotMetrics):
    """Message class 'RobotMetrics'."""

    __slots__ = [
        '_scenario_name',
        '_steps_taken',
        '_invalid_moves',
        '_contacts_seen',
        '_contacts_down',
        '_invalid_triggers',
        '_duplicate_triggers',
        '_unique_cells_seen',
        '_map_coverage_percent',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'scenario_name': 'string',
        'steps_taken': 'uint32',
        'invalid_moves': 'uint32',
        'contacts_seen': 'uint32',
        'contacts_down': 'uint32',
        'invalid_triggers': 'uint32',
        'duplicate_triggers': 'uint32',
        'unique_cells_seen': 'uint32',
        'map_coverage_percent': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.scenario_name = kwargs.get('scenario_name', str())
        self.steps_taken = kwargs.get('steps_taken', int())
        self.invalid_moves = kwargs.get('invalid_moves', int())
        self.contacts_seen = kwargs.get('contacts_seen', int())
        self.contacts_down = kwargs.get('contacts_down', int())
        self.invalid_triggers = kwargs.get('invalid_triggers', int())
        self.duplicate_triggers = kwargs.get('duplicate_triggers', int())
        self.unique_cells_seen = kwargs.get('unique_cells_seen', int())
        self.map_coverage_percent = kwargs.get('map_coverage_percent', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.scenario_name != other.scenario_name:
            return False
        if self.steps_taken != other.steps_taken:
            return False
        if self.invalid_moves != other.invalid_moves:
            return False
        if self.contacts_seen != other.contacts_seen:
            return False
        if self.contacts_down != other.contacts_down:
            return False
        if self.invalid_triggers != other.invalid_triggers:
            return False
        if self.duplicate_triggers != other.duplicate_triggers:
            return False
        if self.unique_cells_seen != other.unique_cells_seen:
            return False
        if self.map_coverage_percent != other.map_coverage_percent:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def scenario_name(self):
        """Message field 'scenario_name'."""
        return self._scenario_name

    @scenario_name.setter
    def scenario_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'scenario_name' field must be of type 'str'"
        self._scenario_name = value

    @builtins.property
    def steps_taken(self):
        """Message field 'steps_taken'."""
        return self._steps_taken

    @steps_taken.setter
    def steps_taken(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'steps_taken' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'steps_taken' field must be an unsigned integer in [0, 4294967295]"
        self._steps_taken = value

    @builtins.property
    def invalid_moves(self):
        """Message field 'invalid_moves'."""
        return self._invalid_moves

    @invalid_moves.setter
    def invalid_moves(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'invalid_moves' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'invalid_moves' field must be an unsigned integer in [0, 4294967295]"
        self._invalid_moves = value

    @builtins.property
    def contacts_seen(self):
        """Message field 'contacts_seen'."""
        return self._contacts_seen

    @contacts_seen.setter
    def contacts_seen(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'contacts_seen' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'contacts_seen' field must be an unsigned integer in [0, 4294967295]"
        self._contacts_seen = value

    @builtins.property
    def contacts_down(self):
        """Message field 'contacts_down'."""
        return self._contacts_down

    @contacts_down.setter
    def contacts_down(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'contacts_down' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'contacts_down' field must be an unsigned integer in [0, 4294967295]"
        self._contacts_down = value

    @builtins.property
    def invalid_triggers(self):
        """Message field 'invalid_triggers'."""
        return self._invalid_triggers

    @invalid_triggers.setter
    def invalid_triggers(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'invalid_triggers' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'invalid_triggers' field must be an unsigned integer in [0, 4294967295]"
        self._invalid_triggers = value

    @builtins.property
    def duplicate_triggers(self):
        """Message field 'duplicate_triggers'."""
        return self._duplicate_triggers

    @duplicate_triggers.setter
    def duplicate_triggers(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'duplicate_triggers' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'duplicate_triggers' field must be an unsigned integer in [0, 4294967295]"
        self._duplicate_triggers = value

    @builtins.property
    def unique_cells_seen(self):
        """Message field 'unique_cells_seen'."""
        return self._unique_cells_seen

    @unique_cells_seen.setter
    def unique_cells_seen(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'unique_cells_seen' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'unique_cells_seen' field must be an unsigned integer in [0, 4294967295]"
        self._unique_cells_seen = value

    @builtins.property
    def map_coverage_percent(self):
        """Message field 'map_coverage_percent'."""
        return self._map_coverage_percent

    @map_coverage_percent.setter
    def map_coverage_percent(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'map_coverage_percent' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'map_coverage_percent' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._map_coverage_percent = value
