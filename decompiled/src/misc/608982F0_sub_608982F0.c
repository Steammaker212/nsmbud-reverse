/* sub_608982F0
 * address: 0x608982F0   size: 1328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

double __fastcall sub_608982F0(double a1, double a2, int a3, float32x2_t *a4, float32x4_t *a5, float32x4_t *a6)
{
  float *v6; // r7
  float32x4_t v7; // q2
  int64x2_t v8; // q9
  int64x2_t v9; // q10
  float32x4_t v16; // q11
  float32x4_t v17; // q10
  float32x4_t v18; // q1
  int v19; // r0
  int64x2_t v20; // q2
  float32x4_t v21; // q8
  int64x2_t v22; // q9
  int64x2_t v23; // q11
  int64x2_t v24; // q8
  float32x4_t v25; // q12
  float32x2x2_t v26; // q11
  float32x4_t v27; // q5
  int64x2_t v28; // q13
  float32x4_t v29; // q10
  int64x2_t v30; // q14
  float32x4_t v31; // q8
  float32x4_t v32; // q13
  float32x4_t v33; // q4
  float32x4_t v34; // q3
  float32x4_t v35; // q0
  float32x4_t v36; // q8
  float32x4_t v37; // q0
  float32x4_t v38; // q1
  float32x4_t v39; // q6
  unsigned __int32 v40; // r7
  float32x4_t v41; // q8
  float32x4_t v42; // q12
  float32x4_t v43; // q7
  float32x4_t v44; // q8
  int64x2_t v45; // q9
  float32x4_t v46; // q15
  int64x2_t v47; // q2
  float32x4_t v48; // q6
  int64x2_t v49; // q9
  float32x4_t v50; // q0
  float32x4_t v51; // q0
  float32x4_t v52; // q10
  float32x4_t v53; // q2
  float32x4_t v54; // q9
  float32x4_t v55; // q10
  float32x4_t v56; // q11
  float32x4_t v58; // [sp+10h] [bp-150h]
  unsigned __int64 v59; // [sp+38h] [bp-128h]
  unsigned __int64 v60; // [sp+50h] [bp-110h]
  float32x4_t v61; // [sp+70h] [bp-F0h]
  float32x4_t v62; // [sp+80h] [bp-E0h]
  float32x2x2_t v63; // [sp+A0h] [bp-C0h]
  float32x2x2_t v64; // [sp+B0h] [bp-B0h]
  double v65; // [sp+D0h] [bp-90h]
  float32x2_t v66; // [sp+E0h] [bp-80h]
  float32x4_t v67; // 0:^90.16
  float32x4_t v68; // 0:^C0.16
  float32x4_t v69; // 0:d20.8,8:d21.8
  float32x4_t v70; // 0:d22.8,8:d23.8

  FIELD_U64(a5, 0x0)[0] = 1065353216;
  FIELD_U64(a5, 0x0)[1] = 0;
  FIELD_U64(a5 + (1) * 16, 0x0)[0] = 0x3F80000000000000LL;
  FIELD_U64(a5 + (1) * 16, 0x0)[1] = 0;
  v6 = &FIELD_F32(a4 + (134) * 8, 0x0)[1];
  FIELD_U64(a5 + (2) * 16, 0x0)[0] = 0;
  FIELD_U64(a5 + (2) * 16, 0x0)[1] = 1065353216;
  FIELD_U64(a5 + (3) * 16, 0x0)[0] = 0;
  FIELD_U64(a5 + (3) * 16, 0x0)[1] = 0;
  FIELD_U64(a6, 0x0)[0] = 1065353216;
  FIELD_U64(a6, 0x0)[1] = 0;
  FIELD_U64(a6 + (1) * 16, 0x0)[0] = 0x3F80000000000000LL;
  FIELD_U64(a6 + (1) * 16, 0x0)[1] = 0;
  FIELD_U64(a6 + (2) * 16, 0x0)[0] = 0;
  FIELD_U64(a6 + (2) * 16, 0x0)[1] = 1065353216;
  FIELD_U64(a6 + (3) * 16, 0x0)[0] = 0;
  FIELD_U64(a6 + (3) * 16, 0x0)[1] = 0;
  v66.n64_u64[0] = a4[133].n64_u64[0];
  *(_QWORD *)&v65 = FIELD_U32(a4 + (134) * 8, 0x0)[0];
  if ( *(_DWORD *)(a4[43].n64_u32[1] + 492) )
  {
    v7.n128_u32[3] = 0;
    LODWORD(a1) = nn__util__detail__FloatPi;
    v7.n128_f32[2] = (float)(nn__util__detail__FloatPi / nn__util__detail__FloatDegree180) * a4[135].n64_f32[1];
    v7.n128_f32[1] = (float)(nn__util__detail__FloatPi / nn__util__detail__FloatDegree180) * a4[135].n64_f32[0];
    v7.n128_f32[0] = *v6 * (float)(nn__util__detail__FloatPi / nn__util__detail__FloatDegree180);
  }
  else
  {
    v7.n128_u64[0] = *(_QWORD *)v6;
    v7.n128_u64[1] = a4[135].n64_u32[1];
    LODWORD(a1) = nn__util__detail__FloatPi;
  }
  v8.n128_u64[0] = 0xBF000000BF000000LL;
  v8.n128_u64[1] = 0xBF000000BF000000LL;
  v9.n128_u64[0] = 0x3F0000003F000000LL;
  v9.n128_u64[1] = 0x3F0000003F000000LL;
  _Q8 = vmulq_f32(v7, (float32x4_t)vld1q_dup_f32((const float *)&nn__util__detail__Float1Divided2Pi));
  __asm { VCGE.F32        Q11, Q8, #0.0 }
  v16 = vbslq_s64(_Q11, v9, v8);
  v17 = vdupq_lane_s32(*(int32x2_t *)&a1, 0);
  v18 = vaddq_f32(v16, _Q8);
  v19 = (int)v18.n128_f32[0];
  v18.n128_f32[0] = -*(float *)&a1;
  _Q8.n128_u32[0] = (int)v18.n128_f32[2];
  _Q8.n128_u32[2] = v19;
  LODWORD(a2) = nn__util__detail__FloatPiDivided2;
  *(float *)&a1 = -nn__util__detail__FloatPiDivided2;
  _Q8.n128_u32[1] = (int)v18.n128_f32[3];
  _Q8.n128_u32[3] = (int)v18.n128_f32[1];
  v61 = vdupq_lane_s32(*(int32x2_t *)&a1, 0);
  *(float32x2_t *)&v8.n128_i8[8] = vcvt_f32_s32((int32x2_t)_Q8.n128_u64[0]);
  v8.n128_u64[0] = vcvt_f32_s32(*(int32x2_t *)&_Q8.n128_i8[8]).n64_u64[0];
  v68 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__CosCoefficients[1]);
  v20 = vmlsq_f32(v7, (float32x4_t)vld1q_dup_f32((const float *)&nn__util__detail__Float2Pi), v8);
  v21 = vdupq_lane_s32(*(int32x2_t *)&a2, 0);
  *(float *)&a1 = -nn__util__detail__CosCoefficients[0];
  *(float *)&a2 = -nn__util__detail__CosCoefficients[2];
  v22 = vcgtq_f32(v20, v21);
  v23 = vbslq_s64(v22, vsubq_f32(v17, v20), v20);
  v24 = vcgtq_f32(v61, v23);
  v25 = vbslq_s64(v24, vsubq_f32(vdupq_lane_s32((int32x2_t)v18.n128_u64[0], 0), v23), v23);
  v26 = (float32x2x2_t)vdupq_lane_s32(*(int32x2_t *)&a1, 0);
  *(float *)&a1 = -nn__util__detail__CosCoefficients[4];
  v27 = vmulq_f32(v25, v25);
  v63 = v26;
  v64 = (float32x2x2_t)vdupq_lane_s32(*(int32x2_t *)&a2, 0);
  v67 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__CosCoefficients[3]);
  v62 = vdupq_lane_s32(*(int32x2_t *)&a1, 0);
  v28.n128_u64[0] = 0xBF800000BF800000LL;
  v28.n128_u64[1] = 0xBF800000BF800000LL;
  v17.n128_f32[0] = 1.0;
  v17.n128_f32[1] = 1.0;
  v17.n128_f32[2] = 1.0;
  v17.n128_f32[3] = 1.0;
  *(float *)&a1 = -nn__util__detail__SinCoefficients[0];
  *(float *)&a2 = -nn__util__detail__SinCoefficients[2];
  v29 = vmlaq_f32(
          v17,
          v27,
          vmlaq_f32(
            v62,
            v27,
            vmlaq_f32(v67, v27, vmlaq_f32((float32x4_t)v64, v27, vmlaq_f32(v68, v27, (float32x4_t)v26)))));
  v26.val[0].n64_u64[0] = 0x3F8000003F800000LL;
  v26.val[1].n64_u64[0] = 0x3F8000003F800000LL;
  v30 = vbslq_s64(v22, v28, (int64x2_t)v26);
  v70 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__SinCoefficients[1]);
  v31 = vbslq_s64(v24, v28, v30);
  v32 = vdupq_lane_s32(*(int32x2_t *)&a2, 0);
  v33 = vmulq_f32(v31, v29);
  v58 = vdupq_lane_s32(*(int32x2_t *)&a1, 0);
  v34.n128_u32[0] = vdup_lane_s32((int32x2_t)v33.n128_u64[0], 1).n64_u32[0];
  v69 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__SinCoefficients[3]);
  v34.n128_u32[1] = v33.n128_u32[1];
  v34.n128_u64[1] = 3212836864LL;
  v35 = vmlaq_f32(v32, v27, vmlaq_f32(v70, v27, v58));
  v36 = vmlaq_f32(v69, v27, v35);
  v35.n128_f32[0] = -nn__util__detail__SinCoefficients[4];
  v37 = vdupq_lane_s32((int32x2_t)v35.n128_u64[0], 0);
  v38 = vmlaq_f32(v37, v27, v36);
  v36.n128_f32[0] = 1.0;
  v36.n128_f32[1] = 1.0;
  v36.n128_f32[2] = 1.0;
  v36.n128_f32[3] = 1.0;
  v39 = vmulq_f32(v25, vmlaq_f32(v36, v27, v38));
  v38.n128_u32[0] = vdup_lane_s32((int32x2_t)v39.n128_u64[0], 1).n64_u32[0];
  v27.n128_u64[0] = vtrn_s32(*(int32x2_t *)&v33.n128_i8[8], *(int32x2_t *)&v39.n128_i8[8]).val[0].n64_u64[0];
  v59 = v34.n128_u32[0];
  v40 = FIELD_U32(a4 + (137) * 8, 0x0)[0];
  v27.n128_u64[1] = v38.n128_u32[0];
  v38.n128_u32[1] = v39.n128_u32[1];
  v38.n128_u64[1] = 1065353216;
  v60 = FIELD_U64(a4 + (136) * 8, 0x0)[0];
  v41 = vmulq_f32(v27, v34);
  v27.n128_u64[1] = v59;
  v42 = vmulq_f32(v38, v27);
  *a6 = v41;
  v39.n128_u64[1] = vtrn_s32(*(int32x2_t *)&v39.n128_i8[8], *(int32x2_t *)&v33.n128_i8[8]).val[0].n64_u64[0];
  v43 = vmlaq_lane_f32(
          vmulq_f32(vmulq_n_f32((float32x4_t)v39.n128_u64[1], v33.n128_f32[0]), (float32x4_t)0x3F800000BF800000uLL),
          v42,
          (float32x2_t)v39.n128_u64[0],
          0);
  v44 = vmlaq_lane_f32(
          vmulq_f32(vmulq_n_f32((float32x4_t)v39.n128_u64[1], v39.n128_f32[0]), (float32x4_t)0xBF8000003F800000LL),
          v42,
          (float32x2_t)v33.n128_u64[0],
          0);
  v39.n128_u32[0] = nn__util__detail__FloatPi;
  v45 = vbslq_s64(v22, vsubq_f32(vdupq_lane_s32((int32x2_t)v39.n128_u64[0], 0), v20), v20);
  v20.n128_f32[0] = -nn__util__detail__FloatPi;
  v46 = vdupq_lane_s32((int32x2_t)v20.n128_u64[0], 0);
  v47 = vcgtq_f32(v61, v45);
  v48 = vbslq_s64(v47, vsubq_f32(v46, v45), v45);
  v49 = vmulq_f32(v48, v48);
  v50 = vmlaq_f32(v37, v49, vmlaq_f32(v69, v49, vmlaq_f32(v32, v49, vmlaq_f32(v70, v49, v58))));
  v69.n128_f32[0] = 1.0;
  v69.n128_f32[1] = 1.0;
  v69.n128_f32[2] = 1.0;
  v69.n128_f32[3] = 1.0;
  v51 = vmulq_f32(v48, vmlaq_f32(v69, v49, v50));
  v38.n128_u32[0] = vdup_lane_s32((int32x2_t)v51.n128_u64[0], 1).n64_u32[0];
  v69.n128_f32[0] = 1.0;
  v69.n128_f32[1] = 1.0;
  v69.n128_f32[2] = 1.0;
  v69.n128_f32[3] = 1.0;
  v52 = vmlaq_f32(
          v69,
          v49,
          vmlaq_f32(
            v62,
            v49,
            vmlaq_f32(v67, v49, vmlaq_f32((float32x4_t)v64, v49, vmlaq_f32(v68, v49, (float32x4_t)v63)))));
  v49.n128_u64[0] = 0xBF800000BF800000LL;
  v49.n128_u64[1] = 0xBF800000BF800000LL;
  v53 = vmulq_f32(vbslq_s64(v47, v49, v30), v52);
  v33.n128_u32[2] = vdup_lane_s32((int32x2_t)v53.n128_u64[0], 1).n64_u32[0];
  v27.n128_u64[0] = vtrn_s32(*(int32x2_t *)&v51.n128_i8[8], *(int32x2_t *)&v53.n128_i8[8]).val[0].n64_u64[0];
  v34.n128_u64[0] = __PAIR64__(v53.n128_u32[1], v33.n128_u32[2]);
  a6[1] = v43;
  a6[2] = v44;
  v54 = vmulq_n_f32((float32x4_t)v27.n128_u64[0], v51.n128_f32[0]);
  v55 = vmulq_n_f32((float32x4_t)v27.n128_u64[0], v53.n128_f32[0]);
  v27.n128_u64[1] = __PAIR64__(HIDWORD(v59), v38.n128_u32[0]);
  v38.n128_u32[1] = v51.n128_u32[1];
  v33.n128_u32[3] = HIDWORD(v59);
  v27.n128_u64[0] = vtrn_s32(*(int32x2_t *)&v53.n128_i8[8], *(int32x2_t *)&v51.n128_i8[8]).val[0].n64_u64[0];
  v33.n128_u64[0] = v27.n128_u64[0];
  v56 = vmulq_f32(v38, v33);
  FIELD_U64(a6 + (3) * 16, 0x0)[0] = v60;
  FIELD_U64(a6 + (3) * 16, 0x0)[1] = v40;
  *a5 = vmulq_n_f32(vmulq_f32(v27, v34), v66.n64_f32[0]);
  a5[1] = vmulq_lane_f32(
            vmlaq_lane_f32(vmulq_f32(v55, (float32x4_t)0x3F800000BF800000uLL), v56, (float32x2_t)v51.n128_u64[0], 0),
            v66,
            1);
  a5[2] = vmulq_n_f32(
            vmlaq_lane_f32(vmulq_f32(v54, (float32x4_t)0xBF8000003F800000LL), v56, (float32x2_t)v53.n128_u64[0], 0),
            *(float *)&v65);
  FIELD_U64(a5 + (3) * 16, 0x0)[0] = v60;
  FIELD_U64(a5 + (3) * 16, 0x0)[1] = v40;
  return v65;
}
