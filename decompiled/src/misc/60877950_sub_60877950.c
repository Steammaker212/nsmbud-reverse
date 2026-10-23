/* sub_60877950
 * address: 0x60877950   size: 936   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60877950(
        int result,
        int a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __n128 a9)
{
  float32x4_t v9; // q4
  int v10; // lr
  int v11; // r12
  float32x4_t v12; // q9
  float32x4_t v13; // q8
  float32x4_t v14; // q8
  int v15; // r3
  int v16; // r2
  int64x2_t v17; // q11
  unsigned __int64 v18; // d2
  unsigned __int64 v19; // d4
  float32x4_t *v20; // r9
  unsigned int v21; // s6
  unsigned int v22; // s10
  float32x4_t v23; // q1
  int64x2_t v25; // q10
  float32x4_t v31; // q2
  int64x2_t v32; // q1
  int64x2_t v33; // q5
  int64x2_t v34; // q6
  int64x2_t v35; // q2
  float32x4_t v36; // q14
  float32x4_t v37; // q1
  int64x2_t v38; // q7
  float32x4_t v39; // q11
  float32x4_t v40; // q1
  float32x4_t v41; // q2
  float32x4_t v42; // q5
  float32x4_t v43; // [sp+40h] [bp-100h]
  float32x4_t v44; // [sp+50h] [bp-F0h]
  float32x4_t v45; // [sp+60h] [bp-E0h]
  int64x2_t v46; // [sp+70h] [bp-D0h]
  int32x4_t v47; // [sp+80h] [bp-C0h]
  float32x4_t v48; // [sp+90h] [bp-B0h]
  float32x4_t v49; // [sp+A0h] [bp-A0h]
  int32x4_t v50; // [sp+B0h] [bp-90h]
  float32x4_t v51; // [sp+C0h] [bp-80h]
  float32x4_t v52; // [sp+D0h] [bp-70h]
  float32x4_t v53; // 0:^10.16
  float32x4_t v54; // 0:^20.16
  float32x4_t v55; // 0:^30.16
  float32x4_t v56; // 0:d16.8,8:d17.8
  float32x4_t v57; // 0:d24.8,8:d25.8
  float32x4_t v58; // 0:d26.8,8:d27.8

  v10 = FIELD_U16(result, 64);
  if ( FIELD_U16(result, 64) )
  {
    v11 = FIELD_U32(a2, 12);
    v12.n128_u64[1] = 0;
    a9.n128_u32[2] = nn__util__detail__FloatPiDivided2;
    a9.n128_u32[0] = nn__util__detail__FloatPi;
    *(float *)&a5 = -nn__util__detail__CosCoefficients[4];
    *(float *)&a4 = -nn__util__detail__CosCoefficients[2];
    *(float *)&a3 = -nn__util__detail__CosCoefficients[0];
    v9.n128_f32[2] = -nn__util__detail__FloatPiDivided2;
    v9.n128_f32[0] = -nn__util__detail__FloatPi;
    v52 = vdupq_lane_s32((int32x2_t)a9.n128_u64[0], 0);
    v13 = vdupq_lane_s32(*(int32x2_t *)&a9.n128_i8[8], 0);
    a9.n128_u64[1] = 3212836864LL;
    *(float *)&a8 = -nn__util__detail__SinCoefficients[4];
    *(float *)&a7 = -nn__util__detail__SinCoefficients[2];
    *(float *)&a6 = -nn__util__detail__SinCoefficients[0];
    v51 = v13;
    v50 = vdupq_lane_s32(*(int32x2_t *)&a5, 0);
    v49 = vdupq_lane_s32(*(int32x2_t *)&a4, 0);
    v48 = vdupq_lane_s32(*(int32x2_t *)&a3, 0);
    v47 = vdupq_lane_s32(*(int32x2_t *)&a8, 0);
    v46 = vdupq_lane_s32(*(int32x2_t *)&a7, 0);
    v45 = vdupq_lane_s32(*(int32x2_t *)&a6, 0);
    v44 = vdupq_lane_s32((int32x2_t)v9.n128_u64[0], 0);
    v14 = vdupq_lane_s32(*(int32x2_t *)&v9.n128_i8[8], 0);
    v9.n128_u64[1] = 1065353216;
    v43 = v14;
    v55 = (float32x4_t)vld1q_dup_f32((const float *)&nn__util__detail__Float2Pi);
    v58 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__CosCoefficients[1]);
    v54 = (float32x4_t)vld1q_dup_f32((const float *)&nn__util__detail__Float1Divided2Pi);
    v53 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__CosCoefficients[3]);
    v56 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__SinCoefficients[3]);
    v15 = FIELD_U32(result, 48) + 24;
    v57 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__SinCoefficients[1]);
    v16 = 0;
    do
    {
      if ( *(int *)(FIELD_U32(result, 56) + 4 * v16) >= 0 )
      {
        v17.n128_u64[0] = 0x3F0000003F000000LL;
        v17.n128_u64[1] = 0x3F0000003F000000LL;
        v18 = *(_QWORD *)(v15 - 8);
        v19 = *(_QWORD *)(v15 - 20);
        v20 = (float32x4_t *)(v11 + 96 * (*(_DWORD *)(FIELD_U32(result, 56) + 4 * v16) & 0x7FFF));
        v21 = *(_DWORD *)v15;
        v22 = *(_DWORD *)(v15 - 12);
        FIELD_U32(v20, 0x0)[0] = FIELD_U32(v20, 0x0)[0] & 0xF07FFFFF | (((*(_DWORD *)(v15 - 24) >> 23) & 0x1F) << 23);
        v20[1].n128_u64[0] = v19;
        v20[1].n128_u64[1] = v22;
        v20[5].n128_u64[0] = v18;
        v20[5].n128_u64[1] = v21;
        v23.n128_u64[0] = FIELD_U64(v15, 8);
        v23.n128_u64[1] = FIELD_U32(v15, 16);
        _Q2 = vmulq_f32(v23, v54);
        v25.n128_u64[0] = 0xBF000000BF000000LL;
        v25.n128_u64[1] = 0xBF000000BF000000LL;
        __asm { VCGE.F32        Q5, Q2, #0.0 }
        v31 = vaddq_f32(vbslq_s64(_Q5, v17, v25), _Q2);
        v31.n128_u32[2] = (int)v31.n128_f32[2];
        _Q5.n128_u32[0] = (int)v31.n128_f32[0];
        v31.n128_u32[3] = (int)v31.n128_f32[3];
        _Q5.n128_u32[1] = (int)v31.n128_f32[1];
        *(float32x2_t *)&v31.n128_i8[8] = vcvt_f32_s32(*(int32x2_t *)&v31.n128_i8[8]);
        v31.n128_u64[0] = vcvt_f32_s32((int32x2_t)_Q5.n128_u64[0]).n64_u64[0];
        v32 = vmlsq_f32(v23, v55, v31);
        v33 = vcgtq_f32(v32, v51);
        v34 = vbslq_s64(v33, vsubq_f32(v52, v32), v32);
        v35 = vcgtq_f32(v43, v34);
        v36 = vbslq_s64(v35, vsubq_f32(v44, v34), v34);
        v37 = vmulq_f32(v36, v36);
        v34.n128_u64[0] = 0x3F8000003F800000LL;
        v34.n128_u64[1] = 0x3F8000003F800000LL;
        v38.n128_u64[0] = 0xBF800000BF800000LL;
        v38.n128_u64[1] = 0xBF800000BF800000LL;
        v25.n128_f32[0] = 1.0;
        v25.n128_f32[1] = 1.0;
        v25.n128_f32[2] = 1.0;
        v25.n128_f32[3] = 1.0;
        v17.n128_f32[0] = 1.0;
        v17.n128_f32[1] = 1.0;
        v17.n128_f32[2] = 1.0;
        v17.n128_f32[3] = 1.0;
        v39 = vmlaq_f32(
                v17,
                v37,
                vmlaq_f32(v47, v37, vmlaq_f32(v56, v37, vmlaq_f32(v46, v37, vmlaq_f32(v57, v37, v45)))));
        v40 = vmulq_f32(
                vbslq_s64(v35, v38, vbslq_s64(v33, v38, v34)),
                vmlaq_f32(
                  v25,
                  v37,
                  vmlaq_f32(v50, v37, vmlaq_f32(v53, v37, vmlaq_f32(v49, v37, vmlaq_f32(v58, v37, v48))))));
        v41 = vmulq_f32(v36, v39);
        v9.n128_u32[0] = vdup_lane_s32((int32x2_t)v41.n128_u64[0], 1).n64_u32[0];
        a9.n128_u32[0] = vdup_lane_s32((int32x2_t)v40.n128_u64[0], 1).n64_u32[0];
        v33.n128_u64[1] = a9.n128_u32[0];
        v12.n128_u64[0] = vtrn_s32(*(int32x2_t *)&v41.n128_i8[8], *(int32x2_t *)&v40.n128_i8[8]).val[0].n64_u64[0];
        v40.n128_u64[1] = vtrn_s32(*(int32x2_t *)&v40.n128_i8[8], *(int32x2_t *)&v41.n128_i8[8]).val[0].n64_u64[0];
        v34.n128_u64[1] = v9.n128_u32[0];
        v9.n128_u32[1] = v41.n128_u32[1];
        a9.n128_u32[1] = v40.n128_u32[1];
        v33.n128_u64[0] = v40.n128_u64[1];
        v42 = vmulq_f32(v9, v33);
        v34.n128_u64[0] = v40.n128_u64[1];
        v20[2] = vmulq_f32(v34, a9);
        v20[3] = vmlaq_lane_f32(
                   vmulq_f32(vmulq_n_f32(v12, v40.n128_f32[0]), (float32x4_t)0x3F800000BF800000uLL),
                   v42,
                   (float32x2_t)v41.n128_u64[0],
                   0);
        v20[4] = vmlaq_lane_f32(
                   vmulq_f32(vmulq_n_f32(v12, v41.n128_f32[0]), (float32x4_t)0xBF8000003F800000LL),
                   v42,
                   (float32x2_t)v40.n128_u64[0],
                   0);
      }
      ++v16;
      v15 += 48;
    }
    while ( v10 != v16 );
  }
  return result;
}
