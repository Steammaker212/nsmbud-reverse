/* sub_6086F270
 * address: 0x6086F270   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086F270(
        int32x4x2_t *a1,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        double a17)
{
  int64x2_t v17; // q9
  int64x2_t v18; // q10
  float32x4_t v19; // q1
  int32x4_t v20; // q0
  float32x4_t v27; // q2
  int32x2_t v28; // d6
  float32x4_t v29; // q10
  int64x2_t v30; // q2
  float32x4_t v31; // q8
  int64x2_t v32; // q8
  int64x2_t v33; // q9
  float32x4_t v34; // q10
  int64x2_t v35; // q11
  float32x4_t v36; // q9
  int64x2_t v37; // q9
  float32x4_t v38; // q13
  float32x4_t v39; // q15
  float32x4_t v40; // q6
  float32x4_t v41; // q10
  float32x4_t v42; // q11
  int64x2_t v43; // q15
  int64x2_t v44; // q14
  float32x4_t v45; // q3
  float32x4_t v46; // q13
  float32x4_t v47; // q12
  int64x2_t v48; // q8
  float32x4_t v49; // q14
  float32x4_t v50; // q9
  float32x4_t v51; // q3
  float32x4_t v52; // q2
  float32x4_t v53; // q4
  float32x4_t v54; // q5
  float32x4_t v55; // q7
  float32x4_t v56; // q13
  int32x4x2_t v58; // 0:q8.16,16:q0.16
  int32x4x2_t v59; // 0:q12.16,16:q9.16

  v17.n128_u64[0] = 0xBF000000BF000000LL;
  v17.n128_u64[1] = 0xBF000000BF000000LL;
  v18.n128_u64[0] = 0x3F0000003F000000LL;
  v18.n128_u64[1] = 0x3F0000003F000000LL;
  v19.n128_u64[0] = FIELD_U64(a2, 12);
  v19.n128_u64[1] = FIELD_U32(a2, 20);
  v20.n128_u64[0] = FIELD_U64(a2, 24);
  _Q8 = vmulq_f32(v19, (float32x4_t)vld1q_dup_f32((const float *)&nn__util__detail__Float1Divided2Pi));
  __asm { VCGE.F32        Q11, Q8, #0.0 }
  v27 = vaddq_f32(vbslq_s64(_Q11, v18, v17), _Q8);
  v28.n64_u32[1] = (int)v27.n128_f32[0];
  _Q8.n128_u32[0] = (int)v27.n128_f32[2];
  v27.n128_u32[0] = nn__util__detail__FloatPi;
  *(float *)&a17 = -nn__util__detail__FloatPi;
  v29 = vdupq_lane_s32((int32x2_t)v27.n128_u64[0], 0);
  _Q8.n128_u32[1] = (int)v27.n128_f32[3];
  v28.n64_u32[0] = nn__util__detail__FloatPiDivided2;
  *(float32x2_t *)&v17.n128_i8[8] = vcvt_f32_s32((int32x2_t)_Q8.n128_u64[0]);
  v17.n128_u64[0] = vcvt_f32_s32((int32x2_t)__PAIR64__((int)v27.n128_f32[1], v28.n64_u32[1])).n64_u64[0];
  v30 = vmlsq_f32(v19, (float32x4_t)vld1q_dup_f32((const float *)&nn__util__detail__Float2Pi), v17);
  v31 = vdupq_lane_s32(v28, 0);
  v28.n64_f32[0] = -nn__util__detail__FloatPiDivided2;
  v32 = vcgtq_f32(v30, v31);
  v33 = vsubq_f32(v29, v30);
  v34 = vdupq_lane_s32(*(int32x2_t *)&a17, 0);
  *(float *)&a17 = -nn__util__detail__SinCoefficients[2];
  v35 = vbslq_s64(v32, v33, v30);
  v36 = vdupq_lane_s32(v28, 0);
  v30.n128_f32[0] = -nn__util__detail__CosCoefficients[0];
  v30.n128_f32[2] = -nn__util__detail__SinCoefficients[0];
  v28.n64_f32[0] = -nn__util__detail__CosCoefficients[2];
  v37 = vcgtq_f32(v36, v35);
  v38 = vdupq_lane_s32((int32x2_t)v30.n128_u64[0], 0);
  v39 = vdupq_lane_s32(*(int32x2_t *)&v30.n128_i8[8], 0);
  v30.n128_f32[0] = -nn__util__detail__CosCoefficients[4];
  v30.n128_f32[2] = -nn__util__detail__SinCoefficients[4];
  v40.n128_u64[1] = 1065353216;
  v41 = vbslq_s64(v37, vsubq_f32(v34, v35), v35);
  v42 = vmulq_f32(v41, v41);
  v43 = vmlaq_f32(
          vdupq_lane_s32(*(int32x2_t *)&a17, 0),
          v42,
          vmlaq_f32((float32x4_t)vld1q_dup_f32(&nn__util__detail__SinCoefficients[1]), v42, v39));
  v44.n128_u64[0] = 0x3F8000003F800000LL;
  v44.n128_u64[1] = 0x3F8000003F800000LL;
  v45 = vmlaq_f32(
          (float32x4_t)vld1q_dup_f32(&nn__util__detail__CosCoefficients[3]),
          v42,
          vmlaq_f32(
            vdupq_lane_s32(v28, 0),
            v42,
            vmlaq_f32((float32x4_t)vld1q_dup_f32(&nn__util__detail__CosCoefficients[1]), v42, v38)));
  v46 = vdupq_lane_s32((int32x2_t)v30.n128_u64[0], 0);
  v47 = vmlaq_f32((float32x4_t)vld1q_dup_f32(&nn__util__detail__SinCoefficients[3]), v42, v43);
  v43.n128_u64[0] = 0xBF800000BF800000LL;
  v43.n128_u64[1] = 0xBF800000BF800000LL;
  v48 = vbslq_s64(v32, v43, v44);
  v49 = vdupq_lane_s32(*(int32x2_t *)&v30.n128_i8[8], 0);
  v30.n128_f32[0] = 1.0;
  v30.n128_f32[1] = 1.0;
  v30.n128_f32[2] = 1.0;
  v30.n128_f32[3] = 1.0;
  v50 = vbslq_s64(v37, v43, v48);
  v48.n128_f32[0] = 1.0;
  v48.n128_f32[1] = 1.0;
  v48.n128_f32[2] = 1.0;
  v48.n128_f32[3] = 1.0;
  v51 = vmulq_f32(v50, vmlaq_f32(v48, v42, vmlaq_f32(v46, v42, v45)));
  v52 = vmulq_f32(v41, vmlaq_f32(v30, v42, vmlaq_f32(v49, v42, v47)));
  v53.n128_u32[0] = vdup_lane_s32((int32x2_t)v51.n128_u64[0], 1).n64_u32[0];
  v53.n128_u64[1] = 3212836864LL;
  v40.n128_u32[0] = vdup_lane_s32((int32x2_t)v52.n128_u64[0], 1).n64_u32[0];
  v48.n128_u64[0] = vtrn_s32(*(int32x2_t *)&v52.n128_i8[8], *(int32x2_t *)&v51.n128_i8[8]).val[0].n64_u64[0];
  v54.n128_u64[1] = v40.n128_u32[0];
  v40.n128_u32[1] = v52.n128_u32[1];
  v54.n128_u64[0] = vtrn_s32(*(int32x2_t *)&v51.n128_i8[8], *(int32x2_t *)&v52.n128_i8[8]).val[0].n64_u64[0];
  v55.n128_u64[1] = v53.n128_u32[0];
  v53.n128_u32[1] = v51.n128_u32[1];
  v55.n128_u64[0] = v54.n128_u64[0];
  v20.n128_u64[1] = FIELD_U32(a2, 32);
  v56 = vmulq_f32(v40, v55);
  v59 = vzipq_s32(
          vmulq_f32((float32x4_t)vld1q_dup_f32((const float *)a2), vmulq_f32(v54, v53)),
          vmulq_f32(
            (float32x4_t)vld1q_dup_f32((const float *)(a2 + 8)),
            vmlaq_lane_f32(
              vmulq_f32(vmulq_n_f32((float32x4_t)v48.n128_u64[0], v52.n128_f32[0]), (float32x4_t)0xBF8000003F800000LL),
              v56,
              (float32x2_t)v51.n128_u64[0],
              0)));
  v58 = vzipq_s32(
          vmulq_f32(
            (float32x4_t)vld1q_dup_f32((const float *)(a2 + 16)),
            vmlaq_lane_f32(
              vmulq_f32(vmulq_n_f32((float32x4_t)v48.n128_u64[0], v51.n128_f32[0]), (float32x4_t)0x3F800000BF800000uLL),
              v56,
              (float32x2_t)v52.n128_u64[0],
              0)),
          v20);
  *a1 = vzipq_s32(v59.val[0], v58.val[0]);
  a1[1].val[0] = (int32x4_t)vzipq_s32(v59.val[1], v58.val[1]).val;
  return 48;
}
