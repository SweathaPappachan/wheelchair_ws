# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dwb_msgs/GenerateTwistsRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import nav_2d_msgs.msg

class GenerateTwistsRequest(genpy.Message):
  _md5sum = "9b565023e01bba3608d16ec34d67c081"
  _type = "dwb_msgs/GenerateTwistsRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# For a given velocity, generate which twist commands will be evaluated
nav_2d_msgs/Twist2D current_vel

================================================================================
MSG: nav_2d_msgs/Twist2D
float64 x
float64 y
float64 theta
"""
  __slots__ = ['current_vel']
  _slot_types = ['nav_2d_msgs/Twist2D']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       current_vel

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GenerateTwistsRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.current_vel is None:
        self.current_vel = nav_2d_msgs.msg.Twist2D()
    else:
      self.current_vel = nav_2d_msgs.msg.Twist2D()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3d().pack(_x.current_vel.x, _x.current_vel.y, _x.current_vel.theta))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.current_vel is None:
        self.current_vel = nav_2d_msgs.msg.Twist2D()
      end = 0
      _x = self
      start = end
      end += 24
      (_x.current_vel.x, _x.current_vel.y, _x.current_vel.theta,) = _get_struct_3d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3d().pack(_x.current_vel.x, _x.current_vel.y, _x.current_vel.theta))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.current_vel is None:
        self.current_vel = nav_2d_msgs.msg.Twist2D()
      end = 0
      _x = self
      start = end
      end += 24
      (_x.current_vel.x, _x.current_vel.y, _x.current_vel.theta,) = _get_struct_3d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dwb_msgs/GenerateTwistsResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import nav_2d_msgs.msg

class GenerateTwistsResponse(genpy.Message):
  _md5sum = "ca457e77ab95ba074b796555f7e74efe"
  _type = "dwb_msgs/GenerateTwistsResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """nav_2d_msgs/Twist2D[] twists


================================================================================
MSG: nav_2d_msgs/Twist2D
float64 x
float64 y
float64 theta
"""
  __slots__ = ['twists']
  _slot_types = ['nav_2d_msgs/Twist2D[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       twists

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GenerateTwistsResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.twists is None:
        self.twists = []
    else:
      self.twists = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.twists)
      buff.write(_struct_I.pack(length))
      for val1 in self.twists:
        _x = val1
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.theta))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.twists is None:
        self.twists = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.twists = []
      for i in range(0, length):
        val1 = nav_2d_msgs.msg.Twist2D()
        _x = val1
        start = end
        end += 24
        (_x.x, _x.y, _x.theta,) = _get_struct_3d().unpack(str[start:end])
        self.twists.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.twists)
      buff.write(_struct_I.pack(length))
      for val1 in self.twists:
        _x = val1
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.theta))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.twists is None:
        self.twists = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.twists = []
      for i in range(0, length):
        val1 = nav_2d_msgs.msg.Twist2D()
        _x = val1
        start = end
        end += 24
        (_x.x, _x.y, _x.theta,) = _get_struct_3d().unpack(str[start:end])
        self.twists.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
class GenerateTwists(object):
  _type          = 'dwb_msgs/GenerateTwists'
  _md5sum = '01d3946b46f84a3da34b725f25f3768a'
  _request_class  = GenerateTwistsRequest
  _response_class = GenerateTwistsResponse