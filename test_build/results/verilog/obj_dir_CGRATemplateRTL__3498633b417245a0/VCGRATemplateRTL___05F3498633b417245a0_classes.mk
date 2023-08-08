# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VCGRATemplateRTL___05F3498633b417245a0.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VCGRATemplateRTL___05F3498633b417245a0 \
	VCGRATemplateRTL___05F3498633b417245a0___024root__DepSet_h94594fa9__0 \
	VCGRATemplateRTL___05F3498633b417245a0___024root__DepSet_ha8934123__0 \
	VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore__Vclpkg__DepSet_h466f419e__0 \
	VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore__Vclpkg__DepSet_h5a653354__0 \
	VCGRATemplateRTL___05F3498633b417245a0_std__03a__03aprocess__Vclpkg__DepSet_h4a921af1__0 \
	VCGRATemplateRTL___05F3498633b417245a0_std__03a__03aprocess__Vclpkg__DepSet_h4dda6e6b__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VCGRATemplateRTL___05F3498633b417245a0___024root__Slow \
	VCGRATemplateRTL___05F3498633b417245a0___024root__DepSet_ha8934123__0__Slow \
	VCGRATemplateRTL___05F3498633b417245a0___024unit__Slow \
	VCGRATemplateRTL___05F3498633b417245a0___024unit__DepSet_ha909a46a__0__Slow \
	VCGRATemplateRTL___05F3498633b417245a0_std__Slow \
	VCGRATemplateRTL___05F3498633b417245a0_std__DepSet_h17fb9db2__0__Slow \
	VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore__Vclpkg__Slow \
	VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore__Vclpkg__DepSet_h5a653354__0__Slow \
	VCGRATemplateRTL___05F3498633b417245a0_std__03a__03aprocess__Vclpkg__Slow \
	VCGRATemplateRTL___05F3498633b417245a0_std__03a__03aprocess__Vclpkg__DepSet_h4dda6e6b__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VCGRATemplateRTL___05F3498633b417245a0__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
