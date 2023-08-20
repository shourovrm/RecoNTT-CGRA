# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VCGRATemplateRTL__ffe047ca70f33a6c.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (from --threads, --trace-threads or use of classes)
VM_C11 = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VCGRATemplateRTL__ffe047ca70f33a6c \
	VCGRATemplateRTL__ffe047ca70f33a6c__1 \
	VCGRATemplateRTL__ffe047ca70f33a6c__2 \
	VCGRATemplateRTL__ffe047ca70f33a6c__3 \
	VCGRATemplateRTL__ffe047ca70f33a6c__4 \
	VCGRATemplateRTL__ffe047ca70f33a6c__5 \
	VCGRATemplateRTL__ffe047ca70f33a6c__6 \
	VCGRATemplateRTL__ffe047ca70f33a6c__7 \
	VCGRATemplateRTL__ffe047ca70f33a6c__8 \
	VCGRATemplateRTL__ffe047ca70f33a6c__9 \
	VCGRATemplateRTL__ffe047ca70f33a6c__10 \
	VCGRATemplateRTL__ffe047ca70f33a6c__11 \
	VCGRATemplateRTL__ffe047ca70f33a6c__12 \
	VCGRATemplateRTL__ffe047ca70f33a6c__13 \
	VCGRATemplateRTL__ffe047ca70f33a6c__14 \
	VCGRATemplateRTL__ffe047ca70f33a6c__15 \
	VCGRATemplateRTL__ffe047ca70f33a6c__16 \
	VCGRATemplateRTL__ffe047ca70f33a6c__17 \
	VCGRATemplateRTL__ffe047ca70f33a6c__18 \
	VCGRATemplateRTL__ffe047ca70f33a6c__19 \
	VCGRATemplateRTL__ffe047ca70f33a6c___024unit \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VCGRATemplateRTL__ffe047ca70f33a6c__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__1__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__2__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__3__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__4__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__5__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__6__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__7__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__8__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__9__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__10__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__11__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__12__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__13__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__14__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__15__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__16__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__17__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__18__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__19__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c___024unit__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VCGRATemplateRTL__ffe047ca70f33a6c__Trace \
	VCGRATemplateRTL__ffe047ca70f33a6c__Trace__1 \
	VCGRATemplateRTL__ffe047ca70f33a6c__Trace__2 \
	VCGRATemplateRTL__ffe047ca70f33a6c__Trace__3 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VCGRATemplateRTL__ffe047ca70f33a6c__Syms \
	VCGRATemplateRTL__ffe047ca70f33a6c__Trace__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__Trace__1__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__Trace__2__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__Trace__3__Slow \
	VCGRATemplateRTL__ffe047ca70f33a6c__Trace__4__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
