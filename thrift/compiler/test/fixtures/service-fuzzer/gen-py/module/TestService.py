#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from __future__ import absolute_import
import sys
from thrift.util.Recursive import fix_spec
from thrift.Thrift import TType, TMessageType, TPriority, TRequestContext, TProcessorEventHandler, TServerInterface, TProcessor, TException, TApplicationException, UnimplementedTypedef
from thrift.protocol.TProtocol import TProtocolException


from .ttypes import UTF8STRINGS
from thrift.Thrift import TProcessor
import pprint
import warnings
from thrift import Thrift
from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol
from thrift.protocol import TCompactProtocol
from thrift.protocol import THeaderProtocol
fastproto = None
try:
  from thrift.protocol import fastproto
except ImportError:
  pass

all_structs = []
UTF8STRINGS = bool(0) or sys.version_info.major >= 3

from thrift.util.Decorators import (
  future_process_main,
  future_process_method,
  process_main as thrift_process_main,
  process_method as thrift_process_method,
  should_run_on_thread,
  write_results_after_future,
)

class Iface:
  def init(self, int1=None, int2=None, int3=None, int4=None, int5=None, int6=None, int7=None, int8=None, int9=None, int10=None, int11=None, int12=None, int13=None, int14=None, int15=None, int16=None):
    """
    Parameters:
     - int1
     - int2
     - int3
     - int4
     - int5
     - int6
     - int7
     - int8
     - int9
     - int10
     - int11
     - int12
     - int13
     - int14
     - int15
     - int16
    """
    pass


class ContextIface:
  def init(self, handler_ctx, int1=None, int2=None, int3=None, int4=None, int5=None, int6=None, int7=None, int8=None, int9=None, int10=None, int11=None, int12=None, int13=None, int14=None, int15=None, int16=None):
    """
    Parameters:
     - int1
     - int2
     - int3
     - int4
     - int5
     - int6
     - int7
     - int8
     - int9
     - int10
     - int11
     - int12
     - int13
     - int14
     - int15
     - int16
    """
    pass


# HELPER FUNCTIONS AND STRUCTURES

class init_args:
  """
  Attributes:
   - int1
   - int2
   - int3
   - int4
   - int5
   - int6
   - int7
   - int8
   - int9
   - int10
   - int11
   - int12
   - int13
   - int14
   - int15
   - int16
  """

  thrift_spec = None
  thrift_field_annotations = None
  thrift_struct_annotations = None
  __init__ = None
  @staticmethod
  def isUnion():
    return False

  def read(self, iprot):
    if (isinstance(iprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0)
      return
    if (isinstance(iprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2)
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.I64:
          self.int1 = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.I64:
          self.int2 = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.I64:
          self.int3 = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 4:
        if ftype == TType.I64:
          self.int4 = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 5:
        if ftype == TType.I64:
          self.int5 = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 6:
        if ftype == TType.I64:
          self.int6 = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 7:
        if ftype == TType.I64:
          self.int7 = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 8:
        if ftype == TType.I64:
          self.int8 = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 9:
        if ftype == TType.I64:
          self.int9 = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 10:
        if ftype == TType.I64:
          self.int10 = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 11:
        if ftype == TType.I64:
          self.int11 = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 12:
        if ftype == TType.I64:
          self.int12 = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 13:
        if ftype == TType.I64:
          self.int13 = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 14:
        if ftype == TType.I64:
          self.int14 = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 15:
        if ftype == TType.I64:
          self.int15 = iprot.readI64()
        else:
          iprot.skip(ftype)
      elif fid == 16:
        if ftype == TType.I64:
          self.int16 = iprot.readI64()
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if (isinstance(oprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0))
      return
    if (isinstance(oprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2))
      return
    oprot.writeStructBegin('init_args')
    if self.int1 != None:
      oprot.writeFieldBegin('int1', TType.I64, 1)
      oprot.writeI64(self.int1)
      oprot.writeFieldEnd()
    if self.int2 != None:
      oprot.writeFieldBegin('int2', TType.I64, 2)
      oprot.writeI64(self.int2)
      oprot.writeFieldEnd()
    if self.int3 != None:
      oprot.writeFieldBegin('int3', TType.I64, 3)
      oprot.writeI64(self.int3)
      oprot.writeFieldEnd()
    if self.int4 != None:
      oprot.writeFieldBegin('int4', TType.I64, 4)
      oprot.writeI64(self.int4)
      oprot.writeFieldEnd()
    if self.int5 != None:
      oprot.writeFieldBegin('int5', TType.I64, 5)
      oprot.writeI64(self.int5)
      oprot.writeFieldEnd()
    if self.int6 != None:
      oprot.writeFieldBegin('int6', TType.I64, 6)
      oprot.writeI64(self.int6)
      oprot.writeFieldEnd()
    if self.int7 != None:
      oprot.writeFieldBegin('int7', TType.I64, 7)
      oprot.writeI64(self.int7)
      oprot.writeFieldEnd()
    if self.int8 != None:
      oprot.writeFieldBegin('int8', TType.I64, 8)
      oprot.writeI64(self.int8)
      oprot.writeFieldEnd()
    if self.int9 != None:
      oprot.writeFieldBegin('int9', TType.I64, 9)
      oprot.writeI64(self.int9)
      oprot.writeFieldEnd()
    if self.int10 != None:
      oprot.writeFieldBegin('int10', TType.I64, 10)
      oprot.writeI64(self.int10)
      oprot.writeFieldEnd()
    if self.int11 != None:
      oprot.writeFieldBegin('int11', TType.I64, 11)
      oprot.writeI64(self.int11)
      oprot.writeFieldEnd()
    if self.int12 != None:
      oprot.writeFieldBegin('int12', TType.I64, 12)
      oprot.writeI64(self.int12)
      oprot.writeFieldEnd()
    if self.int13 != None:
      oprot.writeFieldBegin('int13', TType.I64, 13)
      oprot.writeI64(self.int13)
      oprot.writeFieldEnd()
    if self.int14 != None:
      oprot.writeFieldBegin('int14', TType.I64, 14)
      oprot.writeI64(self.int14)
      oprot.writeFieldEnd()
    if self.int15 != None:
      oprot.writeFieldBegin('int15', TType.I64, 15)
      oprot.writeI64(self.int15)
      oprot.writeFieldEnd()
    if self.int16 != None:
      oprot.writeFieldBegin('int16', TType.I64, 16)
      oprot.writeI64(self.int16)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def __repr__(self):
    L = []
    padding = ' ' * 4
    if self.int1 is not None:
      value = pprint.pformat(self.int1, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    int1=%s' % (value))
    if self.int2 is not None:
      value = pprint.pformat(self.int2, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    int2=%s' % (value))
    if self.int3 is not None:
      value = pprint.pformat(self.int3, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    int3=%s' % (value))
    if self.int4 is not None:
      value = pprint.pformat(self.int4, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    int4=%s' % (value))
    if self.int5 is not None:
      value = pprint.pformat(self.int5, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    int5=%s' % (value))
    if self.int6 is not None:
      value = pprint.pformat(self.int6, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    int6=%s' % (value))
    if self.int7 is not None:
      value = pprint.pformat(self.int7, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    int7=%s' % (value))
    if self.int8 is not None:
      value = pprint.pformat(self.int8, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    int8=%s' % (value))
    if self.int9 is not None:
      value = pprint.pformat(self.int9, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    int9=%s' % (value))
    if self.int10 is not None:
      value = pprint.pformat(self.int10, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    int10=%s' % (value))
    if self.int11 is not None:
      value = pprint.pformat(self.int11, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    int11=%s' % (value))
    if self.int12 is not None:
      value = pprint.pformat(self.int12, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    int12=%s' % (value))
    if self.int13 is not None:
      value = pprint.pformat(self.int13, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    int13=%s' % (value))
    if self.int14 is not None:
      value = pprint.pformat(self.int14, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    int14=%s' % (value))
    if self.int15 is not None:
      value = pprint.pformat(self.int15, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    int15=%s' % (value))
    if self.int16 is not None:
      value = pprint.pformat(self.int16, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    int16=%s' % (value))
    return "%s(%s)" % (self.__class__.__name__, "\n" + ",\n".join(L) if L else '')

  def __eq__(self, other):
    if not isinstance(other, self.__class__):
      return False

    return self.__dict__ == other.__dict__ 

  def __ne__(self, other):
    return not (self == other)

  # Override the __hash__ function for Python3 - t10434117
  __hash__ = object.__hash__

all_structs.append(init_args)
init_args.thrift_spec = (
  None, # 0
  (1, TType.I64, 'int1', None, None, 2, ), # 1
  (2, TType.I64, 'int2', None, None, 2, ), # 2
  (3, TType.I64, 'int3', None, None, 2, ), # 3
  (4, TType.I64, 'int4', None, None, 2, ), # 4
  (5, TType.I64, 'int5', None, None, 2, ), # 5
  (6, TType.I64, 'int6', None, None, 2, ), # 6
  (7, TType.I64, 'int7', None, None, 2, ), # 7
  (8, TType.I64, 'int8', None, None, 2, ), # 8
  (9, TType.I64, 'int9', None, None, 2, ), # 9
  (10, TType.I64, 'int10', None, None, 2, ), # 10
  (11, TType.I64, 'int11', None, None, 2, ), # 11
  (12, TType.I64, 'int12', None, None, 2, ), # 12
  (13, TType.I64, 'int13', None, None, 2, ), # 13
  (14, TType.I64, 'int14', None, None, 2, ), # 14
  (15, TType.I64, 'int15', None, None, 2, ), # 15
  (16, TType.I64, 'int16', None, None, 2, ), # 16
)

init_args.thrift_struct_annotations = {
}
init_args.thrift_field_annotations = {
}

def init_args__init__(self, int1=None, int2=None, int3=None, int4=None, int5=None, int6=None, int7=None, int8=None, int9=None, int10=None, int11=None, int12=None, int13=None, int14=None, int15=None, int16=None,):
  self.int1 = int1
  self.int2 = int2
  self.int3 = int3
  self.int4 = int4
  self.int5 = int5
  self.int6 = int6
  self.int7 = int7
  self.int8 = int8
  self.int9 = int9
  self.int10 = int10
  self.int11 = int11
  self.int12 = int12
  self.int13 = int13
  self.int14 = int14
  self.int15 = int15
  self.int16 = int16

init_args.__init__ = init_args__init__

def init_args__setstate__(self, state):
  state.setdefault('int1', None)
  state.setdefault('int2', None)
  state.setdefault('int3', None)
  state.setdefault('int4', None)
  state.setdefault('int5', None)
  state.setdefault('int6', None)
  state.setdefault('int7', None)
  state.setdefault('int8', None)
  state.setdefault('int9', None)
  state.setdefault('int10', None)
  state.setdefault('int11', None)
  state.setdefault('int12', None)
  state.setdefault('int13', None)
  state.setdefault('int14', None)
  state.setdefault('int15', None)
  state.setdefault('int16', None)
  self.__dict__ = state

init_args.__getstate__ = lambda self: self.__dict__.copy()
init_args.__setstate__ = init_args__setstate__

class init_result:
  """
  Attributes:
   - success
  """

  thrift_spec = None
  thrift_field_annotations = None
  thrift_struct_annotations = None
  __init__ = None
  @staticmethod
  def isUnion():
    return False

  def read(self, iprot):
    if (isinstance(iprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0)
      return
    if (isinstance(iprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2)
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 0:
        if ftype == TType.I64:
          self.success = iprot.readI64()
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if (isinstance(oprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0))
      return
    if (isinstance(oprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2))
      return
    oprot.writeStructBegin('init_result')
    if self.success != None:
      oprot.writeFieldBegin('success', TType.I64, 0)
      oprot.writeI64(self.success)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def __repr__(self):
    L = []
    padding = ' ' * 4
    if self.success is not None:
      value = pprint.pformat(self.success, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    success=%s' % (value))
    return "%s(%s)" % (self.__class__.__name__, "\n" + ",\n".join(L) if L else '')

  def __eq__(self, other):
    if not isinstance(other, self.__class__):
      return False

    return self.__dict__ == other.__dict__ 

  def __ne__(self, other):
    return not (self == other)

  # Override the __hash__ function for Python3 - t10434117
  __hash__ = object.__hash__

all_structs.append(init_result)
init_result.thrift_spec = (
  (0, TType.I64, 'success', None, None, 2, ), # 0
)

init_result.thrift_struct_annotations = {
}
init_result.thrift_field_annotations = {
}

def init_result__init__(self, success=None,):
  self.success = success

init_result.__init__ = init_result__init__

def init_result__setstate__(self, state):
  state.setdefault('success', None)
  self.__dict__ = state

init_result.__getstate__ = lambda self: self.__dict__.copy()
init_result.__setstate__ = init_result__setstate__

class Client(Iface):
  _fbthrift_force_cpp_transport = False

  def __enter__(self):
    if self._fbthrift_cpp_transport:
      self._fbthrift_cpp_transport.__enter__()
    return self

  def __exit__(self, type, value, tb):
    if self._fbthrift_cpp_transport:
      self._fbthrift_cpp_transport.__exit__(type, value, tb)
    if self._iprot:
      self._iprot.trans.close()
    if self._oprot and self._iprot is not self._oprot:
      self._oprot.trans.close()

  def __init__(self, iprot=None, oprot=None, cpp_transport=None):
    self._iprot = self._oprot = iprot
    if oprot != None:
      self._oprot = oprot
    self._seqid = 0
    self._fbthrift_cpp_transport = cpp_transport

  def set_persistent_header(self, key, value):
    if self._fbthrift_cpp_transport:
      self._fbthrift_cpp_transport.set_persistent_header(key, value)
    else:
      try:
        self._oprot.trans.set_persistent_header(key, value)
      except AttributeError:
        pass

  def get_persistent_headers(self):
    if self._fbthrift_cpp_transport:
      return self._fbthrift_cpp_transport.get_persistent_headers()
    try:
      return self._oprot.trans.get_write_persistent_headers()
    except AttributeError:
      return {}

  def clear_persistent_headers(self):
    if self._fbthrift_cpp_transport:
      self._fbthrift_cpp_transport.clear_persistent_headers()
    else:
      try:
        self._oprot.trans.clear_persistent_headers()
      except AttributeError:
        pass

  def set_onetime_header(self, key, value):
    if self._fbthrift_cpp_transport:
      self._fbthrift_cpp_transport.set_onetime_header(key, value)
    else:
      try:
        self._oprot.trans.set_header(key, value)
      except AttributeError:
        pass

  def get_last_response_headers(self):
    if self._fbthrift_cpp_transport:
      return self._fbthrift_cpp_transport.get_last_response_headers()
    try:
      return self._iprot.trans.get_headers()
    except AttributeError:
      return {}

  def set_max_frame_size(self, size):
    if self._fbthrift_cpp_transport:
      pass
    else:
      try:
        self._oprot.trans.set_max_frame_size(size)
      except AttributeError:
        pass

  def init(self, int1=None, int2=None, int3=None, int4=None, int5=None, int6=None, int7=None, int8=None, int9=None, int10=None, int11=None, int12=None, int13=None, int14=None, int15=None, int16=None):
    """
    Parameters:
     - int1
     - int2
     - int3
     - int4
     - int5
     - int6
     - int7
     - int8
     - int9
     - int10
     - int11
     - int12
     - int13
     - int14
     - int15
     - int16
    """
    if (self._fbthrift_cpp_transport):
      args = init_args()
      args.int1 = int1
      args.int2 = int2
      args.int3 = int3
      args.int4 = int4
      args.int5 = int5
      args.int6 = int6
      args.int7 = int7
      args.int8 = int8
      args.int9 = int9
      args.int10 = int10
      args.int11 = int11
      args.int12 = int12
      args.int13 = int13
      args.int14 = int14
      args.int15 = int15
      args.int16 = int16
      result = self._fbthrift_cpp_transport._send_request("TestService", "init", args, init_result)
      if result.success is not None:
        return result.success
      raise TApplicationException(TApplicationException.MISSING_RESULT)
    self.send_init(int1, int2, int3, int4, int5, int6, int7, int8, int9, int10, int11, int12, int13, int14, int15, int16)
    return self.recv_init()

  def send_init(self, int1=None, int2=None, int3=None, int4=None, int5=None, int6=None, int7=None, int8=None, int9=None, int10=None, int11=None, int12=None, int13=None, int14=None, int15=None, int16=None):
    self._oprot.writeMessageBegin('init', TMessageType.CALL, self._seqid)
    args = init_args()
    args.int1 = int1
    args.int2 = int2
    args.int3 = int3
    args.int4 = int4
    args.int5 = int5
    args.int6 = int6
    args.int7 = int7
    args.int8 = int8
    args.int9 = int9
    args.int10 = int10
    args.int11 = int11
    args.int12 = int12
    args.int13 = int13
    args.int14 = int14
    args.int15 = int15
    args.int16 = int16
    args.write(self._oprot)
    self._oprot.writeMessageEnd()
    self._oprot.trans.flush()

  def recv_init(self, ):
    (fname, mtype, rseqid) = self._iprot.readMessageBegin()
    if mtype == TMessageType.EXCEPTION:
      x = TApplicationException()
      x.read(self._iprot)
      self._iprot.readMessageEnd()
      raise x
    result = init_result()
    result.read(self._iprot)
    self._iprot.readMessageEnd()
    if result.success != None:
      return result.success
    raise TApplicationException(TApplicationException.MISSING_RESULT, "init failed: unknown result");


class Processor(Iface, TProcessor):
  _onewayMethods = ()

  def __init__(self, handler):
    TProcessor.__init__(self)
    self._handler = handler
    self._processMap = {}
    self._priorityMap = {}
    self._processMap["init"] = Processor.process_init
    self._priorityMap["init"] = TPriority.NORMAL

  def onewayMethods(self):
    l = []
    l.extend(Processor._onewayMethods)
    return tuple(l)

  @thrift_process_main()
  def process(self,): pass

  @thrift_process_method(init_args, oneway=False)
  def process_init(self, args, handler_ctx):
    result = init_result()
    try:
      result.success = self._handler.init(args.int1, args.int2, args.int3, args.int4, args.int5, args.int6, args.int7, args.int8, args.int9, args.int10, args.int11, args.int12, args.int13, args.int14, args.int15, args.int16)
    except:
      ex = sys.exc_info()[1]
      self._event_handler.handlerError(handler_ctx, 'init', ex)
      result = Thrift.TApplicationException(message=repr(ex))
    return result

Iface._processor_type = Processor

class ContextProcessor(ContextIface, TProcessor):
  _onewayMethods = ()

  def __init__(self, handler):
    TProcessor.__init__(self)
    self._handler = handler
    self._processMap = {}
    self._priorityMap = {}
    self._processMap["init"] = ContextProcessor.process_init
    self._priorityMap["init"] = TPriority.NORMAL

  def onewayMethods(self):
    l = []
    l.extend(ContextProcessor._onewayMethods)
    return tuple(l)

  @thrift_process_main()
  def process(self,): pass

  @thrift_process_method(init_args, oneway=False)
  def process_init(self, args, handler_ctx):
    result = init_result()
    try:
      result.success = self._handler.init(handler_ctx, args.int1, args.int2, args.int3, args.int4, args.int5, args.int6, args.int7, args.int8, args.int9, args.int10, args.int11, args.int12, args.int13, args.int14, args.int15, args.int16)
    except:
      ex = sys.exc_info()[1]
      self._event_handler.handlerError(handler_ctx, 'init', ex)
      result = Thrift.TApplicationException(message=repr(ex))
    return result

ContextIface._processor_type = ContextProcessor

fix_spec(all_structs)
del all_structs

