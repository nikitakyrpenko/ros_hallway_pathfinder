# generated from rosidl_generator_py/resource/_idl.py.em
# with input from underground_world:msg/RobotResult.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotResult(type):
    """Metaclass of message 'RobotResult'."""

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
                'underground_world.msg.RobotResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotResult(metaclass=Metaclass_RobotResult):
    """Message class 'RobotResult'."""

    __slots__ = [
        '_scenario_name',
        '_mission_result',
        '_reason',
        '_steps_taken',
        '_max_steps',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'scenario_name': 'string',
        'mission_result': 'string',
        'reason': 'string',
        'steps_taken': 'uint32',
        'max_steps': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.mission_result = kwargs.get('mission_result', str())
        self.reason = kwargs.get('reason', str())
        self.steps_taken = kwargs.get('steps_taken', int())
        self.max_steps = kwargs.get('max_steps', int())

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
        if self.mission_result != other.mission_result:
            return False
        if self.reason != other.reason:
            return False
        if self.steps_taken != other.steps_taken:
            return False
        if self.max_steps != other.max_steps:
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
    def mission_result(self):
        """Message field 'mission_result'."""
        return self._mission_result

    @mission_result.setter
    def mission_result(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'mission_result' field must be of type 'str'"
        self._mission_result = value

    @builtins.property
    def reason(self):
        """Message field 'reason'."""
        return self._reason

    @reason.setter
    def reason(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'reason' field must be of type 'str'"
        self._reason = value

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
    def max_steps(self):
        """Message field 'max_steps'."""
        return self._max_steps

    @max_steps.setter
    def max_steps(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'max_steps' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'max_steps' field must be an unsigned integer in [0, 4294967295]"
        self._max_steps = value
