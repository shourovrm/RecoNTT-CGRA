"""
==========================================================================
VectorMulComboRTL_test.py
==========================================================================
Translation harness for VectorMulComboRTL functional unit.

Author : Cheng Tan
  Date : April 27, 2022

"""

from pymtl3                         import *
from pymtl3.stdlib.test             import TestSinkCL
from pymtl3.stdlib.test.test_srcs   import TestSrcRTL

from ..VectorMulComboRTL            import VectorMulComboRTL
from ....lib.opt_type               import *
from ....lib.messages               import *

from pymtl3.passes.backends.verilog import TranslationPass, VerilatorImportPass, TranslationImportPass
from pymtl3.passes.PassGroups       import *

#-------------------------------------------------------------------------
# Test harness
#-------------------------------------------------------------------------

class TestHarness( Component ):

  def construct( s, FunctionUnit, DataType, PredicateType, CtrlType,
                 num_inports, num_outports, data_mem_size,
                 src0_msgs, src1_msgs, src_predicate,
                 ctrl_msgs, sink_msgs0 ):

    s.src_in0       = TestSrcRTL( DataType,      src0_msgs      )
    s.src_in1       = TestSrcRTL( DataType,      src1_msgs      )
    s.src_predicate = TestSrcRTL( PredicateType, src_predicate  )
    s.src_opt       = TestSrcRTL( CtrlType,      ctrl_msgs      )
    s.sink_out0     = TestSinkCL( DataType,      sink_msgs0     )

    s.dut = FunctionUnit( DataType, PredicateType, CtrlType,
                          num_inports, num_outports, data_mem_size )

    s.dut.recv_in_count[0] //= 1
    s.dut.recv_in_count[1] //= 1

    connect( s.src_in0.send,       s.dut.recv_in[0]     )
    connect( s.src_in1.send,       s.dut.recv_in[1]     )
    connect( s.src_predicate.send, s.dut.recv_predicate )
    connect( s.src_opt.send,       s.dut.recv_opt       )
    connect( s.dut.send_out[0],    s.sink_out0.recv     )

  def done( s ):
    return s.src_in0.done()  and s.src_in1.done()   and\
           s.src_opt.done()  and s.sink_out0.done()

  def line_trace( s ):
    return s.dut.line_trace()

def run_sim( test_harness, max_cycles=10 ):
  test_harness.elaborate()

  test_harness.dut.verilog_translate_import = True
#  test_harness.apply( TranslationPass() )
#  test_harness = VerilatorImportPass()( test_harness )
  test_harness.dut.config_verilog_import = VerilatorImportConfigs(vl_Wno_list = ['UNSIGNED', 'UNOPTFLAT', 'WIDTH', 'WIDTHCONCAT', 'ALWCOMBORDER'])
  test_harness = TranslationImportPass()(test_harness)

  test_harness.apply( SimulationPass() )
  test_harness.sim_reset()

  # Run simulation
  ncycles = 0
  print()
  print( "{}:{}".format( ncycles, test_harness.line_trace() ))
  while not test_harness.done() and ncycles < max_cycles:
    test_harness.tick()
    ncycles += 1
    print( "{}:{}".format( ncycles, test_harness.line_trace() ))

  # Check timeout
  assert ncycles < max_cycles

  test_harness.tick()
  test_harness.tick()
  test_harness.tick()

def test_vector_mul_combo():
  FU            = VectorMulComboRTL
  DataType      = mk_data( 64, 1 )
  PredType      = mk_predicate( 1, 1 )
  num_inports   = 4
  CtrlType      = mk_ctrl( num_inports )
  num_outports  = 2
  data_mem_size = 8

  FuInType      = mk_bits( clog2( num_inports + 1 ) )
  pickRegister  = [ FuInType( x+1 ) for x in range( num_inports ) ]

  src_in0  = [ DataType(0x3402,1), DataType(0x77,1),   DataType(0x0002,1)  ]
  src_in1  = [ DataType(0x32f3,1), DataType(0x89,1),   DataType(0x0003,1)  ]
  src_pred = [ PredType(1,0),      PredType(1,0),      PredType(1,1 ) ]
  sink_out = [ DataType(0xa59c1e6,1), DataType(0x3faf,1), DataType(0x6, 1) ]
  # sink_out = [ DataType(0x9806,1), DataType(0x3faf,1), DataType(0x6, 1) ]
  src_opt  = [ CtrlType( OPT_VEC_MUL, b1( 1 ), pickRegister ),
               CtrlType( OPT_MUL,     b1( 0 ), pickRegister ),
               CtrlType( OPT_VEC_MUL, b1( 1 ), pickRegister ) ]

  th = TestHarness( FU, DataType, PredType, CtrlType,
                    num_inports, num_outports, data_mem_size,
                    src_in0, src_in1, src_pred, src_opt, sink_out )
  run_sim( th )

