# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VCGRATemplateRTL___05Fb04356ddf53ae174.mk for the caller.

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
	VCGRATemplateRTL___05Fb04356ddf53ae174 \
	VCGRATemplateRTL___05Fb04356ddf53ae174___024root__DepSet_h3db21a11__0 \
	VCGRATemplateRTL___05Fb04356ddf53ae174___024root__DepSet_h8975af52__0 \
	VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03asemaphore__Vclpkg__DepSet_h10038893__0 \
	VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03asemaphore__Vclpkg__DepSet_h75e71cd4__0 \
	VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess__Vclpkg__DepSet_h6cd821f8__0 \
	VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess__Vclpkg__DepSet_h3a1f75ab__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VCGRATemplateRTL___05Fb04356ddf53ae174___024root__Slow \
	VCGRATemplateRTL___05Fb04356ddf53ae174___024root__DepSet_h8975af52__0__Slow \
	VCGRATemplateRTL___05Fb04356ddf53ae174___024unit__Slow \
	VCGRATemplateRTL___05Fb04356ddf53ae174___024unit__DepSet_hffa5bb74__0__Slow \
	VCGRATemplateRTL___05Fb04356ddf53ae174_std__Slow \
	VCGRATemplateRTL___05Fb04356ddf53ae174_std__DepSet_h701a4c02__0__Slow \
	VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03asemaphore__Vclpkg__Slow \
	VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03asemaphore__Vclpkg__DepSet_h75e71cd4__0__Slow \
	VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess__Vclpkg__Slow \
	VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess__Vclpkg__DepSet_h3a1f75ab__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VCGRATemplateRTL___05Fb04356ddf53ae174__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
