// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCGRATemplateRTL__ffe047ca70f33a6c.h for the primary calling header

#include "VCGRATemplateRTL__ffe047ca70f33a6c.h"
#include "VCGRATemplateRTL__ffe047ca70f33a6c__Syms.h"

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_combo__TOP__306(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_combo__TOP__306\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [5U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate 
        = (1U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                          >> 1U)) & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                             [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] 
                                             >> 1U))));
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
    if ((0xeU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [5U] >> 0x35U))))) {
        if (((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                      >> 2U)) == (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] 
                                          >> 2U)))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                             << 1U));
        } else {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                             << 1U));
        }
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [5U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] = 0U;
        }
    } else {
        if ((0x21U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [5U] >> 0x35U))))) {
            if (((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                          >> 2U)) == (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                              [5U] 
                                              >> 2U)))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                       [0U]);
            } else {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                       [0U]);
            }
        } else {
            if ((0xfU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [5U] >> 0x35U))))) {
                if (((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                              >> 2U)) < (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                                 [(3U 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] 
                                                 >> 2U)))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                                     << 1U));
                } else {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                                     << 1U));
                }
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [5U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] = 0U;
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [5U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [5U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[3U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [0U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                           [0U] >> 0x34U)))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    if ((0x11U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [0U] >> 0x35U))))) {
        if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                           [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                           >> 1U)))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                      [
                                                      (3U 
                                                       & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                      >> 2U)))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                   [0U]);
        } else {
            if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                               >> 1U)))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                          >> 2U)))) 
                                 << 2U));
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                       [0U]);
            } else {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                          >> 2U)))) 
                                 << 2U));
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                       [0U]);
            }
        }
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [0U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F0__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F0__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
        if ((1U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                            [0U] >> 0x34U)) & (~ (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                  [0U] 
                                                  >> 1U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x20U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((1U & (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 1U)))
                                               ? (IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                          >> 2U))
                                               : (IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                          [0U] 
                                                          >> 2U))))) 
                             << 2U));
            if ((1U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [0U] >> 0x34U)) & (~ 
                                                   (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                    [0U] 
                                                    >> 1U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [0U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [0U])))) 
                         << 1U));
        if ((0x20U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0U] >> 0x35U))))) {
            if ((1U & (~ (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                          [0U] >> 1U)))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                       [0U]);
            }
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [3U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [0U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [1U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [2U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [3U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U] & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fen
           [3U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [0U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [1U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [2U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [3U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U] & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fen
           [3U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
        [3U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__to_mem_waddr___05Fen = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__to_mem_wdata___05Fen = 0U;
    if ((0xcU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [3U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_raddr___05Frdy
            [3U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fen
            [3U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__from_mem_rdata___05Frdy;
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fmsg 
            = (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                             [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                             >> 2U)));
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fen 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
            [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__from_mem_rdata___05Frdy 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__send_out___05Frdy
            [0U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
            [3U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                        >> 1U))))) 
                         << 1U));
    } else {
        if ((0x1cU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [3U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[0U] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fmsg 
                = (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                 [3U] >> 2U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fen 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_const___05Fen
                [3U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__from_mem_rdata___05Frdy 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__send_out___05Frdy
                [0U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
                [3U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fen
                [3U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[1U] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[2U] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[3U] = 0U;
        } else {
            if ((0xdU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [3U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
                    = ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fen
                        [3U] & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                       & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                       [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))]);
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_waddr___05Frdy
                    [3U];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_wdata___05Frdy
                    [3U];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__to_mem_waddr___05Fen 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__to_mem_wdata___05Fmsg 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__to_mem_wdata___05Fen 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] = 0U;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
                    [3U];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                    = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((1U 
                                                  & ((IData)(
                                                             (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                              >> 1U)) 
                                                     & (IData)(
                                                               (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                                                                [
                                                                (3U 
                                                                 & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                >> 1U)))))) 
                                 << 1U));
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [3U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                        = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                           [0U]);
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                }
            } else {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] = 0U;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] = 0U;
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [3U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [3U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [6U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((7U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                 >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          * (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [6U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x1dU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                        >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              * (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                         [6U] 
                                                         >> 2U))))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                            >> 1U))))) 
                             << 1U));
        } else {
            if ((0x1aU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                            >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(VL_DIV_III(32, (IData)(
                                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                                         [
                                                                         (3U 
                                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                         >> 2U)), (IData)(
                                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                                                [
                                                                                (3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                                >> 2U))))) 
                                 << 2U));
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [6U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                        = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                           [0U]);
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                       >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [6U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [2U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((5U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [2U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((0x1fU >= (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                             >> 2U)))
                                           ? ((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              << (IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                          >> 2U)))
                                           : 0U))) 
                         << 2U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [2U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((6U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                     [2U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((0x1fU 
                                               >= (IData)(
                                                          (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                           >> 2U)))
                                               ? ((IData)(
                                                          (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                           >> 2U)) 
                                                  >> (IData)(
                                                             (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                              >> 2U)))
                                               : 0U))) 
                             << 2U));
            if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
                 [2U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                         | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                            [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                    = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                       [0U]);
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [2U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [2U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [9U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((8U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [9U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          | (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
    } else {
        if ((0xaU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                       [9U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              & (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                         >> 2U))))) 
                             << 2U));
        } else {
            if ((0xbU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [9U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((~ (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 2U))))) 
                                 << 2U));
            } else {
                if ((9U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [9U] >> 0x35U))))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                        = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(
                                                              (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                               >> 2U)) 
                                                      ^ (IData)(
                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                 >> 2U))))) 
                                     << 2U));
                }
            }
        }
    }
    if ((((((8U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                     [9U] >> 0x35U)))) 
            | (0xaU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                         [9U] >> 0x35U))))) 
           | (9U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [9U] >> 0x35U))))) 
          & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
          [9U]) & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F9__recv_in_count
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                   | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F9__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
            = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
               [0U]);
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [9U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [9U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [1U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((2U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [1U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          + (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                           >> 1U)))))) 
                         << 1U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [1U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x19U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [1U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              + (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                         [1U] 
                                                         >> 2U))))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                            >> 1U))))) 
                             << 1U));
        } else {
            if ((3U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                         [1U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(1U) 
                                                  + (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 2U))))) 
                                 << 2U));
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                    = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 1U))))) 
                                 << 1U));
            } else {
                if ((4U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [1U] >> 0x35U))))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                        = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(
                                                              (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                               >> 2U)) 
                                                      - (IData)(
                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                 >> 2U))))) 
                                     << 2U));
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                 >> 1U))))) 
                                     << 1U));
                    if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
                         [1U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                                  [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                                 | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                            = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                               [0U]);
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                    }
                } else {
                    if ((0x1fU == (0x3fU & (IData)(
                                                   (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                    [1U] 
                                                    >> 0x35U))))) {
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                                [0U]) | ((QData)((IData)((IData)(
                                                                 (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                  [
                                                                  (3U 
                                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                  >> 2U)))) 
                                         << 2U));
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                     [
                                                                     (3U 
                                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                     >> 1U))))) 
                                         << 1U));
                    }
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [1U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [1U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [8U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((7U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [8U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          * (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [8U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x1dU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [8U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              * (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                         [8U] 
                                                         >> 2U))))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                            >> 1U))))) 
                             << 1U));
        } else {
            if ((0x1aU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                            [8U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(VL_DIV_III(32, (IData)(
                                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                                         [
                                                                         (3U 
                                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                         >> 2U)), (IData)(
                                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                                                [
                                                                                (3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                                >> 2U))))) 
                                 << 2U));
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [8U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                        = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                           [0U]);
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [8U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [8U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [4U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x2eU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x2eU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2))] = 1U;
        }
    }
    if ((0x1bU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [4U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg[0U] 
            = ((1U == (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                               >> 2U))) ? vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1))]
                : vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2))]);
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [4U] & (((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F4__recv_in_count
                       [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                      | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F4__recv_in_count
                         [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1))])) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F4__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2))] = 0U;
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [4U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [4U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [5U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate 
        = (1U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                          >> 1U)) & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                             [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] 
                                             >> 1U))));
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
    if ((0xeU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [5U] >> 0x35U))))) {
        if (((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                      >> 2U)) == (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] 
                                          >> 2U)))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                             << 1U));
        } else {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                             << 1U));
        }
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [5U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] = 0U;
        }
    } else {
        if ((0x21U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [5U] >> 0x35U))))) {
            if (((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                          >> 2U)) == (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                              [5U] 
                                              >> 2U)))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                       [0U]);
            } else {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                       [0U]);
            }
        } else {
            if ((0xfU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [5U] >> 0x35U))))) {
                if (((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                              >> 2U)) < (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                                 [(3U 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] 
                                                 >> 2U)))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                                     << 1U));
                } else {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                                     << 1U));
                }
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [5U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] = 0U;
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [5U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [5U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[3U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [0U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                           [0U] >> 0x34U)))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    if ((0x11U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [0U] >> 0x35U))))) {
        if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                           [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                           >> 1U)))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                      [
                                                      (3U 
                                                       & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                      >> 2U)))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                   [0U]);
        } else {
            if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                               >> 1U)))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                          >> 2U)))) 
                                 << 2U));
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                       [0U]);
            } else {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                          >> 2U)))) 
                                 << 2U));
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                       [0U]);
            }
        }
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [0U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F0__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F0__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
        if ((1U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                            [0U] >> 0x34U)) & (~ (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                  [0U] 
                                                  >> 1U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x20U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((1U & (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 1U)))
                                               ? (IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                          >> 2U))
                                               : (IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                          [0U] 
                                                          >> 2U))))) 
                             << 2U));
            if ((1U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [0U] >> 0x34U)) & (~ 
                                                   (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                    [0U] 
                                                    >> 1U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [0U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [0U])))) 
                         << 1U));
        if ((0x20U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0U] >> 0x35U))))) {
            if ((1U & (~ (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                          [0U] >> 1U)))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                       [0U]);
            }
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [3U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [0U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [1U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [2U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [3U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U] & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
           [3U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [0U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [1U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [2U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [3U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U] & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
           [3U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
        [3U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__to_mem_waddr___05Fen = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__to_mem_wdata___05Fen = 0U;
    if ((0xcU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [3U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_raddr___05Frdy
            [3U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
            [3U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__from_mem_rdata___05Frdy;
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fmsg 
            = (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                             [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                             >> 2U)));
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fen 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
            [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__from_mem_rdata___05Frdy 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__send_out___05Frdy
            [0U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
            [3U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                        >> 1U))))) 
                         << 1U));
    } else {
        if ((0x1cU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [3U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[0U] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fmsg 
                = (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                 [3U] >> 2U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fen 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_const___05Fen
                [3U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__from_mem_rdata___05Frdy 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__send_out___05Frdy
                [0U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
                [3U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
                [3U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[1U] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[2U] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[3U] = 0U;
        } else {
            if ((0xdU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [3U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
                    = ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fen
                        [3U] & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                       & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                       [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))]);
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_waddr___05Frdy
                    [3U];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_wdata___05Frdy
                    [3U];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__to_mem_waddr___05Fen 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__to_mem_wdata___05Fmsg 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__to_mem_wdata___05Fen 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] = 0U;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
                    [3U];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                    = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((1U 
                                                  & ((IData)(
                                                             (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                              >> 1U)) 
                                                     & (IData)(
                                                               (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                                                                [
                                                                (3U 
                                                                 & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                >> 1U)))))) 
                                 << 1U));
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [3U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                        = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                           [0U]);
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                }
            } else {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] = 0U;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] = 0U;
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [3U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [3U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [6U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((7U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                 >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          * (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [6U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x1dU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                        >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              * (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                         [6U] 
                                                         >> 2U))))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                            >> 1U))))) 
                             << 1U));
        } else {
            if ((0x1aU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                            >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(VL_DIV_III(32, (IData)(
                                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                                         [
                                                                         (3U 
                                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                         >> 2U)), (IData)(
                                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                                                [
                                                                                (3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                                >> 2U))))) 
                                 << 2U));
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [6U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                        = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                           [0U]);
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                       >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [6U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [2U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((5U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [2U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((0x1fU >= (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                             >> 2U)))
                                           ? ((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              << (IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                          >> 2U)))
                                           : 0U))) 
                         << 2U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [2U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((6U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                     [2U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((0x1fU 
                                               >= (IData)(
                                                          (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                           >> 2U)))
                                               ? ((IData)(
                                                          (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                           >> 2U)) 
                                                  >> (IData)(
                                                             (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                              >> 2U)))
                                               : 0U))) 
                             << 2U));
            if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
                 [2U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                         | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                            [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                    = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                       [0U]);
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [2U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [2U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [9U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((8U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [9U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          | (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
    } else {
        if ((0xaU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                       [9U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              & (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                         >> 2U))))) 
                             << 2U));
        } else {
            if ((0xbU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [9U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((~ (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 2U))))) 
                                 << 2U));
            } else {
                if ((9U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [9U] >> 0x35U))))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                        = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(
                                                              (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                               >> 2U)) 
                                                      ^ (IData)(
                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                 >> 2U))))) 
                                     << 2U));
                }
            }
        }
    }
    if ((((((8U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                     [9U] >> 0x35U)))) 
            | (0xaU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                         [9U] >> 0x35U))))) 
           | (9U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [9U] >> 0x35U))))) 
          & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
          [9U]) & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F9__recv_in_count
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                   | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F9__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
            = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
               [0U]);
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [9U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [9U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [1U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((2U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [1U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          + (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                           >> 1U)))))) 
                         << 1U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [1U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x19U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [1U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              + (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                         [1U] 
                                                         >> 2U))))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                            >> 1U))))) 
                             << 1U));
        } else {
            if ((3U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                         [1U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(1U) 
                                                  + (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 2U))))) 
                                 << 2U));
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                    = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 1U))))) 
                                 << 1U));
            } else {
                if ((4U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [1U] >> 0x35U))))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                        = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(
                                                              (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                               >> 2U)) 
                                                      - (IData)(
                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                 >> 2U))))) 
                                     << 2U));
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                 >> 1U))))) 
                                     << 1U));
                    if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
                         [1U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                                  [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                                 | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                            = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                               [0U]);
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                    }
                } else {
                    if ((0x1fU == (0x3fU & (IData)(
                                                   (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                    [1U] 
                                                    >> 0x35U))))) {
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                                [0U]) | ((QData)((IData)((IData)(
                                                                 (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                  [
                                                                  (3U 
                                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                  >> 2U)))) 
                                         << 2U));
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                     [
                                                                     (3U 
                                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                     >> 1U))))) 
                                         << 1U));
                    }
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [1U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [1U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [8U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((7U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [8U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          * (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [8U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x1dU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [8U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              * (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                         [8U] 
                                                         >> 2U))))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                            >> 1U))))) 
                             << 1U));
        } else {
            if ((0x1aU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                            [8U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(VL_DIV_III(32, (IData)(
                                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                                         [
                                                                         (3U 
                                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                         >> 2U)), (IData)(
                                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                                                [
                                                                                (3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                                >> 2U))))) 
                                 << 2U));
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [8U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                        = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                           [0U]);
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [8U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [8U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [4U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x2eU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x2eU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2))] = 1U;
        }
    }
    if ((0x1bU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [4U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg[0U] 
            = ((1U == (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                               >> 2U))) ? vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1))]
                : vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2))]);
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [4U] & (((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F4__recv_in_count
                       [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                      | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F4__recv_in_count
                         [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1))])) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F4__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2))] = 0U;
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [4U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [4U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [5U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate 
        = (1U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                          >> 1U)) & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                             [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] 
                                             >> 1U))));
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
    if ((0xeU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [5U] >> 0x35U))))) {
        if (((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                      >> 2U)) == (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] 
                                          >> 2U)))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                             << 1U));
        } else {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                             << 1U));
        }
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [5U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] = 0U;
        }
    } else {
        if ((0x21U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [5U] >> 0x35U))))) {
            if (((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                          >> 2U)) == (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                              [5U] 
                                              >> 2U)))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                       [0U]);
            } else {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                       [0U]);
            }
        } else {
            if ((0xfU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [5U] >> 0x35U))))) {
                if (((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                              >> 2U)) < (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                                 [(3U 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] 
                                                 >> 2U)))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                                     << 1U));
                } else {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                                     << 1U));
                }
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [5U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] = 0U;
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [5U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [5U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[3U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [0U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                           [0U] >> 0x34U)))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    if ((0x11U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [0U] >> 0x35U))))) {
        if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                           [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                           >> 1U)))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                      [
                                                      (3U 
                                                       & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                      >> 2U)))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                   [0U]);
        } else {
            if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                               >> 1U)))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                          >> 2U)))) 
                                 << 2U));
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                       [0U]);
            } else {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                          >> 2U)))) 
                                 << 2U));
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                       [0U]);
            }
        }
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [0U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F0__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F0__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
        if ((1U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                            [0U] >> 0x34U)) & (~ (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                  [0U] 
                                                  >> 1U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x20U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((1U & (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 1U)))
                                               ? (IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                          >> 2U))
                                               : (IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                          [0U] 
                                                          >> 2U))))) 
                             << 2U));
            if ((1U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [0U] >> 0x34U)) & (~ 
                                                   (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                    [0U] 
                                                    >> 1U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [0U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [0U])))) 
                         << 1U));
        if ((0x20U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0U] >> 0x35U))))) {
            if ((1U & (~ (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                          [0U] >> 1U)))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                       [0U]);
            }
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [3U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [0U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [1U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [2U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [3U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U] & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
           [3U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [0U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [1U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [2U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [3U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U] & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
           [3U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
        [3U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__to_mem_waddr___05Fen = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__to_mem_wdata___05Fen = 0U;
    if ((0xcU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [3U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_raddr___05Frdy
            [3U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
            [3U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__from_mem_rdata___05Frdy;
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fmsg 
            = (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                             [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                             >> 2U)));
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fen 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
            [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__from_mem_rdata___05Frdy 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__send_out___05Frdy
            [0U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
            [3U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                        >> 1U))))) 
                         << 1U));
    } else {
        if ((0x1cU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [3U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[0U] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fmsg 
                = (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                 [3U] >> 2U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fen 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_const___05Fen
                [3U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__from_mem_rdata___05Frdy 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__send_out___05Frdy
                [0U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
                [3U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
                [3U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[1U] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[2U] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[3U] = 0U;
        } else {
            if ((0xdU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [3U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
                    = ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fen
                        [3U] & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                       & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                       [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))]);
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_waddr___05Frdy
                    [3U];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_wdata___05Frdy
                    [3U];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__to_mem_waddr___05Fen 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__to_mem_wdata___05Fmsg 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__to_mem_wdata___05Fen 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] = 0U;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
                    [3U];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                    = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((1U 
                                                  & ((IData)(
                                                             (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                              >> 1U)) 
                                                     & (IData)(
                                                               (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                                                                [
                                                                (3U 
                                                                 & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                >> 1U)))))) 
                                 << 1U));
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [3U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                        = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                           [0U]);
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                }
            } else {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] = 0U;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] = 0U;
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [3U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [3U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [6U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((7U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                 >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          * (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [6U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x1dU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                        >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              * (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                         [6U] 
                                                         >> 2U))))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                            >> 1U))))) 
                             << 1U));
        } else {
            if ((0x1aU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                            >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(VL_DIV_III(32, (IData)(
                                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                                         [
                                                                         (3U 
                                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                         >> 2U)), (IData)(
                                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                                                [
                                                                                (3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                                >> 2U))))) 
                                 << 2U));
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [6U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                        = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                           [0U]);
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                       >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [6U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [2U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((5U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [2U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((0x1fU >= (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                             >> 2U)))
                                           ? ((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              << (IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                          >> 2U)))
                                           : 0U))) 
                         << 2U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [2U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((6U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                     [2U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((0x1fU 
                                               >= (IData)(
                                                          (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                           >> 2U)))
                                               ? ((IData)(
                                                          (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                           >> 2U)) 
                                                  >> (IData)(
                                                             (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                              >> 2U)))
                                               : 0U))) 
                             << 2U));
            if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
                 [2U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                         | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                            [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                    = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                       [0U]);
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [2U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [2U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [9U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((8U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [9U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          | (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
    } else {
        if ((0xaU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                       [9U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              & (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                         >> 2U))))) 
                             << 2U));
        } else {
            if ((0xbU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [9U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((~ (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 2U))))) 
                                 << 2U));
            } else {
                if ((9U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [9U] >> 0x35U))))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                        = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(
                                                              (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                               >> 2U)) 
                                                      ^ (IData)(
                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                 >> 2U))))) 
                                     << 2U));
                }
            }
        }
    }
    if ((((((8U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                     [9U] >> 0x35U)))) 
            | (0xaU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                         [9U] >> 0x35U))))) 
           | (9U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [9U] >> 0x35U))))) 
          & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
          [9U]) & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F9__recv_in_count
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                   | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F9__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
            = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
               [0U]);
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [9U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [9U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [1U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((2U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [1U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          + (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                           >> 1U)))))) 
                         << 1U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [1U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x19U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [1U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              + (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                         [1U] 
                                                         >> 2U))))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                            >> 1U))))) 
                             << 1U));
        } else {
            if ((3U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                         [1U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(1U) 
                                                  + (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 2U))))) 
                                 << 2U));
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                    = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 1U))))) 
                                 << 1U));
            } else {
                if ((4U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [1U] >> 0x35U))))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                        = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(
                                                              (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                               >> 2U)) 
                                                      - (IData)(
                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                 >> 2U))))) 
                                     << 2U));
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                 >> 1U))))) 
                                     << 1U));
                    if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
                         [1U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                                  [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                                 | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                            = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                               [0U]);
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                    }
                } else {
                    if ((0x1fU == (0x3fU & (IData)(
                                                   (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                    [1U] 
                                                    >> 0x35U))))) {
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                                [0U]) | ((QData)((IData)((IData)(
                                                                 (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                  [
                                                                  (3U 
                                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                  >> 2U)))) 
                                         << 2U));
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                     [
                                                                     (3U 
                                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                     >> 1U))))) 
                                         << 1U));
                    }
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [1U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [1U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [8U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((7U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [8U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          * (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [8U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x1dU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [8U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              * (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                         [8U] 
                                                         >> 2U))))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                            >> 1U))))) 
                             << 1U));
        } else {
            if ((0x1aU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                            [8U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(VL_DIV_III(32, (IData)(
                                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                                         [
                                                                         (3U 
                                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                         >> 2U)), (IData)(
                                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                                                [
                                                                                (3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                                >> 2U))))) 
                                 << 2U));
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [8U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                        = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                           [0U]);
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [8U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [8U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [4U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x2eU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x2eU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2))] = 1U;
        }
    }
    if ((0x1bU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [4U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg[0U] 
            = ((1U == (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                               >> 2U))) ? vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1))]
                : vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2))]);
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [4U] & (((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F4__recv_in_count
                       [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                      | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F4__recv_in_count
                         [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1))])) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F4__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2))] = 0U;
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [4U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [4U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [5U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate 
        = (1U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                          >> 1U)) & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                             [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] 
                                             >> 1U))));
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
    if ((0xeU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [5U] >> 0x35U))))) {
        if (((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                      >> 2U)) == (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] 
                                          >> 2U)))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                             << 1U));
        } else {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                             << 1U));
        }
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [5U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] = 0U;
        }
    } else {
        if ((0x21U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [5U] >> 0x35U))))) {
            if (((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                          >> 2U)) == (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                              [5U] 
                                              >> 2U)))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                       [0U]);
            } else {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                       [0U]);
            }
        } else {
            if ((0xfU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [5U] >> 0x35U))))) {
                if (((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                              >> 2U)) < (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                                 [(3U 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] 
                                                 >> 2U)))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                                     << 1U));
                } else {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                                     << 1U));
                }
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [5U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] = 0U;
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [5U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [5U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[3U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [0U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                           [0U] >> 0x34U)))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    if ((0x11U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [0U] >> 0x35U))))) {
        if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                           [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                           >> 1U)))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                      [
                                                      (3U 
                                                       & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                      >> 2U)))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                   [0U]);
        } else {
            if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                               >> 1U)))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                          >> 2U)))) 
                                 << 2U));
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                       [0U]);
            } else {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                          >> 2U)))) 
                                 << 2U));
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                       [0U]);
            }
        }
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [0U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F0__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F0__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
        if ((1U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                            [0U] >> 0x34U)) & (~ (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                  [0U] 
                                                  >> 1U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x20U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((1U & (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 1U)))
                                               ? (IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                          >> 2U))
                                               : (IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                          [0U] 
                                                          >> 2U))))) 
                             << 2U));
            if ((1U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [0U] >> 0x34U)) & (~ 
                                                   (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                    [0U] 
                                                    >> 1U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [0U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [0U])))) 
                         << 1U));
        if ((0x20U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0U] >> 0x35U))))) {
            if ((1U & (~ (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                          [0U] >> 1U)))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                       [0U]);
            }
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [3U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [0U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [1U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [2U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [3U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U] & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
           [3U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [0U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [1U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [2U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [3U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U] & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
           [3U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
        [3U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__to_mem_waddr___05Fen = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__to_mem_wdata___05Fen = 0U;
    if ((0xcU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [3U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_raddr___05Frdy
            [3U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
            [3U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__from_mem_rdata___05Frdy;
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fmsg 
            = (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                             [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                             >> 2U)));
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fen 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
            [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__from_mem_rdata___05Frdy 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__send_out___05Frdy
            [0U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
            [3U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                        >> 1U))))) 
                         << 1U));
    } else {
        if ((0x1cU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [3U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[0U] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fmsg 
                = (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                 [3U] >> 2U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fen 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_const___05Fen
                [3U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__from_mem_rdata___05Frdy 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__send_out___05Frdy
                [0U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
                [3U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
                [3U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[1U] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[2U] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[3U] = 0U;
        } else {
            if ((0xdU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [3U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
                    = ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fen
                        [3U] & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                       & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                       [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))]);
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_waddr___05Frdy
                    [3U];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_wdata___05Frdy
                    [3U];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__to_mem_waddr___05Fen 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__to_mem_wdata___05Fmsg 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__to_mem_wdata___05Fen 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] = 0U;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
                    [3U];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                    = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((1U 
                                                  & ((IData)(
                                                             (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                              >> 1U)) 
                                                     & (IData)(
                                                               (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                                                                [
                                                                (3U 
                                                                 & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                >> 1U)))))) 
                                 << 1U));
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [3U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                        = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                           [0U]);
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                }
            } else {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] = 0U;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] = 0U;
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [3U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [3U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [6U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((7U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                 >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          * (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [6U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x1dU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                        >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              * (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                         [6U] 
                                                         >> 2U))))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                            >> 1U))))) 
                             << 1U));
        } else {
            if ((0x1aU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                            >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(VL_DIV_III(32, (IData)(
                                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                                         [
                                                                         (3U 
                                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                         >> 2U)), (IData)(
                                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                                                [
                                                                                (3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                                >> 2U))))) 
                                 << 2U));
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [6U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                        = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                           [0U]);
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                       >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [6U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [2U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((5U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [2U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((0x1fU >= (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                             >> 2U)))
                                           ? ((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              << (IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                          >> 2U)))
                                           : 0U))) 
                         << 2U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [2U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((6U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                     [2U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((0x1fU 
                                               >= (IData)(
                                                          (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                           >> 2U)))
                                               ? ((IData)(
                                                          (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                           >> 2U)) 
                                                  >> (IData)(
                                                             (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                              >> 2U)))
                                               : 0U))) 
                             << 2U));
            if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
                 [2U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                         | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                            [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                    = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                       [0U]);
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [2U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [2U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [9U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((8U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [9U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          | (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
    } else {
        if ((0xaU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                       [9U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              & (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                         >> 2U))))) 
                             << 2U));
        } else {
            if ((0xbU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [9U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((~ (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 2U))))) 
                                 << 2U));
            } else {
                if ((9U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [9U] >> 0x35U))))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                        = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(
                                                              (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                               >> 2U)) 
                                                      ^ (IData)(
                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                 >> 2U))))) 
                                     << 2U));
                }
            }
        }
    }
    if ((((((8U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                     [9U] >> 0x35U)))) 
            | (0xaU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                         [9U] >> 0x35U))))) 
           | (9U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [9U] >> 0x35U))))) 
          & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
          [9U]) & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F9__recv_in_count
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                   | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F9__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
            = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
               [0U]);
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [9U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [9U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [1U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((2U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [1U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          + (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                           >> 1U)))))) 
                         << 1U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [1U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x19U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [1U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              + (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                         [1U] 
                                                         >> 2U))))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                            >> 1U))))) 
                             << 1U));
        } else {
            if ((3U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                         [1U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(1U) 
                                                  + (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 2U))))) 
                                 << 2U));
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                    = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 1U))))) 
                                 << 1U));
            } else {
                if ((4U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [1U] >> 0x35U))))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                        = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(
                                                              (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                               >> 2U)) 
                                                      - (IData)(
                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                 >> 2U))))) 
                                     << 2U));
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                 >> 1U))))) 
                                     << 1U));
                    if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
                         [1U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                                  [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                                 | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                            = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                               [0U]);
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                    }
                } else {
                    if ((0x1fU == (0x3fU & (IData)(
                                                   (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                    [1U] 
                                                    >> 0x35U))))) {
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                                [0U]) | ((QData)((IData)((IData)(
                                                                 (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                  [
                                                                  (3U 
                                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                  >> 2U)))) 
                                         << 2U));
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                     [
                                                                     (3U 
                                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                     >> 1U))))) 
                                         << 1U));
                    }
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [1U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [1U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [8U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((7U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [8U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          * (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [8U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x1dU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [8U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              * (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                         [8U] 
                                                         >> 2U))))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                            >> 1U))))) 
                             << 1U));
        } else {
            if ((0x1aU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                            [8U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(VL_DIV_III(32, (IData)(
                                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                                         [
                                                                         (3U 
                                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                         >> 2U)), (IData)(
                                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                                                [
                                                                                (3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                                >> 2U))))) 
                                 << 2U));
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [8U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                        = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                           [0U]);
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [8U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [8U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [4U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x2eU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x2eU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2))] = 1U;
        }
    }
    if ((0x1bU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [4U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg[0U] 
            = ((1U == (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                               >> 2U))) ? vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1))]
                : vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2))]);
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [4U] & (((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F4__recv_in_count
                       [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                      | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F4__recv_in_count
                         [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1))])) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F4__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2))] = 0U;
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [4U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [4U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [5U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate 
        = (1U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                          >> 1U)) & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                             [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] 
                                             >> 1U))));
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
    if ((0xeU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [5U] >> 0x35U))))) {
        if (((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                      >> 2U)) == (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] 
                                          >> 2U)))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                             << 1U));
        } else {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                             << 1U));
        }
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [5U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] = 0U;
        }
    } else {
        if ((0x21U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [5U] >> 0x35U))))) {
            if (((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                          >> 2U)) == (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                              [5U] 
                                              >> 2U)))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                       [0U]);
            } else {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                       [0U]);
            }
        } else {
            if ((0xfU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [5U] >> 0x35U))))) {
                if (((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                              >> 2U)) < (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                                 [(3U 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] 
                                                 >> 2U)))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                                     << 1U));
                } else {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                                     << 1U));
                }
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [5U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] = 0U;
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [5U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [5U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[3U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [0U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                           [0U] >> 0x34U)))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    if ((0x11U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [0U] >> 0x35U))))) {
        if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                           [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                           >> 1U)))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                      [
                                                      (3U 
                                                       & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                      >> 2U)))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                   [0U]);
        } else {
            if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                               >> 1U)))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                          >> 2U)))) 
                                 << 2U));
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                       [0U]);
            } else {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                          >> 2U)))) 
                                 << 2U));
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                       [0U]);
            }
        }
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [0U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F0__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F0__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
        if ((1U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                            [0U] >> 0x34U)) & (~ (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                  [0U] 
                                                  >> 1U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x20U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((1U & (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 1U)))
                                               ? (IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                          >> 2U))
                                               : (IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                          [0U] 
                                                          >> 2U))))) 
                             << 2U));
            if ((1U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [0U] >> 0x34U)) & (~ 
                                                   (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                    [0U] 
                                                    >> 1U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [0U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [0U])))) 
                         << 1U));
        if ((0x20U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0U] >> 0x35U))))) {
            if ((1U & (~ (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                          [0U] >> 1U)))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                       [0U]);
            }
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [3U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [0U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [1U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [2U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [3U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U] & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
           [3U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [0U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [1U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [2U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [3U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U] & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
           [3U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
        [3U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__to_mem_waddr___05Fen = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__to_mem_wdata___05Fen = 0U;
    if ((0xcU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [3U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Fto_mem_raddr___05Frdy
            [3U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
            [3U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__from_mem_rdata___05Frdy;
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fmsg 
            = (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                             [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                             >> 2U)));
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fen 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
            [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__from_mem_rdata___05Frdy 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__send_out___05Frdy
            [0U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
            [3U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                        >> 1U))))) 
                         << 1U));
    } else {
        if ((0x1cU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [3U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[0U] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fmsg 
                = (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                 [3U] >> 2U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fen 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_const___05Fen
                [3U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__from_mem_rdata___05Frdy 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__send_out___05Frdy
                [0U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
                [3U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
                [3U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[1U] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[2U] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[3U] = 0U;
        } else {
            if ((0xdU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [3U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
                    = ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fen
                        [3U] & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                       & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                       [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))]);
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Fto_mem_waddr___05Frdy
                    [3U];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Fto_mem_wdata___05Frdy
                    [3U];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__to_mem_waddr___05Fen 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__to_mem_wdata___05Fmsg 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__to_mem_wdata___05Fen 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] = 0U;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
                    [3U];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                    = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((1U 
                                                  & ((IData)(
                                                             (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                              >> 1U)) 
                                                     & (IData)(
                                                               (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                                                                [
                                                                (3U 
                                                                 & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                >> 1U)))))) 
                                 << 1U));
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [3U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellinp__fu___05F3__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                        = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                           [0U]);
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                }
            } else {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] = 0U;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] = 0U;
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [3U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [3U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [6U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((7U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                 >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          * (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [6U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x1dU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                        >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              * (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                         [6U] 
                                                         >> 2U))))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                            >> 1U))))) 
                             << 1U));
        } else {
            if ((0x1aU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                            >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(VL_DIV_III(32, (IData)(
                                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                                         [
                                                                         (3U 
                                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                         >> 2U)), (IData)(
                                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                                                [
                                                                                (3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                                >> 2U))))) 
                                 << 2U));
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [6U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                        = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                           [0U]);
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                       >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [6U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [2U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((5U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [2U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((0x1fU >= (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                             >> 2U)))
                                           ? ((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              << (IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                          >> 2U)))
                                           : 0U))) 
                         << 2U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [2U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((6U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                     [2U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((0x1fU 
                                               >= (IData)(
                                                          (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                           >> 2U)))
                                               ? ((IData)(
                                                          (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                           >> 2U)) 
                                                  >> (IData)(
                                                             (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                              >> 2U)))
                                               : 0U))) 
                             << 2U));
            if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
                 [2U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                         | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                            [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                    = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                       [0U]);
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [2U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [2U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [9U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((8U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [9U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          | (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
    } else {
        if ((0xaU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                       [9U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              & (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                         >> 2U))))) 
                             << 2U));
        } else {
            if ((0xbU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [9U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((~ (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 2U))))) 
                                 << 2U));
            } else {
                if ((9U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [9U] >> 0x35U))))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                        = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(
                                                              (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                               >> 2U)) 
                                                      ^ (IData)(
                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                 >> 2U))))) 
                                     << 2U));
                }
            }
        }
    }
    if ((((((8U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                     [9U] >> 0x35U)))) 
            | (0xaU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                         [9U] >> 0x35U))))) 
           | (9U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [9U] >> 0x35U))))) 
          & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
          [9U]) & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F9__recv_in_count
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                   | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F9__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
            = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
               [0U]);
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [9U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [9U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [1U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((2U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [1U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          + (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                           >> 1U)))))) 
                         << 1U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [1U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x19U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [1U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              + (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                         [1U] 
                                                         >> 2U))))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                            >> 1U))))) 
                             << 1U));
        } else {
            if ((3U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                         [1U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(1U) 
                                                  + (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 2U))))) 
                                 << 2U));
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                    = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 1U))))) 
                                 << 1U));
            } else {
                if ((4U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [1U] >> 0x35U))))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                        = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(
                                                              (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                               >> 2U)) 
                                                      - (IData)(
                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                 >> 2U))))) 
                                     << 2U));
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                 >> 1U))))) 
                                     << 1U));
                    if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
                         [1U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                                  [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                                 | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                            = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                               [0U]);
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                    }
                } else {
                    if ((0x1fU == (0x3fU & (IData)(
                                                   (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                    [1U] 
                                                    >> 0x35U))))) {
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                                [0U]) | ((QData)((IData)((IData)(
                                                                 (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                  [
                                                                  (3U 
                                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                  >> 2U)))) 
                                         << 2U));
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                     [
                                                                     (3U 
                                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                     >> 1U))))) 
                                         << 1U));
                    }
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [1U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [1U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [8U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((7U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [8U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          * (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [8U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x1dU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [8U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              * (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                         [8U] 
                                                         >> 2U))))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                            >> 1U))))) 
                             << 1U));
        } else {
            if ((0x1aU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                            [8U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(VL_DIV_III(32, (IData)(
                                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                                         [
                                                                         (3U 
                                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                         >> 2U)), (IData)(
                                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                                                [
                                                                                (3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                                >> 2U))))) 
                                 << 2U));
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [8U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                        = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                           [0U]);
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [8U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [8U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [4U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x2eU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [4U] >> 0x2eU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2))] = 1U;
        }
    }
    if ((0x1bU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [4U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg[0U] 
            = ((1U == (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                               >> 2U))) ? vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1))]
                : vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2))]);
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [4U] & (((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F4__recv_in_count
                       [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                      | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F4__recv_in_count
                         [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1))])) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F4__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F4__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F4__DOT_____05Ftmpvar___05Fcomb_logic_in2))] = 0U;
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [4U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F4__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [4U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [5U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [5U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate 
        = (1U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                          >> 1U)) & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                             [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] 
                                             >> 1U))));
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
    if ((0xeU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [5U] >> 0x35U))))) {
        if (((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                      >> 2U)) == (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] 
                                          >> 2U)))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                             << 1U));
        } else {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                             << 1U));
        }
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [5U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] = 0U;
        }
    } else {
        if ((0x21U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [5U] >> 0x35U))))) {
            if (((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                          >> 2U)) == (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                              [5U] 
                                              >> 2U)))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                       [0U]);
            } else {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                       [0U]);
            }
        } else {
            if ((0xfU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [5U] >> 0x35U))))) {
                if (((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] 
                              >> 2U)) < (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F5__recv_in___05Fmsg
                                                 [(3U 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] 
                                                 >> 2U)))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 4ULL;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                                     << 1U));
                } else {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] = 0ULL;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
                        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_predicate)) 
                                     << 1U));
                }
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [5U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F5__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F5__DOT_____05Ftmpvar___05Fread_reg_in1))] = 0U;
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [5U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F5__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [5U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[3U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [0U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                           [0U] >> 0x34U)))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [0U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    if ((0x11U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                    [0U] >> 0x35U))))) {
        if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                           [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                           >> 1U)))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((IData)(
                                                     (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                      [
                                                      (3U 
                                                       & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                      >> 2U)))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                   [0U]);
        } else {
            if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                               [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                               >> 1U)))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                          >> 2U)))) 
                                 << 2U));
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                       [0U]);
            } else {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                          >> 2U)))) 
                                 << 2U));
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                       [0U]);
            }
        }
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [0U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F0__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F0__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
        if ((1U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                            [0U] >> 0x34U)) & (~ (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                  [0U] 
                                                  >> 1U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__recv_predicate___05Frdy = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x20U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((1U & (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 1U)))
                                               ? (IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F0__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                          >> 2U))
                                               : (IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                          [0U] 
                                                          >> 2U))))) 
                             << 2U));
            if ((1U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                [0U] >> 0x34U)) & (~ 
                                                   (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                    [0U] 
                                                    >> 1U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [0U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [0U])))) 
                         << 1U));
        if ((0x20U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [0U] >> 0x35U))))) {
            if ((1U & (~ (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                          [0U] >> 1U)))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg[0U] 
                    = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F0__send_out___05Fmsg
                       [0U]);
            }
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [3U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [3U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [0U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [1U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [2U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [3U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [0U] & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
           [3U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [0U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [1U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [2U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
           [3U] | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] 
        = (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen
           [1U] & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
           [3U]);
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
        [3U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__to_mem_waddr___05Fen = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__to_mem_wdata___05Fen = 0U;
    if ((0xcU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                   [3U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Fto_mem_raddr___05Frdy
            [3U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
            [3U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__from_mem_rdata___05Frdy;
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fmsg 
            = (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                             [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                             >> 2U)));
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fen 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
            [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__from_mem_rdata___05Frdy 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__send_out___05Frdy
            [0U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
            [3U];
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                                                        [
                                                        (3U 
                                                         & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                        >> 1U))))) 
                         << 1U));
    } else {
        if ((0x1cU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [3U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[0U] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fmsg 
                = (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                 [3U] >> 2U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__to_mem_raddr___05Fen 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_const___05Fen
                [3U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__from_mem_rdata___05Frdy 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__send_out___05Frdy
                [0U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
                [3U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
                = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
                [3U];
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[1U] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                = (2ULL | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[2U] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[3U] = 0U;
        } else {
            if ((0xdU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [3U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] 
                    = ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fen
                        [3U] & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                       & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                       [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))]);
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Fto_mem_waddr___05Frdy
                    [3U];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Fto_mem_wdata___05Frdy
                    [3U];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__to_mem_waddr___05Fen 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__to_mem_wdata___05Fmsg 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__to_mem_wdata___05Fen 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fen
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] = 0U;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                    = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fmsg
                    [3U];
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                    = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((1U 
                                                  & ((IData)(
                                                             (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                              >> 1U)) 
                                                     & (IData)(
                                                               (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fmsg
                                                                [
                                                                (3U 
                                                                 & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                >> 1U)))))) 
                                 << 1U));
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [3U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellinp__fu___05F3__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
                        = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                           [0U]);
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                }
            } else {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[0U] = 0U;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fen[1U] = 0U;
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [3U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT____Vcellout__fu___05F3__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [3U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [6U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                  >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((7U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                 >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          * (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [6U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x1dU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                        >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              * (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                         [6U] 
                                                         >> 2U))))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                            >> 1U))))) 
                             << 1U));
        } else {
            if ((0x1aU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                                            >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(VL_DIV_III(32, (IData)(
                                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                                         [
                                                                         (3U 
                                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                         >> 2U)), (IData)(
                                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in___05Fmsg
                                                                                [
                                                                                (3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                                >> 2U))))) 
                                 << 2U));
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [6U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellinp__Fu0__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
                        = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                           [0U]);
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT__Fu0___05Frecv_opt___05Fmsg 
                       >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05F6__DOT____Vcellout__Fu0__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [6U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [2U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [2U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((5U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [2U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((0x1fU >= (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                             >> 2U)))
                                           ? ((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              << (IData)(
                                                         (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                          [
                                                          (3U 
                                                           & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                          >> 2U)))
                                           : 0U))) 
                         << 2U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [2U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((6U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                     [2U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((0x1fU 
                                               >= (IData)(
                                                          (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                           >> 2U)))
                                               ? ((IData)(
                                                          (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                           >> 2U)) 
                                                  >> (IData)(
                                                             (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F2__recv_in___05Fmsg
                                                              [
                                                              (3U 
                                                               & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                              >> 2U)))
                                               : 0U))) 
                             << 2U));
            if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fen
                 [2U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                          [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                         | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F2__recv_in_count
                            [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
                    = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                       [0U]);
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F2__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [2U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F2__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [2U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [9U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [9U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((8U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [9U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          | (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
    } else {
        if ((0xaU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                       [9U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              & (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                         >> 2U))))) 
                             << 2U));
        } else {
            if ((0xbU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                           [9U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((~ (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 2U))))) 
                                 << 2U));
            } else {
                if ((9U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [9U] >> 0x35U))))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
                        = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(
                                                              (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                               >> 2U)) 
                                                      ^ (IData)(
                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F9__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                 >> 2U))))) 
                                     << 2U));
                }
            }
        }
    }
    if ((((((8U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                     [9U] >> 0x35U)))) 
            | (0xaU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                         [9U] >> 0x35U))))) 
           | (9U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                      [9U] >> 0x35U))))) 
          & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fen
          [9U]) & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F9__recv_in_count
                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                   | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F9__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
            = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
               [0U]);
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F9__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [9U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [9U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [1U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [1U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((2U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [1U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          + (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                         [
                                                         (3U 
                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                           [
                                                           (3U 
                                                            & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                           >> 1U)))))) 
                         << 1U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [1U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x19U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [1U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              + (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                         [1U] 
                                                         >> 2U))))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                            >> 1U))))) 
                             << 1U));
        } else {
            if ((3U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                         [1U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(((IData)(1U) 
                                                  + (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 2U))))) 
                                 << 2U));
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                    = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                        [0U]) | ((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                             [
                                                             (3U 
                                                              & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                             >> 1U))))) 
                                 << 1U));
            } else {
                if ((4U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [1U] >> 0x35U))))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                        = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     ((IData)(
                                                              (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                               [
                                                               (3U 
                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                               >> 2U)) 
                                                      - (IData)(
                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                 >> 2U))))) 
                                     << 2U));
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                            [0U]) | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                 [
                                                                 (3U 
                                                                  & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                 >> 1U))))) 
                                     << 1U));
                    if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fen
                         [1U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                                  [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                                 | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F1__recv_in_count
                                    [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                            = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                               [0U]);
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                    }
                } else {
                    if ((0x1fU == (0x3fU & (IData)(
                                                   (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                    [1U] 
                                                    >> 0x35U))))) {
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                                [0U]) | ((QData)((IData)((IData)(
                                                                 (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                  [
                                                                  (3U 
                                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                  >> 2U)))) 
                                         << 2U));
                        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
                            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                                [0U]) | ((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F1__recv_in___05Fmsg
                                                                     [
                                                                     (3U 
                                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F1__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                     >> 1U))))) 
                                         << 1U));
                    }
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [1U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F1__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [1U])))) 
                         << 1U));
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1 = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[0U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[1U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[2U] = 0U;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[3U] = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fen
        [8U]) {
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x28U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x28U)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 1U;
        }
        if ((0U != (7U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x2bU))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1 
                = (7U & ((IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                  [8U] >> 0x2bU)) - (IData)(1U)));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 1U;
        }
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
        = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
            [0U]) | ((QData)((IData)((1U & ((IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                       >> 1U)))))) 
                     << 1U));
    if ((7U == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                 [8U] >> 0x35U))))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
            = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                [0U]) | ((QData)((IData)(((IData)((
                                                   vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                   >> 2U)) 
                                          * (IData)(
                                                    (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                     [
                                                     (3U 
                                                      & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                     >> 2U))))) 
                         << 2U));
        if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fen
             [8U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                      [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                     | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                        [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                   [0U]);
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
        }
    } else {
        if ((0x1dU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [8U] >> 0x35U))))) {
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                    [0U]) | ((QData)((IData)(((IData)(
                                                      (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                       [
                                                       (3U 
                                                        & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                       >> 2U)) 
                                              * (IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_const___05Fmsg
                                                         [8U] 
                                                         >> 2U))))) 
                             << 2U));
            vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                    [0U]) | ((QData)((IData)((1U & (IData)(
                                                           (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                            [
                                                            (3U 
                                                             & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                            >> 1U))))) 
                             << 1U));
        } else {
            if ((0x1aU == (0x3fU & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                            [8U] >> 0x35U))))) {
                vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                    = ((3ULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                        [0U]) | ((QData)((IData)(VL_DIV_III(32, (IData)(
                                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                                         [
                                                                         (3U 
                                                                          & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] 
                                                                         >> 2U)), (IData)(
                                                                                (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F8__recv_in___05Fmsg
                                                                                [
                                                                                (3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] 
                                                                                >> 2U))))) 
                                 << 2U));
                if ((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fen
                     [8U] & ((0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                              [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))]) 
                             | (0U == vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellinp__fu___05F8__recv_in_count
                                [(3U & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))])))) {
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in0))] = 0U;
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
                        = (0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                           [0U]);
                    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__recv_in___05Frdy[(3U 
                                                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05F8__DOT_____05Ftmpvar___05Fcomb_logic_in1))] = 0U;
                }
            }
        }
    }
    if ((1U & (IData)((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                       [8U] >> 0x34U)))) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg[0U] 
            = ((0x3fffffffdULL & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                [0U]) | ((QData)((IData)((1U & ((IData)(
                                                        (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vcellout__fu___05F8__send_out___05Fmsg
                                                         [0U] 
                                                         >> 1U)) 
                                                & vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg
                                                [8U])))) 
                         << 1U));
    }
}
