; ModuleID = '../results/kernel.bc'
source_filename = "../kernels/fir-adder.cpp"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@input = dso_local local_unnamed_addr global [32 x float] zeroinitializer, align 16
@output = dso_local local_unnamed_addr global [32 x float] zeroinitializer, align 16
@coefficients = dso_local local_unnamed_addr global [32 x float] [float 2.500000e-01, float 1.500000e+00, float 3.750000e+00, float -2.250000e+00, float 5.000000e-01, float 7.500000e-01, float -3.000000e+00, float 1.250000e+00, float 2.500000e-01, float 1.500000e+00, float 3.750000e+00, float -2.250000e+00, float 5.000000e-01, float 7.500000e-01, float -3.000000e+00, float 1.250000e+00, float 2.500000e-01, float 1.500000e+00, float 3.750000e+00, float -2.250000e+00, float 5.000000e-01, float 7.500000e-01, float -3.000000e+00, float 1.250000e+00, float 2.500000e-01, float 1.500000e+00, float 3.750000e+00, float -2.250000e+00, float 5.000000e-01, float 7.500000e-01, float -3.000000e+00, float 1.250000e+00], align 16

; Function Attrs: nofree norecurse nounwind uwtable mustprogress
define dso_local i32 @main() local_unnamed_addr #0 {
  br label %1

1:                                                ; preds = %1, %0
  %2 = phi i64 [ 0, %0 ], [ %12, %1 ]
  %3 = getelementptr inbounds [32 x float], [32 x float]* @input, i64 0, i64 %2
  %4 = bitcast float* %3 to <4 x float>*
  %5 = load <4 x float>, <4 x float>* %4, align 16, !tbaa !2
  %6 = getelementptr inbounds [32 x float], [32 x float]* @coefficients, i64 0, i64 %2
  %7 = bitcast float* %6 to <4 x float>*
  %8 = load <4 x float>, <4 x float>* %7, align 16, !tbaa !2
  %9 = fadd <4 x float> %5, %8
  %10 = getelementptr inbounds [32 x float], [32 x float]* @output, i64 0, i64 %2
  %11 = bitcast float* %10 to <4 x float>*
  store <4 x float> %9, <4 x float>* %11, align 16, !tbaa !2
  %12 = add i64 %2, 4
  %13 = icmp eq i64 %12, 32
  br i1 %13, label %14, label %1, !llvm.loop !6

14:                                               ; preds = %1
  ret i32 0
}

; Function Attrs: nofree norecurse nounwind uwtable mustprogress
define dso_local void @_Z6kernelPfS_S_(float* nocapture readonly %0, float* nocapture %1, float* nocapture readonly %2) local_unnamed_addr #0 {
  %4 = getelementptr float, float* %1, i64 32
  %5 = getelementptr float, float* %0, i64 32
  %6 = getelementptr float, float* %2, i64 32
  %7 = icmp ugt float* %5, %1
  %8 = icmp ugt float* %4, %0
  %9 = and i1 %7, %8
  %10 = icmp ugt float* %6, %1
  %11 = icmp ugt float* %4, %2
  %12 = and i1 %10, %11
  %13 = or i1 %9, %12
  br i1 %13, label %27, label %14

14:                                               ; preds = %3, %14
  %15 = phi i64 [ %25, %14 ], [ 0, %3 ]
  %16 = getelementptr inbounds float, float* %0, i64 %15
  %17 = bitcast float* %16 to <4 x float>*
  %18 = load <4 x float>, <4 x float>* %17, align 4, !tbaa !2, !alias.scope !10
  %19 = getelementptr inbounds float, float* %2, i64 %15
  %20 = bitcast float* %19 to <4 x float>*
  %21 = load <4 x float>, <4 x float>* %20, align 4, !tbaa !2, !alias.scope !13
  %22 = fadd <4 x float> %18, %21
  %23 = getelementptr inbounds float, float* %1, i64 %15
  %24 = bitcast float* %23 to <4 x float>*
  store <4 x float> %22, <4 x float>* %24, align 4, !tbaa !2, !alias.scope !15, !noalias !17
  %25 = add i64 %15, 4
  %26 = icmp eq i64 %25, 32
  br i1 %26, label %37, label %14, !llvm.loop !18

27:                                               ; preds = %3, %27
  %28 = phi i64 [ %35, %27 ], [ 0, %3 ]
  %29 = getelementptr inbounds float, float* %0, i64 %28
  %30 = load float, float* %29, align 4, !tbaa !2
  %31 = getelementptr inbounds float, float* %2, i64 %28
  %32 = load float, float* %31, align 4, !tbaa !2
  %33 = fadd float %30, %32
  %34 = getelementptr inbounds float, float* %1, i64 %28
  store float %33, float* %34, align 4, !tbaa !2
  %35 = add nuw nsw i64 %28, 1
  %36 = icmp eq i64 %35, 32
  br i1 %36, label %37, label %27, !llvm.loop !19

37:                                               ; preds = %14, %27
  ret void
}

attributes #0 = { nofree norecurse nounwind uwtable mustprogress "disable-tail-calls"="false" "frame-pointer"="none" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.module.flags = !{!0}
!llvm.ident = !{!1}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{!"Ubuntu clang version 12.0.0-3ubuntu1~20.04.5"}
!2 = !{!3, !3, i64 0}
!3 = !{!"float", !4, i64 0}
!4 = !{!"omnipotent char", !5, i64 0}
!5 = !{!"Simple C++ TBAA"}
!6 = distinct !{!6, !7, !8, !9}
!7 = !{!"llvm.loop.mustprogress"}
!8 = !{!"llvm.loop.unroll.disable"}
!9 = !{!"llvm.loop.isvectorized", i32 1}
!10 = !{!11}
!11 = distinct !{!11, !12}
!12 = distinct !{!12, !"LVerDomain"}
!13 = !{!14}
!14 = distinct !{!14, !12}
!15 = !{!16}
!16 = distinct !{!16, !12}
!17 = !{!11, !14}
!18 = distinct !{!18, !7, !8, !9}
!19 = distinct !{!19, !7, !8, !9}
