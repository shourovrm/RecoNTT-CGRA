// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVectorAdderRTL__65a6399a04a67573.h for the primary calling header

#include "VVectorAdderRTL__65a6399a04a67573.h"
#include "VVectorAdderRTL__65a6399a04a67573__Syms.h"

//==========

void VVectorAdderRTL__65a6399a04a67573::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VVectorAdderRTL__65a6399a04a67573::eval\n"); );
    VVectorAdderRTL__65a6399a04a67573__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VVectorAdderRTL__65a6399a04a67573* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("VectorAdderRTL__65a6399a04a67573.v", 20, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VVectorAdderRTL__65a6399a04a67573::_eval_initial_loop(VVectorAdderRTL__65a6399a04a67573__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("VectorAdderRTL__65a6399a04a67573.v", 20, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VVectorAdderRTL__65a6399a04a67573::_combo__TOP__1(VVectorAdderRTL__65a6399a04a67573__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVectorAdderRTL__65a6399a04a67573::_combo__TOP__1\n"); );
    VVectorAdderRTL__65a6399a04a67573* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->recv_opt___05Frdy = (vlTOPp->send_out___05Frdy
                                 [0U] | (IData)(vlTOPp->recv_opt___05Frdy));
    vlTOPp->recv_const___05Frdy = (vlTOPp->send_out___05Frdy
                                   [0U] | (IData)(vlTOPp->recv_const___05Frdy));
    if ((2U != (0x3fU & (vlTOPp->recv_opt___05Fmsg 
                         >> 0x19U)))) {
        if ((0x19U != (0x3fU & (vlTOPp->recv_opt___05Fmsg 
                                >> 0x19U)))) {
            if ((3U != (0x3fU & (vlTOPp->recv_opt___05Fmsg 
                                 >> 0x19U)))) {
                if ((4U != (0x3fU & (vlTOPp->recv_opt___05Fmsg 
                                     >> 0x19U)))) {
                    if ((0x24U != (0x3fU & (vlTOPp->recv_opt___05Fmsg 
                                            >> 0x19U)))) {
                        if ((0x1fU != (0x3fU & (vlTOPp->recv_opt___05Fmsg 
                                                >> 0x19U)))) {
                            vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT__comb_logic__DOT__unnamedblk3__DOT__j = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT____Vlvbound1 
        = vlTOPp->recv_opt___05Fen;
    vlTOPp->send_out___05Fen[0U] = vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT____Vlvbound1;
    if ((2U != (0x3fU & (vlTOPp->recv_opt___05Fmsg 
                         >> 0x19U)))) {
        if ((0x19U != (0x3fU & (vlTOPp->recv_opt___05Fmsg 
                                >> 0x19U)))) {
            if ((3U != (0x3fU & (vlTOPp->recv_opt___05Fmsg 
                                 >> 0x19U)))) {
                if ((4U != (0x3fU & (vlTOPp->recv_opt___05Fmsg 
                                     >> 0x19U)))) {
                    if ((0x24U != (0x3fU & (vlTOPp->recv_opt___05Fmsg 
                                            >> 0x19U)))) {
                        if ((0x1fU != (0x3fU & (vlTOPp->recv_opt___05Fmsg 
                                                >> 0x19U)))) {
                            vlTOPp->send_out___05Fen[0U] = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->recv_in___05Frdy[0U] = 0U;
    vlTOPp->recv_in___05Frdy[1U] = 0U;
    vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT__carry_in_temp 
        = ((0x1feU & (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT__carry_in_temp)) 
           | (IData)(vlTOPp->carry_in));
    if (vlTOPp->recv_opt___05Fen) {
        if ((0U != (3U & (vlTOPp->recv_opt___05Fmsg 
                          >> 0x14U)))) {
            vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (3U & ((vlTOPp->recv_opt___05Fmsg 
                          >> 0x14U) - (IData)(1U)));
            vlTOPp->recv_in___05Frdy[(1U & (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (3U & (vlTOPp->recv_opt___05Fmsg 
                          >> 0x16U)))) {
            vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (3U & ((vlTOPp->recv_opt___05Fmsg 
                          >> 0x16U) - (IData)(1U)));
            vlTOPp->recv_in___05Frdy[(1U & (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    if ((2U == (0x3fU & (vlTOPp->recv_opt___05Fmsg 
                         >> 0x19U)))) {
        vlTOPp->send_out___05Fmsg[0U] = (0x1ffU & (
                                                   (vlTOPp->recv_in___05Fmsg
                                                    [
                                                    (1U 
                                                     & (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                    + 
                                                    vlTOPp->recv_in___05Fmsg
                                                    [
                                                    (1U 
                                                     & (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in1))]) 
                                                   + (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT__carry_in_temp)));
        if (((IData)(vlTOPp->recv_opt___05Fen) & ((0U 
                                                   == 
                                                   vlTOPp->recv_in_count
                                                   [
                                                   (1U 
                                                    & (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                                                  | (0U 
                                                     == 
                                                     vlTOPp->recv_in_count
                                                     [
                                                     (1U 
                                                      & (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->recv_in___05Frdy[(1U & (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->recv_in___05Frdy[(1U & (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x19U == (0x3fU & (vlTOPp->recv_opt___05Fmsg 
                                >> 0x19U)))) {
            vlTOPp->send_out___05Fmsg[0U] = (0x1ffU 
                                             & ((vlTOPp->recv_in___05Fmsg
                                                 [(1U 
                                                   & (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                 + (IData)(vlTOPp->recv_const___05Fmsg)) 
                                                + (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT__carry_in_temp)));
        } else {
            if ((3U == (0x3fU & (vlTOPp->recv_opt___05Fmsg 
                                 >> 0x19U)))) {
                vlTOPp->send_out___05Fmsg[0U] = (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    vlTOPp->recv_in___05Fmsg
                                                    [
                                                    (1U 
                                                     & (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in0))]));
            } else {
                if ((4U == (0x3fU & (vlTOPp->recv_opt___05Fmsg 
                                     >> 0x19U)))) {
                    vlTOPp->send_out___05Fmsg[0U] = 
                        (0x1ffU & ((vlTOPp->recv_in___05Fmsg
                                    [(1U & (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                    - vlTOPp->recv_in___05Fmsg
                                    [(1U & (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in1))]) 
                                   - (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT__carry_in_temp)));
                    if (((IData)(vlTOPp->recv_opt___05Fen) 
                         & ((0U == vlTOPp->recv_in_count
                             [(1U & (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                            | (0U == vlTOPp->recv_in_count
                               [(1U & (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                        vlTOPp->recv_in___05Frdy[(1U 
                                                  & (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                        vlTOPp->recv_in___05Frdy[(1U 
                                                  & (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                    }
                } else {
                    if ((0x24U == (0x3fU & (vlTOPp->recv_opt___05Fmsg 
                                            >> 0x19U)))) {
                        vlTOPp->send_out___05Fmsg[0U] 
                            = (0x1ffU & ((vlTOPp->recv_in___05Fmsg
                                          [(1U & (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                          - (IData)(vlTOPp->recv_const___05Fmsg)) 
                                         - (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT__carry_in_temp)));
                    } else {
                        if ((0x1fU == (0x3fU & (vlTOPp->recv_opt___05Fmsg 
                                                >> 0x19U)))) {
                            vlTOPp->send_out___05Fmsg[0U] 
                                = vlTOPp->recv_in___05Fmsg
                                [(1U & (IData)(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in0))];
                        }
                    }
                }
            }
        }
    }
    vlTOPp->carry_out = (1U & (vlTOPp->send_out___05Fmsg
                               [0U] >> 8U));
}

void VVectorAdderRTL__65a6399a04a67573::_eval(VVectorAdderRTL__65a6399a04a67573__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVectorAdderRTL__65a6399a04a67573::_eval\n"); );
    VVectorAdderRTL__65a6399a04a67573* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VVectorAdderRTL__65a6399a04a67573::_change_request(VVectorAdderRTL__65a6399a04a67573__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVectorAdderRTL__65a6399a04a67573::_change_request\n"); );
    VVectorAdderRTL__65a6399a04a67573* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VVectorAdderRTL__65a6399a04a67573::_change_request_1(VVectorAdderRTL__65a6399a04a67573__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVectorAdderRTL__65a6399a04a67573::_change_request_1\n"); );
    VVectorAdderRTL__65a6399a04a67573* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->recv_const___05Frdy ^ vlTOPp->__Vchglast__TOP__recv_const___05Frdy)
         | (vlTOPp->recv_opt___05Frdy ^ vlTOPp->__Vchglast__TOP__recv_opt___05Frdy));
    VL_DEBUG_IF( if(__req && ((vlTOPp->recv_const___05Frdy ^ vlTOPp->__Vchglast__TOP__recv_const___05Frdy))) VL_DBG_MSGF("        CHANGE: VectorAdderRTL__65a6399a04a67573.v:29: recv_const__rdy\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->recv_opt___05Frdy ^ vlTOPp->__Vchglast__TOP__recv_opt___05Frdy))) VL_DBG_MSGF("        CHANGE: VectorAdderRTL__65a6399a04a67573.v:35: recv_opt__rdy\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__recv_const___05Frdy = vlTOPp->recv_const___05Frdy;
    vlTOPp->__Vchglast__TOP__recv_opt___05Frdy = vlTOPp->recv_opt___05Frdy;
    return __req;
}

#ifdef VL_DEBUG
void VVectorAdderRTL__65a6399a04a67573::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVectorAdderRTL__65a6399a04a67573::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((carry_in & 0xfeU))) {
        Verilated::overWidthError("carry_in");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((recv_const___05Fen & 0xfeU))) {
        Verilated::overWidthError("recv_const__en");}
    if (VL_UNLIKELY((recv_const___05Fmsg & 0xfe00U))) {
        Verilated::overWidthError("recv_const__msg");}
    if (VL_UNLIKELY((recv_opt___05Fen & 0xfeU))) {
        Verilated::overWidthError("recv_opt__en");}
}
#endif  // VL_DEBUG
