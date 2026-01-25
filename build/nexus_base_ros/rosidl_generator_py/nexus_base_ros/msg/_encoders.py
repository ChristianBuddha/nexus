# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nexus_base_ros:msg/Encoders.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Encoders(type):
    """Metaclass of message 'Encoders'."""

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
            module = import_type_support('nexus_base_ros')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nexus_base_ros.msg.Encoders')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__encoders
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__encoders
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__encoders
            cls._TYPE_SUPPORT = module.type_support_msg__msg__encoders
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__encoders

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Encoders(metaclass=Metaclass_Encoders):
    """Message class 'Encoders'."""

    __slots__ = [
        '_header',
        '_enc0',
        '_enc1',
        '_enc2',
        '_enc3',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'enc0': 'int16',
        'enc1': 'int16',
        'enc2': 'int16',
        'enc3': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.enc0 = kwargs.get('enc0', int())
        self.enc1 = kwargs.get('enc1', int())
        self.enc2 = kwargs.get('enc2', int())
        self.enc3 = kwargs.get('enc3', int())

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
        if self.header != other.header:
            return False
        if self.enc0 != other.enc0:
            return False
        if self.enc1 != other.enc1:
            return False
        if self.enc2 != other.enc2:
            return False
        if self.enc3 != other.enc3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def enc0(self):
        """Message field 'enc0'."""
        return self._enc0

    @enc0.setter
    def enc0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'enc0' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'enc0' field must be an integer in [-32768, 32767]"
        self._enc0 = value

    @builtins.property
    def enc1(self):
        """Message field 'enc1'."""
        return self._enc1

    @enc1.setter
    def enc1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'enc1' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'enc1' field must be an integer in [-32768, 32767]"
        self._enc1 = value

    @builtins.property
    def enc2(self):
        """Message field 'enc2'."""
        return self._enc2

    @enc2.setter
    def enc2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'enc2' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'enc2' field must be an integer in [-32768, 32767]"
        self._enc2 = value

    @builtins.property
    def enc3(self):
        """Message field 'enc3'."""
        return self._enc3

    @enc3.setter
    def enc3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'enc3' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'enc3' field must be an integer in [-32768, 32767]"
        self._enc3 = value
