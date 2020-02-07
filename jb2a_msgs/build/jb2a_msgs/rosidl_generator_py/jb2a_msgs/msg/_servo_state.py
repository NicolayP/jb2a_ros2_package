# generated from rosidl_generator_py/resource/_idl.py.em
# with input from jb2a_msgs:msg/ServoState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'servo_state'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ServoState(type):
    """Metaclass of message 'ServoState'."""

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
            module = import_type_support('jb2a_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'jb2a_msgs.msg.ServoState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__servo_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__servo_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__servo_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__servo_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__servo_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ServoState(metaclass=Metaclass_ServoState):
    """Message class 'ServoState'."""

    __slots__ = [
        '_servo_state',
    ]

    _fields_and_field_types = {
        'servo_state': 'sequence<uint16, 6>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('uint16'), 6),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.servo_state = array.array('H', kwargs.get('servo_state', []))

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
        if self.servo_state != other.servo_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def servo_state(self):
        """Message field 'servo_state'."""
        return self._servo_state

    @servo_state.setter
    def servo_state(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'servo_state' array.array() must have the type code of 'H'"
            assert len(value) <= 6, \
                "The 'servo_state' array.array() must have a size <= 6"
            self._servo_state = value
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
                 len(value) <= 6 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'servo_state' field must be a set or sequence with length <= 6 and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._servo_state = array.array('H', value)
