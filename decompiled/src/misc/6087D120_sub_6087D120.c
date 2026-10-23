/* sub_6087D120
 * address: 0x6087D120   size: 1324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6087D120(
        _DWORD *result,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        __n128 a8)
{
  float32x4_t v8; // q4
  int v9; // r5
  int v10; // lr
  int v11; // r1
  float32x4_t v12; // q9
  float32x4_t v13; // q8
  float32x4_t v14; // q8
  int v15; // r3
  int v16; // r2
  int v17; // r5
  int64x2_t v18; // q11
  _QWORD *v19; // r1
  unsigned int v20; // s6
  float32x4_t v21; // q1
  int64x2_t v23; // q10
  float32x4_t v29; // q2
  int64x2_t v30; // q1
  int64x2_t v31; // q5
  int64x2_t v32; // q6
  int64x2_t v33; // q2
  float32x4_t v34; // q14
  float32x4_t v35; // q1
  int64x2_t v36; // q7
  float32x4_t v37; // q11
  float32x4_t v38; // q1
  float32x4_t v39; // q2
  float32x4_t v40; // q5
  int v41; // r1
  int i; // r2
  unsigned __int32 *v43; // r6
  _QWORD *v44; // r3
  unsigned int v45; // s2
  int64x2_t v46; // q1
  int8x8x2_t v47; // q1
  float32x4_t v48; // q2
  float32x4_t v49; // q3
  float32x4_t v50; // q4
  float32x4_t v51; // q5
  float32x4_t v52; // q0
  float32x4_t v53; // q1
  float32x4_t v54; // q0
  float32x4_t v55; // q2
  float32x4_t v56; // q3
  _QWORD *v57; // r3
  _QWORD *v58; // r5
  int8x8_t *v59; // r5
  float32x4_t v60; // [sp+30h] [bp-100h]
  float32x4_t v61; // [sp+40h] [bp-F0h]
  float32x4_t v62; // [sp+50h] [bp-E0h]
  int64x2_t v63; // [sp+60h] [bp-D0h]
  int32x4_t v64; // [sp+70h] [bp-C0h]
  float32x4_t v65; // [sp+80h] [bp-B0h]
  float32x4_t v66; // [sp+90h] [bp-A0h]
  int32x4_t v67; // [sp+A0h] [bp-90h]
  float32x4_t v68; // [sp+B0h] [bp-80h]
  float32x4_t v69; // [sp+C0h] [bp-70h]
  float32x4_t v70; // 0:^0.16
  float32x4_t v71; // 0:^10.16
  float32x4_t v72; // 0:^20.16
  int64x2_t v73; // 0:q0.16
  float32x4_t v74; // 0:d16.8,8:d17.8
  float32x4_t v75; // 0:d24.8,8:d25.8
  float32x4_t v76; // 0:d26.8,8:d27.8
  int8x8x4_t v77; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  int8x8x4_t v78; // 0:d8.8,8:d9.8,16:d10.8,24:d11.8

  v9 = *result;
  v10 = result[3];
  v11 = *(unsigned __int16 *)(*result + 76);
  if ( (*((_BYTE *)result + 5) & 0x70) != 0 )
  {
    if ( *(_WORD *)(*result + 76) )
    {
      v12.n128_u64[1] = 0;
      a8.n128_u32[2] = nn__util__detail__FloatPiDivided2;
      a8.n128_u32[0] = nn__util__detail__FloatPi;
      *(float *)&a4 = -nn__util__detail__CosCoefficients[4];
      *(float *)&a3 = -nn__util__detail__CosCoefficients[2];
      *(float *)&a2 = -nn__util__detail__CosCoefficients[0];
      v8.n128_f32[2] = -nn__util__detail__FloatPiDivided2;
      v8.n128_f32[0] = -nn__util__detail__FloatPi;
      v69 = vdupq_lane_s32((int32x2_t)a8.n128_u64[0], 0);
      v13 = vdupq_lane_s32(*(int32x2_t *)&a8.n128_i8[8], 0);
      a8.n128_u64[1] = 3212836864LL;
      *(float *)&a7 = -nn__util__detail__SinCoefficients[4];
      *(float *)&a6 = -nn__util__detail__SinCoefficients[2];
      *(float *)&a5 = -nn__util__detail__SinCoefficients[0];
      v68 = v13;
      v67 = vdupq_lane_s32(*(int32x2_t *)&a4, 0);
      v66 = vdupq_lane_s32(*(int32x2_t *)&a3, 0);
      v65 = vdupq_lane_s32(*(int32x2_t *)&a2, 0);
      v64 = vdupq_lane_s32(*(int32x2_t *)&a7, 0);
      v63 = vdupq_lane_s32(*(int32x2_t *)&a6, 0);
      v62 = vdupq_lane_s32(*(int32x2_t *)&a5, 0);
      v61 = vdupq_lane_s32((int32x2_t)v8.n128_u64[0], 0);
      v14 = vdupq_lane_s32(*(int32x2_t *)&v8.n128_i8[8], 0);
      v8.n128_u64[1] = 1065353216;
      v60 = v14;
      v72 = (float32x4_t)vld1q_dup_f32((const float *)&nn__util__detail__Float2Pi);
      v76 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__CosCoefficients[1]);
      v71 = (float32x4_t)vld1q_dup_f32((const float *)&nn__util__detail__Float1Divided2Pi);
      v70 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__CosCoefficients[3]);
      v74 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__SinCoefficients[3]);
      v15 = v11 - 1;
      v16 = 92;
      v75 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__SinCoefficients[1]);
      while ( 1 )
      {
        v17 = FIELD_U32(v9, 24);
        v18.n128_u64[0] = 0x3F0000003F000000LL;
        v18.n128_u64[1] = 0x3F0000003F000000LL;
        *(_DWORD *)(v10 + v16 - 92) = *(_DWORD *)(v17 + v16 - 40) & 0xF870000;
        v19 = (_QWORD *)(v10 + v16 - 76);
        v20 = *(_DWORD *)(v17 + v16 - 28);
        *v19 = *(_QWORD *)(v17 + v16 - 36);
        v19[1] = v20;
        v21.n128_u64[0] = *(_QWORD *)(v17 + v16 - 24);
        v21.n128_u64[1] = *(unsigned int *)(v17 + v16 - 16);
        _Q2 = vmulq_f32(v21, v71);
        v23.n128_u64[0] = 0xBF000000BF000000LL;
        v23.n128_u64[1] = 0xBF000000BF000000LL;
        __asm { VCGE.F32        Q5, Q2, #0.0 }
        v29 = vaddq_f32(vbslq_s64(_Q5, v18, v23), _Q2);
        v29.n128_u32[2] = (int)v29.n128_f32[2];
        _Q5.n128_u32[0] = (int)v29.n128_f32[0];
        v29.n128_u32[3] = (int)v29.n128_f32[3];
        _Q5.n128_u32[1] = (int)v29.n128_f32[1];
        *(float32x2_t *)&v29.n128_i8[8] = vcvt_f32_s32(*(int32x2_t *)&v29.n128_i8[8]);
        v29.n128_u64[0] = vcvt_f32_s32((int32x2_t)_Q5.n128_u64[0]).n64_u64[0];
        v30 = vmlsq_f32(v21, v72, v29);
        v31 = vcgtq_f32(v30, v68);
        v32 = vbslq_s64(v31, vsubq_f32(v69, v30), v30);
        v33 = vcgtq_f32(v60, v32);
        v34 = vbslq_s64(v33, vsubq_f32(v61, v32), v32);
        v35 = vmulq_f32(v34, v34);
        v32.n128_u64[0] = 0x3F8000003F800000LL;
        v32.n128_u64[1] = 0x3F8000003F800000LL;
        v36.n128_u64[0] = 0xBF800000BF800000LL;
        v36.n128_u64[1] = 0xBF800000BF800000LL;
        v23.n128_f32[0] = 1.0;
        v23.n128_f32[1] = 1.0;
        v23.n128_f32[2] = 1.0;
        v23.n128_f32[3] = 1.0;
        v18.n128_f32[0] = 1.0;
        v18.n128_f32[1] = 1.0;
        v18.n128_f32[2] = 1.0;
        v18.n128_f32[3] = 1.0;
        v37 = vmlaq_f32(
                v18,
                v35,
                vmlaq_f32(v64, v35, vmlaq_f32(v74, v35, vmlaq_f32(v63, v35, vmlaq_f32(v75, v35, v62)))));
        v38 = vmulq_f32(
                vbslq_s64(v33, v36, vbslq_s64(v31, v36, v32)),
                vmlaq_f32(
                  v23,
                  v35,
                  vmlaq_f32(v67, v35, vmlaq_f32(v70, v35, vmlaq_f32(v66, v35, vmlaq_f32(v76, v35, v65))))));
        v39 = vmulq_f32(v34, v37);
        a8.n128_u32[0] = vdup_lane_s32((int32x2_t)v38.n128_u64[0], 1).n64_u32[0];
        v8.n128_u32[0] = vdup_lane_s32((int32x2_t)v39.n128_u64[0], 1).n64_u32[0];
        v31.n128_u64[1] = a8.n128_u32[0];
        v32.n128_u64[1] = v8.n128_u32[0];
        v12.n128_u64[0] = vtrn_s32(*(int32x2_t *)&v39.n128_i8[8], *(int32x2_t *)&v38.n128_i8[8]).val[0].n64_u64[0];
        v37.n128_u64[0] = *(_QWORD *)(v17 + v16 - 8);
        v8.n128_u32[1] = v39.n128_u32[1];
        a8.n128_u32[1] = v38.n128_u32[1];
        v31.n128_u64[0] = vtrn_s32(*(int32x2_t *)&v38.n128_i8[8], *(int32x2_t *)&v39.n128_i8[8]).val[0].n64_u64[0];
        v37.n128_u64[1] = *(unsigned int *)(v17 + v16);
        v32.n128_u64[0] = v31.n128_u64[0];
        v40 = vmulq_f32(v8, v31);
        *(float32x4_t *)(v10 + v16 - 60) = vmulq_f32(v32, a8);
        *(float32x4_t *)(v10 + v16 - 44) = vmlaq_lane_f32(
                                             vmulq_f32(
                                               vmulq_n_f32(v12, v38.n128_f32[0]),
                                               (float32x4_t)0x3F800000BF800000uLL),
                                             v40,
                                             (float32x2_t)v39.n128_u64[0],
                                             0);
        *(float32x4_t *)(v10 + v16 - 28) = vmlaq_lane_f32(
                                             vmulq_f32(
                                               vmulq_n_f32(v12, v39.n128_f32[0]),
                                               (float32x4_t)0xBF8000003F800000LL),
                                             v40,
                                             (float32x2_t)v38.n128_u64[0],
                                             0);
        *(float32x4_t *)(v10 + v16 - 12) = v37;
        if ( _ZF )
          break;
        v9 = *result;
        v16 += 96;
        --v15;
      }
    }
  }
  else if ( *(_WORD *)(*result + 76) )
  {
    v41 = v11 - 1;
    for ( i = 92; ; i += 96 )
    {
      v43 = (unsigned __int32 *)(FIELD_U32(v9, 24) + i);
      *(_DWORD *)(v10 + i - 92) = *(v43 - 10) & 0xF870000;
      v44 = (_QWORD *)(v10 + i - 76);
      v45 = *(v43 - 7);
      *v44 = *(_QWORD *)(v43 - 9);
      v44[1] = v45;
      v46.n128_u64[0] = -1;
      v46.n128_u64[1] = 0xFFFFFFFFLL;
      v73 = *(int64x2_t *)(v43 - 6);
      v47 = (int8x8x2_t)vandq_s64(v73, v46);
      *(int8x8_t *)&v48.n128_i8[8] = vtbl2_s8(v47, (int8x8_t)0xF0E0D0C07060504LL);
      v48.n128_u64[0] = vtbl2_s8(v47, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
      *(int8x8_t *)&v49.n128_i8[8] = vtbl2_s8(v47, (int8x8_t)0xF0E0D0C03020100LL);
      v49.n128_u64[0] = vtbl2_s8(v47, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
      v50.n128_u64[0] = vtbl2_s8(v47, (int8x8_t)0xB0A09080B0A0908LL).n64_u64[0];
      v51.n128_u64[0] = vtbl2_s8(v47, (int8x8_t)0x302010007060504LL).n64_u64[0];
      v52 = vmulq_lane_f32(v48, *(float32x2_t *)&v73.n128_i8[8], 1);
      v53 = vmulq_f32((float32x4_t)v47, v49);
      v50.n128_u64[1] = v48.n128_u64[1];
      v51.n128_u64[1] = v49.n128_u64[1];
      v54 = vaddq_f32(v52, v52);
      v55 = vmulq_f32(v50, v50);
      v56 = vmulq_f32(v51, v51);
      *(float32x4_t *)v77.val[2].n64_u64 = vaddq_f32(v53, v53);
      *(float32x4_t *)v78.val[2].n64_u64 = vsubq_f32(*(float32x4_t *)v77.val[2].n64_u64, v54);
      *(float32x4_t *)v78.val[0].n64_u64 = vaddq_f32(*(float32x4_t *)v77.val[2].n64_u64, v54);
      v54.n128_u64[0] = 0x3F8000003F800000LL;
      v54.n128_u64[1] = 1065353216;
      *(float32x4_t *)v77.val[0].n64_u64 = vsubq_f32(v54, vaddq_f32(vaddq_f32(v56, v56), vaddq_f32(v55, v55)));
      v77.val[3] = vtbl4_s8(v78, (int8x8_t)0x706050413121110LL);
      v77.val[2] = vtbl4_s8(v78, (int8x8_t)0x1B1A191803020100LL);
      *(int8x8_t *)&v55.n128_i8[8] = vtbl4_s8(v77, (int8x8_t)0xF0E0D0C17161514LL);
      v55.n128_u64[0] = vtbl4_s8(v77, (int8x8_t)0x1312111003020100LL).n64_u64[0];
      v56.n128_u64[0] = vtbl4_s8(v78, (int8x8_t)0x1F1E1D1C1F1E1D1CLL).n64_u64[0];
      *(int8x8_t *)&v56.n128_i8[8] = vtbl4_s8(v78, (int8x8_t)0x171615140B0A0908LL);
      v78.val[0].n64_u64[0] = *((_QWORD *)v43 - 1);
      v78.val[3] = vtbl4_s8(v77, (int8x8_t)0xF0E0D0C1F1E1D1CLL);
      v78.val[1].n64_u32[0] = *v43;
      v57 = (_QWORD *)(v10 + i - 12);
      v78.val[2] = vtbl4_s8(v77, (int8x8_t)0x70605041B1A1918LL);
      v77.val[2].n64_u64[0] = v56.n128_u64[1];
      *(float32x4_t *)(v10 + i - 60) = v55;
      v58 = (_QWORD *)(v10 + i - 44);
      v77.val[3].n64_u64[0] = v56.n128_u64[0];
      *v58 = v78.val[2].n64_u64[0];
      v58[1] = v78.val[3].n64_u64[0];
      v59 = (int8x8_t *)(v10 + i - 28);
      FIELD_U64(v59, 0x0)[0] = vtbl4_s8(v77, (int8x8_t)0x1716151413121110LL).n64_u64[0];
      v59[1].n64_u64[0] = vtbl4_s8(v77, (int8x8_t)0xF0E0D0C0B0A0908LL).n64_u64[0];
      *v57 = v78.val[0].n64_u64[0];
      v57[1] = v78.val[1].n64_u32[0];
      if ( !v41 )
        break;
      v9 = *result;
      --v41;
    }
  }
  return result;
}
