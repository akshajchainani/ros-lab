# generated from rosidl_generator_py/resource/_idl.py.em
# with input from action_tutorials_interfaces:action/PrimeNumbers.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PrimeNumbers_Goal(type):
    """Metaclass of message 'PrimeNumbers_Goal'."""

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
            module = import_type_support('action_tutorials_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_tutorials_interfaces.action.PrimeNumbers_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__prime_numbers__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__prime_numbers__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__prime_numbers__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__prime_numbers__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__prime_numbers__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PrimeNumbers_Goal(metaclass=Metaclass_PrimeNumbers_Goal):
    """Message class 'PrimeNumbers_Goal'."""

    __slots__ = [
        '_n',
    ]

    _fields_and_field_types = {
        'n': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.n = kwargs.get('n', int())

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
        if self.n != other.n:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def n(self):
        """Message field 'n'."""
        return self._n

    @n.setter
    def n(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'n' field must be an integer in [-2147483648, 2147483647]"
        self._n = value


# Import statements for member types

# Member 'primes'
import array  # noqa: E402, I100

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PrimeNumbers_Result(type):
    """Metaclass of message 'PrimeNumbers_Result'."""

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
            module = import_type_support('action_tutorials_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_tutorials_interfaces.action.PrimeNumbers_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__prime_numbers__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__prime_numbers__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__prime_numbers__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__prime_numbers__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__prime_numbers__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PrimeNumbers_Result(metaclass=Metaclass_PrimeNumbers_Result):
    """Message class 'PrimeNumbers_Result'."""

    __slots__ = [
        '_primes',
    ]

    _fields_and_field_types = {
        'primes': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.primes = array.array('i', kwargs.get('primes', []))

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
        if self.primes != other.primes:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def primes(self):
        """Message field 'primes'."""
        return self._primes

    @primes.setter
    def primes(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'primes' array.array() must have the type code of 'i'"
            self._primes = value
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
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'primes' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._primes = array.array('i', value)


# Import statements for member types

# Member 'partial_result'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PrimeNumbers_Feedback(type):
    """Metaclass of message 'PrimeNumbers_Feedback'."""

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
            module = import_type_support('action_tutorials_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_tutorials_interfaces.action.PrimeNumbers_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__prime_numbers__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__prime_numbers__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__prime_numbers__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__prime_numbers__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__prime_numbers__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PrimeNumbers_Feedback(metaclass=Metaclass_PrimeNumbers_Feedback):
    """Message class 'PrimeNumbers_Feedback'."""

    __slots__ = [
        '_partial_result',
    ]

    _fields_and_field_types = {
        'partial_result': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.partial_result = array.array('i', kwargs.get('partial_result', []))

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
        if self.partial_result != other.partial_result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def partial_result(self):
        """Message field 'partial_result'."""
        return self._partial_result

    @partial_result.setter
    def partial_result(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'partial_result' array.array() must have the type code of 'i'"
            self._partial_result = value
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
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'partial_result' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._partial_result = array.array('i', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PrimeNumbers_SendGoal_Request(type):
    """Metaclass of message 'PrimeNumbers_SendGoal_Request'."""

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
            module = import_type_support('action_tutorials_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_tutorials_interfaces.action.PrimeNumbers_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__prime_numbers__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__prime_numbers__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__prime_numbers__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__prime_numbers__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__prime_numbers__send_goal__request

            from action_tutorials_interfaces.action import PrimeNumbers
            if PrimeNumbers.Goal.__class__._TYPE_SUPPORT is None:
                PrimeNumbers.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PrimeNumbers_SendGoal_Request(metaclass=Metaclass_PrimeNumbers_SendGoal_Request):
    """Message class 'PrimeNumbers_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'action_tutorials_interfaces/PrimeNumbers_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['action_tutorials_interfaces', 'action'], 'PrimeNumbers_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from action_tutorials_interfaces.action._prime_numbers import PrimeNumbers_Goal
        self.goal = kwargs.get('goal', PrimeNumbers_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from action_tutorials_interfaces.action._prime_numbers import PrimeNumbers_Goal
            assert \
                isinstance(value, PrimeNumbers_Goal), \
                "The 'goal' field must be a sub message of type 'PrimeNumbers_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PrimeNumbers_SendGoal_Response(type):
    """Metaclass of message 'PrimeNumbers_SendGoal_Response'."""

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
            module = import_type_support('action_tutorials_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_tutorials_interfaces.action.PrimeNumbers_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__prime_numbers__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__prime_numbers__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__prime_numbers__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__prime_numbers__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__prime_numbers__send_goal__response

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


class PrimeNumbers_SendGoal_Response(metaclass=Metaclass_PrimeNumbers_SendGoal_Response):
    """Message class 'PrimeNumbers_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_PrimeNumbers_SendGoal(type):
    """Metaclass of service 'PrimeNumbers_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('action_tutorials_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_tutorials_interfaces.action.PrimeNumbers_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__prime_numbers__send_goal

            from action_tutorials_interfaces.action import _prime_numbers
            if _prime_numbers.Metaclass_PrimeNumbers_SendGoal_Request._TYPE_SUPPORT is None:
                _prime_numbers.Metaclass_PrimeNumbers_SendGoal_Request.__import_type_support__()
            if _prime_numbers.Metaclass_PrimeNumbers_SendGoal_Response._TYPE_SUPPORT is None:
                _prime_numbers.Metaclass_PrimeNumbers_SendGoal_Response.__import_type_support__()


class PrimeNumbers_SendGoal(metaclass=Metaclass_PrimeNumbers_SendGoal):
    from action_tutorials_interfaces.action._prime_numbers import PrimeNumbers_SendGoal_Request as Request
    from action_tutorials_interfaces.action._prime_numbers import PrimeNumbers_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PrimeNumbers_GetResult_Request(type):
    """Metaclass of message 'PrimeNumbers_GetResult_Request'."""

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
            module = import_type_support('action_tutorials_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_tutorials_interfaces.action.PrimeNumbers_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__prime_numbers__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__prime_numbers__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__prime_numbers__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__prime_numbers__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__prime_numbers__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PrimeNumbers_GetResult_Request(metaclass=Metaclass_PrimeNumbers_GetResult_Request):
    """Message class 'PrimeNumbers_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PrimeNumbers_GetResult_Response(type):
    """Metaclass of message 'PrimeNumbers_GetResult_Response'."""

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
            module = import_type_support('action_tutorials_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_tutorials_interfaces.action.PrimeNumbers_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__prime_numbers__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__prime_numbers__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__prime_numbers__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__prime_numbers__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__prime_numbers__get_result__response

            from action_tutorials_interfaces.action import PrimeNumbers
            if PrimeNumbers.Result.__class__._TYPE_SUPPORT is None:
                PrimeNumbers.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PrimeNumbers_GetResult_Response(metaclass=Metaclass_PrimeNumbers_GetResult_Response):
    """Message class 'PrimeNumbers_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'action_tutorials_interfaces/PrimeNumbers_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['action_tutorials_interfaces', 'action'], 'PrimeNumbers_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from action_tutorials_interfaces.action._prime_numbers import PrimeNumbers_Result
        self.result = kwargs.get('result', PrimeNumbers_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from action_tutorials_interfaces.action._prime_numbers import PrimeNumbers_Result
            assert \
                isinstance(value, PrimeNumbers_Result), \
                "The 'result' field must be a sub message of type 'PrimeNumbers_Result'"
        self._result = value


class Metaclass_PrimeNumbers_GetResult(type):
    """Metaclass of service 'PrimeNumbers_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('action_tutorials_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_tutorials_interfaces.action.PrimeNumbers_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__prime_numbers__get_result

            from action_tutorials_interfaces.action import _prime_numbers
            if _prime_numbers.Metaclass_PrimeNumbers_GetResult_Request._TYPE_SUPPORT is None:
                _prime_numbers.Metaclass_PrimeNumbers_GetResult_Request.__import_type_support__()
            if _prime_numbers.Metaclass_PrimeNumbers_GetResult_Response._TYPE_SUPPORT is None:
                _prime_numbers.Metaclass_PrimeNumbers_GetResult_Response.__import_type_support__()


class PrimeNumbers_GetResult(metaclass=Metaclass_PrimeNumbers_GetResult):
    from action_tutorials_interfaces.action._prime_numbers import PrimeNumbers_GetResult_Request as Request
    from action_tutorials_interfaces.action._prime_numbers import PrimeNumbers_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PrimeNumbers_FeedbackMessage(type):
    """Metaclass of message 'PrimeNumbers_FeedbackMessage'."""

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
            module = import_type_support('action_tutorials_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_tutorials_interfaces.action.PrimeNumbers_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__prime_numbers__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__prime_numbers__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__prime_numbers__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__prime_numbers__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__prime_numbers__feedback_message

            from action_tutorials_interfaces.action import PrimeNumbers
            if PrimeNumbers.Feedback.__class__._TYPE_SUPPORT is None:
                PrimeNumbers.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PrimeNumbers_FeedbackMessage(metaclass=Metaclass_PrimeNumbers_FeedbackMessage):
    """Message class 'PrimeNumbers_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'action_tutorials_interfaces/PrimeNumbers_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['action_tutorials_interfaces', 'action'], 'PrimeNumbers_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from action_tutorials_interfaces.action._prime_numbers import PrimeNumbers_Feedback
        self.feedback = kwargs.get('feedback', PrimeNumbers_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from action_tutorials_interfaces.action._prime_numbers import PrimeNumbers_Feedback
            assert \
                isinstance(value, PrimeNumbers_Feedback), \
                "The 'feedback' field must be a sub message of type 'PrimeNumbers_Feedback'"
        self._feedback = value


class Metaclass_PrimeNumbers(type):
    """Metaclass of action 'PrimeNumbers'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('action_tutorials_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'action_tutorials_interfaces.action.PrimeNumbers')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__prime_numbers

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from action_tutorials_interfaces.action import _prime_numbers
            if _prime_numbers.Metaclass_PrimeNumbers_SendGoal._TYPE_SUPPORT is None:
                _prime_numbers.Metaclass_PrimeNumbers_SendGoal.__import_type_support__()
            if _prime_numbers.Metaclass_PrimeNumbers_GetResult._TYPE_SUPPORT is None:
                _prime_numbers.Metaclass_PrimeNumbers_GetResult.__import_type_support__()
            if _prime_numbers.Metaclass_PrimeNumbers_FeedbackMessage._TYPE_SUPPORT is None:
                _prime_numbers.Metaclass_PrimeNumbers_FeedbackMessage.__import_type_support__()


class PrimeNumbers(metaclass=Metaclass_PrimeNumbers):

    # The goal message defined in the action definition.
    from action_tutorials_interfaces.action._prime_numbers import PrimeNumbers_Goal as Goal
    # The result message defined in the action definition.
    from action_tutorials_interfaces.action._prime_numbers import PrimeNumbers_Result as Result
    # The feedback message defined in the action definition.
    from action_tutorials_interfaces.action._prime_numbers import PrimeNumbers_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from action_tutorials_interfaces.action._prime_numbers import PrimeNumbers_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from action_tutorials_interfaces.action._prime_numbers import PrimeNumbers_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from action_tutorials_interfaces.action._prime_numbers import PrimeNumbers_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
