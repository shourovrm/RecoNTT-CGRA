#=========================================================================
# VVectorAdderRTL__65a6399a04a67573_v.py
#=========================================================================
"""Provide a template of PyMTL wrapper to import verilated models.

This wrapper makes a Verilator-generated C++ model appear as if it were a
normal PyMTL model. This template is based on PyMTL v2.
"""

import os

from cffi  import FFI

from pymtl3.datatypes import *
from pymtl3.dsl import Component, connect, InPort, OutPort, Wire, M, U, RD, WR

# def full_vector( wire, signal ):

#   def to_string( num, nbits ):
#     ndigits = (nbits-1)//4+1
#     return "{0:#0{1}x}".format( num, ndigits+2 )

#   nbits = wire.nbits
#   if nbits <= 64:
#     return to_string( signal[0], nbits )
#   else:
#     ret = ""
#     num_elements = (nbits-1)//32+1
#     for idx in range(num_elements):
#       _nbits = 32 if idx != num_elements-1 else nbits%32
#       ret = to_string( signal[idx], _nbits )[2:] + ret
#     return "0x" + ret

#-------------------------------------------------------------------------
# VectorAdderRTL__65a6399a04a67573
#-------------------------------------------------------------------------

class VectorAdderRTL__65a6399a04a67573( Component ):
  id_ = 0

  def __init__( s, *args, **kwargs ):
    s._finalization_count = 0

    # initialize FFI, define the exposed interface
    s.ffi = FFI()
    s.ffi.cdef("""
      typedef struct {

        // Exposed port interface
        unsigned char * carry_in;        
        unsigned char * carry_out;        
        unsigned char * clk;        
        unsigned char * recv_in_count[2];        
        unsigned char * reset;        
        unsigned char * recv_const___05Fen;        
        unsigned short * recv_const___05Fmsg;        
        unsigned char * recv_const___05Frdy;        
        unsigned char * recv_in___05Fen[2];        
        unsigned short * recv_in___05Fmsg[2];        
        unsigned char * recv_in___05Frdy[2];        
        unsigned char * recv_opt___05Fen;        
        unsigned int * recv_opt___05Fmsg;        
        unsigned char * recv_opt___05Frdy;        
        unsigned char * send_out___05Fen[1];        
        unsigned short * send_out___05Fmsg[1];        
        unsigned char * send_out___05Frdy[1];

        // Verilator model
        void * model;

      } VVectorAdderRTL__65a6399a04a67573_t;

      VVectorAdderRTL__65a6399a04a67573_t * create_model( const char * );
      void destroy_model( VVectorAdderRTL__65a6399a04a67573_t *);
      void eval( VVectorAdderRTL__65a6399a04a67573_t * );
      void assert_en( bool en );
      

    """)

    # Print the modification time stamp of the shared lib
    # print 'Modification time of {}: {}'.format(
    #   'libVectorAdderRTL__65a6399a04a67573_v.so', os.path.getmtime( './libVectorAdderRTL__65a6399a04a67573_v.so' ) )

    # Import the shared library containing the model. We defer
    # construction to the elaborate_logic function to allow the user to
    # set the vcd_file.
    s._ffi_inst = s.ffi.dlopen('./libVectorAdderRTL__65a6399a04a67573_v.so')

    # increment instance count
    VectorAdderRTL__65a6399a04a67573.id_ += 1

  def finalize( s ):
    """Finalize the imported component.

    This method closes the shared library opened through CFFI. If an imported
    component is not finalized explicitly (i.e. if you rely on GC to collect a
    no longer used imported component), importing a component with the same
    name before all previous imported components are GCed might lead to
    confusing behaviors. This is because once opened, the shared lib
    is cached by the OS until the OS reference counter for this lib reaches
    0 (you can decrement the reference counter by calling `dl_close()` syscall).

    Fortunately real designs tend to always have the same shared lib corresponding
    to the components with the same name. If you are doing translation testing and
    use the same component class name even if they refer to different designs,
    you might need to call `imported_object.finalize()` at the end of each test
    to ensure correct behaviors.
    """
    assert s._finalization_count == 0,\
      'Imported component can only be finalized once!'
    s._finalization_count += 1
    s._ffi_inst.destroy_model( s._ffi_m )
    s.ffi.dlclose( s._ffi_inst )
    s.ffi = None
    s._ffi_inst = None

  def __del__( s ):
    if s._finalization_count == 0:
      s._finalization_count += 1
      s._ffi_inst.destroy_model( s._ffi_m )
      s.ffi.dlclose( s._ffi_inst )
      s.ffi = None
      s._ffi_inst = None

  def construct( s, *args, **kwargs ):
    # Set up the VCD file name
    verilator_vcd_file = ""
    if 1:
      if True:
        verilator_vcd_file = "test.vcd"
      else:
        verilator_vcd_file = "VectorAdderRTL__65a6399a04a67573.verilator1.vcd"

    # Convert string to `bytes` which is required by CFFI on python 3
    verilator_vcd_file = verilator_vcd_file.encode('ascii')

    # Construct the model
    s._ffi_m = s._ffi_inst.create_model( s.ffi.new("char[]", verilator_vcd_file) )

    # Buffer for line tracing
    s._line_trace_str = s.ffi.new('char[512]')
    s._convert_string = s.ffi.string

    # Use non-attribute varialbe to reduce CPython bytecode count
    _ffi_m = s._ffi_m
    _ffi_inst = s._ffi_inst

    # declare the port interface
    s.carry_in = InPort( Bits1 )
    s.carry_out = OutPort( Bits1 )
    s.recv_in_count = [ InPort( Bits2 ) for _ in range(2) ]
    s.recv_const = RecvIfcRTL( Bits9 )
    s.recv_in = [ RecvIfcRTL( Bits9 ) for _ in range(2) ]
    s.recv_opt = RecvIfcRTL( CGRAConfig_6_2_5_5 )
    s.send_out = [ SendIfcRTL( Bits9 ) for _ in range(1) ]

    # update blocks that converts ffi interface to/from pymtl ports
    s.s_DOT_carry_in = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_carry_in():
      s.s_DOT_carry_in = s.carry_in
    s.s_DOT_recv_in_count_LB_0_RB_ = Wire( Bits2 )
    @s.update
    def isignal_s_DOT_recv_in_count_LB_0_RB_():
      s.s_DOT_recv_in_count_LB_0_RB_ = s.recv_in_count[0]
    s.s_DOT_recv_in_count_LB_1_RB_ = Wire( Bits2 )
    @s.update
    def isignal_s_DOT_recv_in_count_LB_1_RB_():
      s.s_DOT_recv_in_count_LB_1_RB_ = s.recv_in_count[1]
    s.s_DOT_reset = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_reset():
      s.s_DOT_reset = s.reset
    s.s_DOT_recv_const_DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_const_DOT_en():
      s.s_DOT_recv_const_DOT_en = s.recv_const.en
    s.s_DOT_recv_const_DOT_msg = Wire( Bits9 )
    @s.update
    def isignal_s_DOT_recv_const_DOT_msg():
      s.s_DOT_recv_const_DOT_msg = s.recv_const.msg
    s.s_DOT_recv_in_LB_0_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_in_LB_0_RB__DOT_en():
      s.s_DOT_recv_in_LB_0_RB__DOT_en = s.recv_in[0].en
    s.s_DOT_recv_in_LB_1_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_in_LB_1_RB__DOT_en():
      s.s_DOT_recv_in_LB_1_RB__DOT_en = s.recv_in[1].en
    s.s_DOT_recv_in_LB_0_RB__DOT_msg = Wire( Bits9 )
    @s.update
    def isignal_s_DOT_recv_in_LB_0_RB__DOT_msg():
      s.s_DOT_recv_in_LB_0_RB__DOT_msg = s.recv_in[0].msg
    s.s_DOT_recv_in_LB_1_RB__DOT_msg = Wire( Bits9 )
    @s.update
    def isignal_s_DOT_recv_in_LB_1_RB__DOT_msg():
      s.s_DOT_recv_in_LB_1_RB__DOT_msg = s.recv_in[1].msg
    s.s_DOT_recv_opt_DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_opt_DOT_en():
      s.s_DOT_recv_opt_DOT_en = s.recv_opt.en
    s.s_DOT_recv_opt_DOT_msg = Wire( Bits31 )
    @s.update
    def istruct_s_DOT_recv_opt_DOT_msg():
      s.s_DOT_recv_opt_DOT_msg[0:1] = s.recv_opt.msg.predicate_in[0]
      s.s_DOT_recv_opt_DOT_msg[1:2] = s.recv_opt.msg.predicate_in[1]
      s.s_DOT_recv_opt_DOT_msg[2:3] = s.recv_opt.msg.predicate_in[2]
      s.s_DOT_recv_opt_DOT_msg[3:4] = s.recv_opt.msg.predicate_in[3]
      s.s_DOT_recv_opt_DOT_msg[4:5] = s.recv_opt.msg.predicate_in[4]
      s.s_DOT_recv_opt_DOT_msg[5:8] = s.recv_opt.msg.outport[0]
      s.s_DOT_recv_opt_DOT_msg[8:11] = s.recv_opt.msg.outport[1]
      s.s_DOT_recv_opt_DOT_msg[11:14] = s.recv_opt.msg.outport[2]
      s.s_DOT_recv_opt_DOT_msg[14:17] = s.recv_opt.msg.outport[3]
      s.s_DOT_recv_opt_DOT_msg[17:20] = s.recv_opt.msg.outport[4]
      s.s_DOT_recv_opt_DOT_msg[20:22] = s.recv_opt.msg.fu_in[0]
      s.s_DOT_recv_opt_DOT_msg[22:24] = s.recv_opt.msg.fu_in[1]
      s.s_DOT_recv_opt_DOT_msg[24:25] = s.recv_opt.msg.predicate
      s.s_DOT_recv_opt_DOT_msg[25:31] = s.recv_opt.msg.ctrl
    s.s_DOT_send_out_LB_0_RB__DOT_rdy_LB_0_RB_ = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_send_out_LB_0_RB__DOT_rdy_LB_0_RB_():
      s.s_DOT_send_out_LB_0_RB__DOT_rdy_LB_0_RB_ = s.send_out[0].rdy[0]
    s.s_DOT_carry_out = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_carry_out():
      s.carry_out = s.s_DOT_carry_out
    s.s_DOT_recv_const_DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_const_DOT_rdy():
      s.recv_const.rdy = s.s_DOT_recv_const_DOT_rdy
    s.s_DOT_recv_in_LB_0_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_in_LB_0_RB__DOT_rdy():
      s.recv_in[0].rdy = s.s_DOT_recv_in_LB_0_RB__DOT_rdy
    s.s_DOT_recv_in_LB_1_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_in_LB_1_RB__DOT_rdy():
      s.recv_in[1].rdy = s.s_DOT_recv_in_LB_1_RB__DOT_rdy
    s.s_DOT_recv_opt_DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_opt_DOT_rdy():
      s.recv_opt.rdy = s.s_DOT_recv_opt_DOT_rdy
    s.s_DOT_send_out_LB_0_RB__DOT_en_LB_0_RB_ = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_send_out_LB_0_RB__DOT_en_LB_0_RB_():
      s.send_out[0].en[0] = s.s_DOT_send_out_LB_0_RB__DOT_en_LB_0_RB_
    s.s_DOT_send_out_LB_0_RB__DOT_msg_LB_0_RB_ = Wire( Bits9 )
    @s.update
    def osignal_s_DOT_send_out_LB_0_RB__DOT_msg_LB_0_RB_():
      s.send_out[0].msg[0] = s.s_DOT_send_out_LB_0_RB__DOT_msg_LB_0_RB_

    @s.update
    def comb_upblk():
      # Set inputs
      _ffi_m.carry_in[0] = int(s.s_DOT_carry_in)
      _ffi_m.recv_in_count[0][0] = int(s.s_DOT_recv_in_count_LB_0_RB_)
      _ffi_m.recv_in_count[1][0] = int(s.s_DOT_recv_in_count_LB_1_RB_)
      _ffi_m.reset[0] = int(s.s_DOT_reset)
      _ffi_m.recv_const___05Fen[0] = int(s.s_DOT_recv_const_DOT_en)
      _ffi_m.recv_const___05Fmsg[0] = int(s.s_DOT_recv_const_DOT_msg)
      _ffi_m.recv_in___05Fen[0][0] = int(s.s_DOT_recv_in_LB_0_RB__DOT_en)
      _ffi_m.recv_in___05Fen[1][0] = int(s.s_DOT_recv_in_LB_1_RB__DOT_en)
      _ffi_m.recv_in___05Fmsg[0][0] = int(s.s_DOT_recv_in_LB_0_RB__DOT_msg)
      _ffi_m.recv_in___05Fmsg[1][0] = int(s.s_DOT_recv_in_LB_1_RB__DOT_msg)
      _ffi_m.recv_opt___05Fen[0] = int(s.s_DOT_recv_opt_DOT_en)
      _ffi_m.recv_opt___05Fmsg[0] = int(s.s_DOT_recv_opt_DOT_msg)
      _ffi_m.send_out___05Frdy[0][0] = int(s.s_DOT_send_out_LB_0_RB__DOT_rdy_LB_0_RB_)

      _ffi_inst.eval( _ffi_m )

      # Write all outputs
      s.s_DOT_carry_out = Bits1(_ffi_m.carry_out[0])
      s.s_DOT_recv_const_DOT_rdy = Bits1(_ffi_m.recv_const___05Frdy[0])
      s.s_DOT_recv_in_LB_0_RB__DOT_rdy = Bits1(_ffi_m.recv_in___05Frdy[0][0])
      s.s_DOT_recv_in_LB_1_RB__DOT_rdy = Bits1(_ffi_m.recv_in___05Frdy[1][0])
      s.s_DOT_recv_opt_DOT_rdy = Bits1(_ffi_m.recv_opt___05Frdy[0])
      s.s_DOT_send_out_LB_0_RB__DOT_en_LB_0_RB_ = Bits1(_ffi_m.send_out___05Fen[0][0])
      s.s_DOT_send_out_LB_0_RB__DOT_msg_LB_0_RB_ = Bits9(_ffi_m.send_out___05Fmsg[0][0])

    if 1:
      @s.update_ff
      def seq_upblk():
        # Advance the clock
        _ffi_m.clk[0] = 0
        _ffi_inst.eval( _ffi_m )
        _ffi_m.clk[0] = 1
        _ffi_inst.eval( _ffi_m )

  def assert_en( s, en ):
    # TODO: for verilator, any assertion failure will cause the C simulator
    # to abort, which results in a Python internal error. A better approach
    # is to throw a Python exception at the time of assertion failure.
    # Verilator allows user-defined `stop` function which is called when
    # the simulation is expected to stop due to various reasons. We might
    # be able to raise a Python exception through Python C API (although
    # at this moment I'm not sure if the C API's are compatible between
    # PyPy and CPython).
    assert isinstance( en, bool )
    s._ffi_inst.assert_en( en )

  def line_trace( s ):
    if 0:
      s._ffi_inst.trace( s._ffi_m, s._line_trace_str )
      return s._convert_string( s._line_trace_str ).decode('ascii')
    else:
      return f' carry_in={s.carry_in}, carry_out={s.carry_out}, clk={s.clk}, recv_in_count={s.recv_in_count}, reset={s.reset}, recv_const.en={s.recv_const.en}, recv_const.msg={s.recv_const.msg}, recv_const.rdy={s.recv_const.rdy}, recv_in[0].en={s.recv_in[0].en}, recv_in[1].en={s.recv_in[1].en}, recv_in[0].msg={s.recv_in[0].msg}, recv_in[1].msg={s.recv_in[1].msg}, recv_in[0].rdy={s.recv_in[0].rdy}, recv_in[1].rdy={s.recv_in[1].rdy}, recv_opt.en={s.recv_opt.en}, recv_opt.msg={s.recv_opt.msg}, recv_opt.rdy={s.recv_opt.rdy}, send_out[0].en={s.send_out[0].en}, send_out[0].msg={s.send_out[0].msg}, send_out[0].rdy={s.send_out[0].rdy},'

  def internal_line_trace( s ):
    return ''
