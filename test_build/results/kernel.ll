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
  %2 = phi i64 [ 0, %0 ], [ %8, %1 ]
  %3 = phi <4 x i32> [ <i32 0, i32 1, i32 2, i32 3>, %0 ], [ %9, %1 ]
  %4 = add <4 x i32> %3, <i32 586, i32 586, i32 586, i32 586>
  %5 = sitofp <4 x i32> %4 to <4 x float>
  %6 = getelementptr inbounds [8 x float], [8 x float]* @input, i64 0, i64 %2
  %7 = bitcast float* %6 to <4 x float>*
  store <4 x float> %5, <4 x float>* %7, align 16, !tbaa !2
  %8 = add i64 %2, 4
  %9 = add <4 x i32> %3, <i32 4, i32 4, i32 4, i32 4>
  %10 = icmp eq i64 %8, 8
  br i1 %10, label %11, label %1, !llvm.loop !6

11:                                               ; preds = %1
  %12 = load float, float* getelementptr inbounds ([8 x float], [8 x float]* @output, i64 0, i64 0), align 16, !tbaa !2
  br label %13

13:                                               ; preds = %13, %11
  %14 = phi float [ %12, %11 ], [ %21, %13 ]
  %15 = phi i64 [ 0, %11 ], [ %22, %13 ]
  %16 = getelementptr inbounds [8 x float], [8 x float]* @input, i64 0, i64 %15
  %17 = load float, float* %16, align 4, !tbaa !2
  %18 = getelementptr inbounds [8 x float], [8 x float]* @coefficients, i64 0, i64 %15
  %19 = load float, float* %18, align 4, !tbaa !2
  %20 = fmul float %17, %19
  %21 = fadd float %14, %20
  %22 = add nuw nsw i64 %15, 1
  %23 = icmp eq i64 %22, 8
  br i1 %23, label %24, label %13, !llvm.loop !10

24:                                               ; preds = %13
  store float %21, float* getelementptr inbounds ([8 x float], [8 x float]* @output, i64 0, i64 0), align 16, !tbaa !2
  %25 = fpext float %21 to double
  %26 = tail call i32 (i8*, ...) @printf(i8* nonnull dereferenceable(1) getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), double %25)
  br label %28

27:                                               ; preds = %28
  ret i32 0

28:                                               ; preds = %24, %28
  %29 = phi i64 [ 1, %24 ], [ %34, %28 ]
  %30 = getelementptr inbounds [8 x float], [8 x float]* @output, i64 0, i64 %29
  %31 = load float, float* %30, align 4, !tbaa !2
  %32 = fpext float %31 to double
  %33 = tail call i32 (i8*, ...) @printf(i8* nonnull dereferenceable(1) getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), double %32)
  %34 = add nuw nsw i64 %29, 1
  %35 = icmp eq i64 %34, 8
  br i1 %35, label %27, label %28, !llvm.loop !11
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
