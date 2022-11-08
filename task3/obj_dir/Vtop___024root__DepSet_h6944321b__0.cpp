// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__mytick__DOT__count = vlSelf->top__DOT__mytick__DOT__count;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst1) {
        vlSelf->top__DOT__myf1__DOT__current_state = 0U;
    } else if (vlSelf->top__DOT__tick) {
        vlSelf->top__DOT__myf1__DOT__current_state 
            = vlSelf->top__DOT__myf1__DOT__next_state;
    }
    vlSelf->data_out = (((((((((0U == vlSelf->top__DOT__myf1__DOT__current_state) 
                               | (1U == vlSelf->top__DOT__myf1__DOT__current_state)) 
                              | (2U == vlSelf->top__DOT__myf1__DOT__current_state)) 
                             | (3U == vlSelf->top__DOT__myf1__DOT__current_state)) 
                            | (4U == vlSelf->top__DOT__myf1__DOT__current_state)) 
                           | (5U == vlSelf->top__DOT__myf1__DOT__current_state)) 
                          | (6U == vlSelf->top__DOT__myf1__DOT__current_state)) 
                         | (7U == vlSelf->top__DOT__myf1__DOT__current_state))
                         ? ((0U == vlSelf->top__DOT__myf1__DOT__current_state)
                             ? 0U : ((1U == vlSelf->top__DOT__myf1__DOT__current_state)
                                      ? 1U : ((2U == vlSelf->top__DOT__myf1__DOT__current_state)
                                               ? 3U
                                               : ((3U 
                                                   == vlSelf->top__DOT__myf1__DOT__current_state)
                                                   ? 7U
                                                   : 
                                                  ((4U 
                                                    == vlSelf->top__DOT__myf1__DOT__current_state)
                                                    ? 0xfU
                                                    : 
                                                   ((5U 
                                                     == vlSelf->top__DOT__myf1__DOT__current_state)
                                                     ? 0x1fU
                                                     : 
                                                    ((6U 
                                                      == vlSelf->top__DOT__myf1__DOT__current_state)
                                                      ? 0x3fU
                                                      : 0x7fU)))))))
                         : ((8U == vlSelf->top__DOT__myf1__DOT__current_state)
                             ? 0xffU : 0U));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->top__DOT__tick = 0U;
        vlSelf->__Vdly__top__DOT__mytick__DOT__count 
            = vlSelf->N;
    } else if ((0U == (IData)(vlSelf->top__DOT__mytick__DOT__count))) {
        vlSelf->top__DOT__tick = 1U;
        vlSelf->__Vdly__top__DOT__mytick__DOT__count 
            = vlSelf->N;
    } else {
        vlSelf->__Vdly__top__DOT__mytick__DOT__count 
            = (0xffffU & ((IData)(vlSelf->top__DOT__mytick__DOT__count) 
                          - (IData)(1U)));
        vlSelf->top__DOT__tick = 0U;
    }
    vlSelf->top__DOT__mytick__DOT__count = vlSelf->__Vdly__top__DOT__mytick__DOT__count;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__myf1__DOT__next_state = (((((
                                                   ((((0U 
                                                       == vlSelf->top__DOT__myf1__DOT__current_state) 
                                                      | (1U 
                                                         == vlSelf->top__DOT__myf1__DOT__current_state)) 
                                                     | (2U 
                                                        == vlSelf->top__DOT__myf1__DOT__current_state)) 
                                                    | (3U 
                                                       == vlSelf->top__DOT__myf1__DOT__current_state)) 
                                                   | (4U 
                                                      == vlSelf->top__DOT__myf1__DOT__current_state)) 
                                                  | (5U 
                                                     == vlSelf->top__DOT__myf1__DOT__current_state)) 
                                                 | (6U 
                                                    == vlSelf->top__DOT__myf1__DOT__current_state)) 
                                                | (7U 
                                                   == vlSelf->top__DOT__myf1__DOT__current_state))
                                                ? (
                                                   (0U 
                                                    == vlSelf->top__DOT__myf1__DOT__current_state)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__tick)
                                                     ? 1U
                                                     : vlSelf->top__DOT__myf1__DOT__current_state)
                                                    : 
                                                   ((1U 
                                                     == vlSelf->top__DOT__myf1__DOT__current_state)
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__tick)
                                                      ? 2U
                                                      : vlSelf->top__DOT__myf1__DOT__current_state)
                                                     : 
                                                    ((2U 
                                                      == vlSelf->top__DOT__myf1__DOT__current_state)
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__tick)
                                                       ? 3U
                                                       : vlSelf->top__DOT__myf1__DOT__current_state)
                                                      : 
                                                     ((3U 
                                                       == vlSelf->top__DOT__myf1__DOT__current_state)
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__tick)
                                                        ? 4U
                                                        : vlSelf->top__DOT__myf1__DOT__current_state)
                                                       : 
                                                      ((4U 
                                                        == vlSelf->top__DOT__myf1__DOT__current_state)
                                                        ? 
                                                       ((IData)(vlSelf->top__DOT__tick)
                                                         ? 5U
                                                         : vlSelf->top__DOT__myf1__DOT__current_state)
                                                        : 
                                                       ((5U 
                                                         == vlSelf->top__DOT__myf1__DOT__current_state)
                                                         ? 
                                                        ((IData)(vlSelf->top__DOT__tick)
                                                          ? 6U
                                                          : vlSelf->top__DOT__myf1__DOT__current_state)
                                                         : 
                                                        ((6U 
                                                          == vlSelf->top__DOT__myf1__DOT__current_state)
                                                          ? 
                                                         ((IData)(vlSelf->top__DOT__tick)
                                                           ? 7U
                                                           : vlSelf->top__DOT__myf1__DOT__current_state)
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__tick)
                                                           ? 8U
                                                           : vlSelf->top__DOT__myf1__DOT__current_state))))))))
                                                : (
                                                   (8U 
                                                    == vlSelf->top__DOT__myf1__DOT__current_state)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__tick)
                                                     ? 0U
                                                     : vlSelf->top__DOT__myf1__DOT__current_state)
                                                    : 0U));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst1) & (~ (IData)(vlSelf->__Vclklast__TOP__rst1))))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst1) & (~ (IData)(vlSelf->__Vclklast__TOP__rst1))))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst1 = vlSelf->rst1;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->rst1 & 0xfeU))) {
        Verilated::overWidthError("rst1");}
    if (VL_UNLIKELY((vlSelf->N & 0xfeU))) {
        Verilated::overWidthError("N");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
