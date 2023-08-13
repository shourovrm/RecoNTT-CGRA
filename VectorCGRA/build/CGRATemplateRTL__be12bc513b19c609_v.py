#=========================================================================
# VCGRATemplateRTL__be12bc513b19c609_v.py
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
# CGRATemplateRTL__be12bc513b19c609
#-------------------------------------------------------------------------

class CGRATemplateRTL__be12bc513b19c609( Component ):
  id_ = 0

  def __init__( s, *args, **kwargs ):
    s._finalization_count = 0

    # initialize FFI, define the exposed interface
    s.ffi = FFI()
    s.ffi.cdef("""
      typedef struct {

        // Exposed port interface
        unsigned char * clk;        
        unsigned char * reset;        
        unsigned char * recv_waddr___05Fen[4];        
        unsigned char * recv_waddr___05Fmsg[4];        
        unsigned char * recv_waddr___05Frdy[4];        
        unsigned char * recv_wopt___05Fen[4];        
        unsigned int * recv_wopt___05Fmsg[4];        
        unsigned char * recv_wopt___05Frdy[4];

        // Verilator model
        void * model;

      } VCGRATemplateRTL__be12bc513b19c609_t;

      VCGRATemplateRTL__be12bc513b19c609_t * create_model( const char * );
      void destroy_model( VCGRATemplateRTL__be12bc513b19c609_t *);
      void eval( VCGRATemplateRTL__be12bc513b19c609_t * );
      void assert_en( bool en );
      

    """)

    # Print the modification time stamp of the shared lib
    # print 'Modification time of {}: {}'.format(
    #   'libCGRATemplateRTL__be12bc513b19c609_v.so', os.path.getmtime( './libCGRATemplateRTL__be12bc513b19c609_v.so' ) )

    # Import the shared library containing the model. We defer
    # construction to the elaborate_logic function to allow the user to
    # set the vcd_file.
    s._ffi_inst = s.ffi.dlopen('./libCGRATemplateRTL__be12bc513b19c609_v.so')

    # increment instance count
    CGRATemplateRTL__be12bc513b19c609.id_ += 1

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
    if 0:
      if False:
        verilator_vcd_file = ".vcd"
      else:
        verilator_vcd_file = "CGRATemplateRTL__be12bc513b19c609.verilator1.vcd"

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
    s.recv_waddr = [ RecvIfcRTL( Bits3 ) for _ in range(4) ]
    s.recv_wopt = [ RecvIfcRTL( CGRAConfig_6_4_10_12 ) for _ in range(4) ]

    # update blocks that converts ffi interface to/from pymtl ports
    s.s_DOT_reset = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_reset():
      s.s_DOT_reset = s.reset
    s.s_DOT_recv_waddr_LB_0_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_0_RB__DOT_en():
      s.s_DOT_recv_waddr_LB_0_RB__DOT_en = s.recv_waddr[0].en
    s.s_DOT_recv_waddr_LB_1_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_1_RB__DOT_en():
      s.s_DOT_recv_waddr_LB_1_RB__DOT_en = s.recv_waddr[1].en
    s.s_DOT_recv_waddr_LB_2_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_2_RB__DOT_en():
      s.s_DOT_recv_waddr_LB_2_RB__DOT_en = s.recv_waddr[2].en
    s.s_DOT_recv_waddr_LB_3_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_3_RB__DOT_en():
      s.s_DOT_recv_waddr_LB_3_RB__DOT_en = s.recv_waddr[3].en
    s.s_DOT_recv_waddr_LB_0_RB__DOT_msg = Wire( Bits3 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_0_RB__DOT_msg():
      s.s_DOT_recv_waddr_LB_0_RB__DOT_msg = s.recv_waddr[0].msg
    s.s_DOT_recv_waddr_LB_1_RB__DOT_msg = Wire( Bits3 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_1_RB__DOT_msg():
      s.s_DOT_recv_waddr_LB_1_RB__DOT_msg = s.recv_waddr[1].msg
    s.s_DOT_recv_waddr_LB_2_RB__DOT_msg = Wire( Bits3 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_2_RB__DOT_msg():
      s.s_DOT_recv_waddr_LB_2_RB__DOT_msg = s.recv_waddr[2].msg
    s.s_DOT_recv_waddr_LB_3_RB__DOT_msg = Wire( Bits3 )
    @s.update
    def isignal_s_DOT_recv_waddr_LB_3_RB__DOT_msg():
      s.s_DOT_recv_waddr_LB_3_RB__DOT_msg = s.recv_waddr[3].msg
    s.s_DOT_recv_wopt_LB_0_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_wopt_LB_0_RB__DOT_en():
      s.s_DOT_recv_wopt_LB_0_RB__DOT_en = s.recv_wopt[0].en
    s.s_DOT_recv_wopt_LB_1_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_wopt_LB_1_RB__DOT_en():
      s.s_DOT_recv_wopt_LB_1_RB__DOT_en = s.recv_wopt[1].en
    s.s_DOT_recv_wopt_LB_2_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_wopt_LB_2_RB__DOT_en():
      s.s_DOT_recv_wopt_LB_2_RB__DOT_en = s.recv_wopt[2].en
    s.s_DOT_recv_wopt_LB_3_RB__DOT_en = Wire( Bits1 )
    @s.update
    def isignal_s_DOT_recv_wopt_LB_3_RB__DOT_en():
      s.s_DOT_recv_wopt_LB_3_RB__DOT_en = s.recv_wopt[3].en
    s.s_DOT_recv_wopt_LB_0_RB__DOT_msg = Wire( Bits77 )
    @s.update
    def istruct_s_DOT_recv_wopt_LB_0_RB__DOT_msg():
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[0:1] = s.recv_wopt[0].msg.predicate_in[0]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[1:2] = s.recv_wopt[0].msg.predicate_in[1]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[2:3] = s.recv_wopt[0].msg.predicate_in[2]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[3:4] = s.recv_wopt[0].msg.predicate_in[3]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[4:5] = s.recv_wopt[0].msg.predicate_in[4]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[5:6] = s.recv_wopt[0].msg.predicate_in[5]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[6:7] = s.recv_wopt[0].msg.predicate_in[6]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[7:8] = s.recv_wopt[0].msg.predicate_in[7]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[8:9] = s.recv_wopt[0].msg.predicate_in[8]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[9:10] = s.recv_wopt[0].msg.predicate_in[9]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[10:14] = s.recv_wopt[0].msg.outport[0]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[14:18] = s.recv_wopt[0].msg.outport[1]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[18:22] = s.recv_wopt[0].msg.outport[2]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[22:26] = s.recv_wopt[0].msg.outport[3]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[26:30] = s.recv_wopt[0].msg.outport[4]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[30:34] = s.recv_wopt[0].msg.outport[5]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[34:38] = s.recv_wopt[0].msg.outport[6]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[38:42] = s.recv_wopt[0].msg.outport[7]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[42:46] = s.recv_wopt[0].msg.outport[8]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[46:50] = s.recv_wopt[0].msg.outport[9]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[50:54] = s.recv_wopt[0].msg.outport[10]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[54:58] = s.recv_wopt[0].msg.outport[11]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[58:61] = s.recv_wopt[0].msg.fu_in[0]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[61:64] = s.recv_wopt[0].msg.fu_in[1]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[64:67] = s.recv_wopt[0].msg.fu_in[2]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[67:70] = s.recv_wopt[0].msg.fu_in[3]
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[70:71] = s.recv_wopt[0].msg.predicate
      s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[71:77] = s.recv_wopt[0].msg.ctrl
    s.s_DOT_recv_wopt_LB_1_RB__DOT_msg = Wire( Bits77 )
    @s.update
    def istruct_s_DOT_recv_wopt_LB_1_RB__DOT_msg():
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[0:1] = s.recv_wopt[1].msg.predicate_in[0]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[1:2] = s.recv_wopt[1].msg.predicate_in[1]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[2:3] = s.recv_wopt[1].msg.predicate_in[2]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[3:4] = s.recv_wopt[1].msg.predicate_in[3]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[4:5] = s.recv_wopt[1].msg.predicate_in[4]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[5:6] = s.recv_wopt[1].msg.predicate_in[5]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[6:7] = s.recv_wopt[1].msg.predicate_in[6]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[7:8] = s.recv_wopt[1].msg.predicate_in[7]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[8:9] = s.recv_wopt[1].msg.predicate_in[8]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[9:10] = s.recv_wopt[1].msg.predicate_in[9]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[10:14] = s.recv_wopt[1].msg.outport[0]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[14:18] = s.recv_wopt[1].msg.outport[1]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[18:22] = s.recv_wopt[1].msg.outport[2]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[22:26] = s.recv_wopt[1].msg.outport[3]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[26:30] = s.recv_wopt[1].msg.outport[4]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[30:34] = s.recv_wopt[1].msg.outport[5]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[34:38] = s.recv_wopt[1].msg.outport[6]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[38:42] = s.recv_wopt[1].msg.outport[7]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[42:46] = s.recv_wopt[1].msg.outport[8]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[46:50] = s.recv_wopt[1].msg.outport[9]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[50:54] = s.recv_wopt[1].msg.outport[10]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[54:58] = s.recv_wopt[1].msg.outport[11]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[58:61] = s.recv_wopt[1].msg.fu_in[0]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[61:64] = s.recv_wopt[1].msg.fu_in[1]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[64:67] = s.recv_wopt[1].msg.fu_in[2]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[67:70] = s.recv_wopt[1].msg.fu_in[3]
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[70:71] = s.recv_wopt[1].msg.predicate
      s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[71:77] = s.recv_wopt[1].msg.ctrl
    s.s_DOT_recv_wopt_LB_2_RB__DOT_msg = Wire( Bits77 )
    @s.update
    def istruct_s_DOT_recv_wopt_LB_2_RB__DOT_msg():
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[0:1] = s.recv_wopt[2].msg.predicate_in[0]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[1:2] = s.recv_wopt[2].msg.predicate_in[1]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[2:3] = s.recv_wopt[2].msg.predicate_in[2]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[3:4] = s.recv_wopt[2].msg.predicate_in[3]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[4:5] = s.recv_wopt[2].msg.predicate_in[4]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[5:6] = s.recv_wopt[2].msg.predicate_in[5]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[6:7] = s.recv_wopt[2].msg.predicate_in[6]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[7:8] = s.recv_wopt[2].msg.predicate_in[7]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[8:9] = s.recv_wopt[2].msg.predicate_in[8]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[9:10] = s.recv_wopt[2].msg.predicate_in[9]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[10:14] = s.recv_wopt[2].msg.outport[0]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[14:18] = s.recv_wopt[2].msg.outport[1]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[18:22] = s.recv_wopt[2].msg.outport[2]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[22:26] = s.recv_wopt[2].msg.outport[3]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[26:30] = s.recv_wopt[2].msg.outport[4]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[30:34] = s.recv_wopt[2].msg.outport[5]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[34:38] = s.recv_wopt[2].msg.outport[6]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[38:42] = s.recv_wopt[2].msg.outport[7]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[42:46] = s.recv_wopt[2].msg.outport[8]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[46:50] = s.recv_wopt[2].msg.outport[9]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[50:54] = s.recv_wopt[2].msg.outport[10]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[54:58] = s.recv_wopt[2].msg.outport[11]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[58:61] = s.recv_wopt[2].msg.fu_in[0]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[61:64] = s.recv_wopt[2].msg.fu_in[1]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[64:67] = s.recv_wopt[2].msg.fu_in[2]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[67:70] = s.recv_wopt[2].msg.fu_in[3]
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[70:71] = s.recv_wopt[2].msg.predicate
      s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[71:77] = s.recv_wopt[2].msg.ctrl
    s.s_DOT_recv_wopt_LB_3_RB__DOT_msg = Wire( Bits77 )
    @s.update
    def istruct_s_DOT_recv_wopt_LB_3_RB__DOT_msg():
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[0:1] = s.recv_wopt[3].msg.predicate_in[0]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[1:2] = s.recv_wopt[3].msg.predicate_in[1]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[2:3] = s.recv_wopt[3].msg.predicate_in[2]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[3:4] = s.recv_wopt[3].msg.predicate_in[3]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[4:5] = s.recv_wopt[3].msg.predicate_in[4]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[5:6] = s.recv_wopt[3].msg.predicate_in[5]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[6:7] = s.recv_wopt[3].msg.predicate_in[6]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[7:8] = s.recv_wopt[3].msg.predicate_in[7]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[8:9] = s.recv_wopt[3].msg.predicate_in[8]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[9:10] = s.recv_wopt[3].msg.predicate_in[9]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[10:14] = s.recv_wopt[3].msg.outport[0]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[14:18] = s.recv_wopt[3].msg.outport[1]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[18:22] = s.recv_wopt[3].msg.outport[2]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[22:26] = s.recv_wopt[3].msg.outport[3]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[26:30] = s.recv_wopt[3].msg.outport[4]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[30:34] = s.recv_wopt[3].msg.outport[5]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[34:38] = s.recv_wopt[3].msg.outport[6]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[38:42] = s.recv_wopt[3].msg.outport[7]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[42:46] = s.recv_wopt[3].msg.outport[8]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[46:50] = s.recv_wopt[3].msg.outport[9]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[50:54] = s.recv_wopt[3].msg.outport[10]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[54:58] = s.recv_wopt[3].msg.outport[11]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[58:61] = s.recv_wopt[3].msg.fu_in[0]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[61:64] = s.recv_wopt[3].msg.fu_in[1]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[64:67] = s.recv_wopt[3].msg.fu_in[2]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[67:70] = s.recv_wopt[3].msg.fu_in[3]
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[70:71] = s.recv_wopt[3].msg.predicate
      s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[71:77] = s.recv_wopt[3].msg.ctrl
    s.s_DOT_recv_waddr_LB_0_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_waddr_LB_0_RB__DOT_rdy():
      s.recv_waddr[0].rdy = s.s_DOT_recv_waddr_LB_0_RB__DOT_rdy
    s.s_DOT_recv_waddr_LB_1_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_waddr_LB_1_RB__DOT_rdy():
      s.recv_waddr[1].rdy = s.s_DOT_recv_waddr_LB_1_RB__DOT_rdy
    s.s_DOT_recv_waddr_LB_2_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_waddr_LB_2_RB__DOT_rdy():
      s.recv_waddr[2].rdy = s.s_DOT_recv_waddr_LB_2_RB__DOT_rdy
    s.s_DOT_recv_waddr_LB_3_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_waddr_LB_3_RB__DOT_rdy():
      s.recv_waddr[3].rdy = s.s_DOT_recv_waddr_LB_3_RB__DOT_rdy
    s.s_DOT_recv_wopt_LB_0_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_wopt_LB_0_RB__DOT_rdy():
      s.recv_wopt[0].rdy = s.s_DOT_recv_wopt_LB_0_RB__DOT_rdy
    s.s_DOT_recv_wopt_LB_1_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_wopt_LB_1_RB__DOT_rdy():
      s.recv_wopt[1].rdy = s.s_DOT_recv_wopt_LB_1_RB__DOT_rdy
    s.s_DOT_recv_wopt_LB_2_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_wopt_LB_2_RB__DOT_rdy():
      s.recv_wopt[2].rdy = s.s_DOT_recv_wopt_LB_2_RB__DOT_rdy
    s.s_DOT_recv_wopt_LB_3_RB__DOT_rdy = Wire( Bits1 )
    @s.update
    def osignal_s_DOT_recv_wopt_LB_3_RB__DOT_rdy():
      s.recv_wopt[3].rdy = s.s_DOT_recv_wopt_LB_3_RB__DOT_rdy

    @s.update
    def comb_upblk():
      # Set inputs
      _ffi_m.reset[0] = int(s.s_DOT_reset)
      _ffi_m.recv_waddr___05Fen[0][0] = int(s.s_DOT_recv_waddr_LB_0_RB__DOT_en)
      _ffi_m.recv_waddr___05Fen[1][0] = int(s.s_DOT_recv_waddr_LB_1_RB__DOT_en)
      _ffi_m.recv_waddr___05Fen[2][0] = int(s.s_DOT_recv_waddr_LB_2_RB__DOT_en)
      _ffi_m.recv_waddr___05Fen[3][0] = int(s.s_DOT_recv_waddr_LB_3_RB__DOT_en)
      _ffi_m.recv_waddr___05Fmsg[0][0] = int(s.s_DOT_recv_waddr_LB_0_RB__DOT_msg)
      _ffi_m.recv_waddr___05Fmsg[1][0] = int(s.s_DOT_recv_waddr_LB_1_RB__DOT_msg)
      _ffi_m.recv_waddr___05Fmsg[2][0] = int(s.s_DOT_recv_waddr_LB_2_RB__DOT_msg)
      _ffi_m.recv_waddr___05Fmsg[3][0] = int(s.s_DOT_recv_waddr_LB_3_RB__DOT_msg)
      _ffi_m.recv_wopt___05Fen[0][0] = int(s.s_DOT_recv_wopt_LB_0_RB__DOT_en)
      _ffi_m.recv_wopt___05Fen[1][0] = int(s.s_DOT_recv_wopt_LB_1_RB__DOT_en)
      _ffi_m.recv_wopt___05Fen[2][0] = int(s.s_DOT_recv_wopt_LB_2_RB__DOT_en)
      _ffi_m.recv_wopt___05Fen[3][0] = int(s.s_DOT_recv_wopt_LB_3_RB__DOT_en)
      _ffi_m.recv_wopt___05Fmsg[0][0] = int(s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[0:32])
      _ffi_m.recv_wopt___05Fmsg[0][1] = int(s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[32:64])
      _ffi_m.recv_wopt___05Fmsg[0][2] = int(s.s_DOT_recv_wopt_LB_0_RB__DOT_msg[64:77])
      _ffi_m.recv_wopt___05Fmsg[1][0] = int(s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[0:32])
      _ffi_m.recv_wopt___05Fmsg[1][1] = int(s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[32:64])
      _ffi_m.recv_wopt___05Fmsg[1][2] = int(s.s_DOT_recv_wopt_LB_1_RB__DOT_msg[64:77])
      _ffi_m.recv_wopt___05Fmsg[2][0] = int(s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[0:32])
      _ffi_m.recv_wopt___05Fmsg[2][1] = int(s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[32:64])
      _ffi_m.recv_wopt___05Fmsg[2][2] = int(s.s_DOT_recv_wopt_LB_2_RB__DOT_msg[64:77])
      _ffi_m.recv_wopt___05Fmsg[3][0] = int(s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[0:32])
      _ffi_m.recv_wopt___05Fmsg[3][1] = int(s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[32:64])
      _ffi_m.recv_wopt___05Fmsg[3][2] = int(s.s_DOT_recv_wopt_LB_3_RB__DOT_msg[64:77])

      _ffi_inst.eval( _ffi_m )

      # Write all outputs
      s.s_DOT_recv_waddr_LB_0_RB__DOT_rdy = Bits1(_ffi_m.recv_waddr___05Frdy[0][0])
      s.s_DOT_recv_waddr_LB_1_RB__DOT_rdy = Bits1(_ffi_m.recv_waddr___05Frdy[1][0])
      s.s_DOT_recv_waddr_LB_2_RB__DOT_rdy = Bits1(_ffi_m.recv_waddr___05Frdy[2][0])
      s.s_DOT_recv_waddr_LB_3_RB__DOT_rdy = Bits1(_ffi_m.recv_waddr___05Frdy[3][0])
      s.s_DOT_recv_wopt_LB_0_RB__DOT_rdy = Bits1(_ffi_m.recv_wopt___05Frdy[0][0])
      s.s_DOT_recv_wopt_LB_1_RB__DOT_rdy = Bits1(_ffi_m.recv_wopt___05Frdy[1][0])
      s.s_DOT_recv_wopt_LB_2_RB__DOT_rdy = Bits1(_ffi_m.recv_wopt___05Frdy[2][0])
      s.s_DOT_recv_wopt_LB_3_RB__DOT_rdy = Bits1(_ffi_m.recv_wopt___05Frdy[3][0])

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
      return f' clk={s.clk}, reset={s.reset}, recv_waddr[0].en={s.recv_waddr[0].en}, recv_waddr[1].en={s.recv_waddr[1].en}, recv_waddr[2].en={s.recv_waddr[2].en}, recv_waddr[3].en={s.recv_waddr[3].en}, recv_waddr[0].msg={s.recv_waddr[0].msg}, recv_waddr[1].msg={s.recv_waddr[1].msg}, recv_waddr[2].msg={s.recv_waddr[2].msg}, recv_waddr[3].msg={s.recv_waddr[3].msg}, recv_waddr[0].rdy={s.recv_waddr[0].rdy}, recv_waddr[1].rdy={s.recv_waddr[1].rdy}, recv_waddr[2].rdy={s.recv_waddr[2].rdy}, recv_waddr[3].rdy={s.recv_waddr[3].rdy}, recv_wopt[0].en={s.recv_wopt[0].en}, recv_wopt[1].en={s.recv_wopt[1].en}, recv_wopt[2].en={s.recv_wopt[2].en}, recv_wopt[3].en={s.recv_wopt[3].en}, recv_wopt[0].msg={s.recv_wopt[0].msg}, recv_wopt[1].msg={s.recv_wopt[1].msg}, recv_wopt[2].msg={s.recv_wopt[2].msg}, recv_wopt[3].msg={s.recv_wopt[3].msg}, recv_wopt[0].rdy={s.recv_wopt[0].rdy}, recv_wopt[1].rdy={s.recv_wopt[1].rdy}, recv_wopt[2].rdy={s.recv_wopt[2].rdy}, recv_wopt[3].rdy={s.recv_wopt[3].rdy},'

  def internal_line_trace( s ):
    return ''
