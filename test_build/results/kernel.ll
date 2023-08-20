; ModuleID = '../results/kernel.bc'
source_filename = "../kernels/fir/fir-8.cpp"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@input = dso_local local_unnamed_addr global [8 x float] zeroinitializer, align 16
@output = dso_local local_unnamed_addr global [8 x float] zeroinitializer, align 16
@coefficients = dso_local local_unnamed_addr global [8 x float] [float 1.500000e+02, float 3.000000e+02, float 4.500000e+02, float -3.000000e+02, float 6.000000e+02, float 7.500000e+02, float -4.500000e+02, float 9.000000e+02], align 16
@.str = private unnamed_addr constant [5 x i8] c"%f  \00", align 1

; Function Attrs: nofree norecurse nounwind uwtable mustprogress
define dso_local i32 @main() local_unnamed_addr #0 {
  br label %1

1:                                                ; preds = %1, %0
  %2 = phi i64 [ 0, %0 ], [ %9, %1 ]
  %3 = phi <4 x i64> [ <i64 0, i64 1, i64 2, i64 3>, %0 ], [ %10, %1 ]
  %4 = trunc <4 x i64> %3 to <4 x i32>
  %5 = add <4 x i32> %4, <i32 1, i32 1, i32 1, i32 1>
  %6 = sitofp <4 x i32> %5 to <4 x float>
  %7 = getelementptr inbounds [8 x float], [8 x float]* @input, i64 0, i64 %2
  %8 = bitcast float* %7 to <4 x float>*
  store <4 x float> %6, <4 x float>* %8, align 16, !tbaa !2
  %9 = add i64 %2, 4
  %10 = add <4 x i64> %3, <i64 4, i64 4, i64 4, i64 4>
  %11 = icmp eq i64 %9, 8
  br i1 %11, label %12, label %1, !llvm.loop !6

12:                                               ; preds = %1
  %13 = load float, float* getelementptr inbounds ([8 x float], [8 x float]* @output, i64 0, i64 0), align 16, !tbaa !2
  br label %14

14:                                               ; preds = %14, %12
  %15 = phi float [ %13, %12 ], [ %22, %14 ]
  %16 = phi i64 [ 0, %12 ], [ %23, %14 ]
  %17 = getelementptr inbounds [8 x float], [8 x float]* @input, i64 0, i64 %16
  %18 = load float, float* %17, align 4, !tbaa !2
  %19 = getelementptr inbounds [8 x float], [8 x float]* @coefficients, i64 0, i64 %16
  %20 = load float, float* %19, align 4, !tbaa !2
  %21 = fmul float %18, %20
  %22 = fadd float %15, %21
  %23 = add nuw nsw i64 %16, 1
  %24 = icmp eq i64 %23, 8
  br i1 %24, label %25, label %14, !llvm.loop !10

25:                                               ; preds = %14
  store float %22, float* getelementptr inbounds ([8 x float], [8 x float]* @output, i64 0, i64 0), align 16, !tbaa !2
  %26 = fpext float %22 to double
  %27 = tail call i32 (i8*, ...) @printf(i8* nonnull dereferenceable(1) getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), double %26)
  br label %29

28:                                               ; preds = %29
  ret i32 0

29:                                               ; preds = %25, %29
  %30 = phi i64 [ 1, %25 ], [ %35, %29 ]
  %31 = getelementptr inbounds [8 x float], [8 x float]* @output, i64 0, i64 %30
  %32 = load float, float* %31, align 4, !tbaa !2
  %33 = fpext float %32 to double
  %34 = tail call i32 (i8*, ...) @printf(i8* nonnull dereferenceable(1) getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), double %33)
  %35 = add nuw nsw i64 %30, 1
  %36 = icmp eq i64 %35, 8
  br i1 %36, label %28, label %29, !llvm.loop !11
}

; Function Attrs: nofree norecurse nounwind uwtable mustprogress
define dso_local void @_Z6kernelPfS_S_(float* nocapture readonly %0, float* nocapture %1, float* nocapture readonly %2) local_unnamed_addr #0 {
  %4 = load float, float* %1, align 4, !tbaa !2
  br label %5

5:                                                ; preds = %3, %5
  %6 = phi float [ %4, %3 ], [ %13, %5 ]
  %7 = phi i64 [ 0, %3 ], [ %14, %5 ]
  %8 = getelementptr inbounds float, float* %0, i64 %7
  %9 = load float, float* %8, align 4, !tbaa !2
  %10 = getelementptr inbounds float, float* %2, i64 %7
  %11 = load float, float* %10, align 4, !tbaa !2
  %12 = fmul float %9, %11
  %13 = fadd float %6, %12
  store float %13, float* %1, align 4, !tbaa !2
  %14 = add nuw nsw i64 %7, 1
  %15 = icmp eq i64 %14, 8
  br i1 %15, label %16, label %5, !llvm.loop !10

16:                                               ; preds = %5
  ret void
}

; Function Attrs: nofree nounwind
declare dso_local noundef i32 @printf(i8* nocapture noundef readonly, ...) local_unnamed_addr #1

attributes #0 = { nofree norecurse nounwind uwtable mustprogress "disable-tail-calls"="false" "frame-pointer"="none" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nofree nounwind "disable-tail-calls"="false" "frame-pointer"="none" "less-precise-fpmad"="false" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" "unsafe-fp-math"="false" "use-soft-float"="false" }

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
!10 = distinct !{!10, !7, !8}
!11 = distinct !{!11, !7, !8}
