/* sub_6085A860
 * address: 0x6085A860   size: 1232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085A860(
        float32x2_t *a1,
        float32x4_t *a2,
        float a3,
        float a4,
        float a5,
        float a6,
        __n128 a7,
        float a8,
        float a9,
        float a10,
        float a11,
        double a12)
{
  int32x2_t v12; // d8
  unsigned __int32 v13; // r2
  unsigned __int32 v14; // r3
  unsigned __int32 v15; // r4
  unsigned __int32 v16; // r5
  unsigned __int32 v17; // r6
  unsigned __int32 v18; // r7
  unsigned __int32 v19; // r3
  unsigned __int32 v20; // r4
  unsigned __int32 v21; // r5
  unsigned __int32 v22; // r6
  unsigned __int32 v23; // r7
  unsigned __int32 v24; // r2
  int v25; // r5
  int v26; // lr
  unsigned __int32 v27; // r3
  int v28; // r12
  int v29; // r4
  unsigned __int32 v30; // r2
  int v31; // r6
  int64x2_t v32; // q10
  int64x2_t v33; // q11
  float32x4_t v34; // q8
  float32x4_t v41; // q2
  float32x4_t v42; // q11
  int64x2_t v43; // q8
  float32x4_t v44; // q9
  int64x2_t v45; // q9
  int64x2_t v46; // q10
  float32x4_t v47; // q11
  int64x2_t v48; // q12
  float32x4_t v49; // q8
  int64x2_t v50; // q8
  int64x2_t v51; // q13
  float32x4_t v52; // q10
  float32x4_t v53; // q11
  float32x4_t v54; // q3
  int64x2_t v55; // q9
  float32x4_t v56; // q8
  float32x4_t v57; // q3
  int64x2_t v58; // q2
  float32x4_t v59; // q6
  float32x4_t v60; // q4
  float32x4_t v61; // q5
  float32x4_t v62; // q12
  float32x2_t *v63; // r3
  int32x4_t v64; // q11
  int32x4_t v65; // q9
  int64x2_t v66; // q0
  int64x2_t v67; // q3
  int32x4_t v68; // q12
  int64x2_t v69; // q2
  float32x4_t v70; // q10
  float32x4_t v71; // q15
  float32x2_t *v72; // r2
  float32x2_t *v73; // r0
  int8x16_t v74; // q12
  float32x4_t v75; // q10
  float32x4_t v76; // q12
  int8x16_t v77; // q15
  int32x2_t v78; // d3
  float32x4_t v79; // q12
  float32x4_t v80; // q10
  int32x4_t v81; // q15
  float32x4_t v82; // q12
  int32x4_t v83; // q2
  int8x16_t v84; // q15
  int8x16_t v85; // q8
  int32x4_t v87; // 0:q0.16
  int32x4_t v88; // 0:q2.16
  int32x4_t v89; // 0:q10.16
  int32x4x2_t v90; // 0:kr00_32.32
  int32x4x2_t v91; // 0:kr20_32.32
  int32x4x2_t v92; // 0:q11.16,16:q14.16
  int32x4x2_t v93; // 0:q13.16,16:q9.16

  v13 = FIELD_U32(a1 + (9) * 8, 0x0)[0];
  if ( (v13 & 4) != 0 )
  {
    if ( (v13 & 1) == 0 )
      __und(0xFDEEu);
    v24 = FIELD_U32(a1 + (16) * 8, 0x0)[1];
    v25 = 4;
    v26 = FIELD_U32(v24, 16);
    v27 = v24 + 12;
    v28 = v24 + v26;
    v29 = *(unsigned __int16 *)(v24 + 12 + v26 + 2);
    v30 = 0;
    do
    {
      v31 = 0;
      if ( *(_DWORD *)(v27 + *(_DWORD *)(v28 + 4 * v25) + v26) == 1 )
        v30 = v27 + *(_DWORD *)(v28 + 4 * v25) + v26;
      else
        v31 = 1;
      if ( v25 - 3 >= v29 )
        break;
      ++v25;
    }
    while ( v31 );
    a7.n128_u32[0] = 0;
    v32.n128_u64[0] = 0xBF000000BF000000LL;
    v32.n128_u64[1] = 0xBF000000BF000000LL;
    v33.n128_u64[0] = 0x3F0000003F000000LL;
    v33.n128_u64[1] = 0x3F0000003F000000LL;
    v34 = vdupq_lane_s32((int32x2_t)a7.n128_u64[0], 0);
    v34.n128_u32[2] = FIELD_U32(v30, 20);
    _Q9 = vmulq_f32(v34, (float32x4_t)vld1q_dup_f32((const float *)&nn__util__detail__Float1Divided2Pi));
    __asm { VCGE.F32        Q12, Q9, #0.0 }
    v41 = vaddq_f32(vbslq_s64(_Q12, v33, v32), _Q9);
    a7.n128_u32[2] = nn__util__detail__FloatPi;
    _Q9.n128_u32[0] = (int)v41.n128_f32[2];
    _Q9.n128_u32[2] = (int)v41.n128_f32[0];
    v42 = vdupq_lane_s32(*(int32x2_t *)&a7.n128_i8[8], 0);
    v41.n128_f32[2] = -nn__util__detail__FloatPi;
    _Q9.n128_u32[1] = (int)v41.n128_f32[3];
    _Q9.n128_u32[3] = (int)v41.n128_f32[1];
    v41.n128_u32[0] = nn__util__detail__FloatPiDivided2;
    *(float32x2_t *)&v32.n128_i8[8] = vcvt_f32_s32((int32x2_t)_Q9.n128_u64[0]);
    a7.n128_f32[2] = -nn__util__detail__FloatPiDivided2;
    v32.n128_u64[0] = vcvt_f32_s32(*(int32x2_t *)&_Q9.n128_i8[8]).n64_u64[0];
    v12.n64_f32[0] = -nn__util__detail__SinCoefficients[2];
    *(float *)&a12 = -nn__util__detail__CosCoefficients[2];
    v43 = vmlsq_f32(v34, (float32x4_t)vld1q_dup_f32((const float *)&nn__util__detail__Float2Pi), v32);
    v44 = vdupq_lane_s32((int32x2_t)v41.n128_u64[0], 0);
    v41.n128_f32[1] = nn__util__detail__SinCoefficients[4];
    v45 = vcgtq_f32(v43, v44);
    v46 = vsubq_f32(v42, v43);
    v47 = vdupq_lane_s32(*(int32x2_t *)&v41.n128_i8[8], 0);
    v41.n128_f32[2] = -nn__util__detail__SinCoefficients[0];
    v48 = vbslq_s64(v45, v46, v43);
    v49 = vdupq_lane_s32(*(int32x2_t *)&a7.n128_i8[8], 0);
    a7.n128_f32[2] = -nn__util__detail__CosCoefficients[0];
    v41.n128_f32[0] = -v41.n128_f32[1];
    v50 = vcgtq_f32(v49, v48);
    v51 = vdupq_lane_s32(*(int32x2_t *)&a7.n128_i8[8], 0);
    a7.n128_f32[2] = -nn__util__detail__CosCoefficients[4];
    v52 = vbslq_s64(v50, vsubq_f32(v47, v48), v48);
    v53 = vmulq_f32(v52, v52);
    v54 = vmlaq_f32(
            vdupq_lane_s32(*(int32x2_t *)&a12, 0),
            v53,
            vmlaq_f32((float32x4_t)vld1q_dup_f32(&nn__util__detail__CosCoefficients[1]), v53, v51));
    v48.n128_u64[0] = 0x3F8000003F800000LL;
    v48.n128_u64[1] = 0x3F8000003F800000LL;
    v51.n128_u64[0] = 0xBF800000BF800000LL;
    v51.n128_u64[1] = 0xBF800000BF800000LL;
    v55 = vbslq_s64(v45, v51, v48);
    v48.n128_f32[0] = 1.0;
    v48.n128_f32[1] = 1.0;
    v48.n128_f32[2] = 1.0;
    v48.n128_f32[3] = 1.0;
    v56 = vbslq_s64(v50, v51, v55);
    v55.n128_f32[0] = 1.0;
    v55.n128_f32[1] = 1.0;
    v55.n128_f32[2] = 1.0;
    v55.n128_f32[3] = 1.0;
    v57 = vmulq_f32(
            v56,
            vmlaq_f32(
              v55,
              v53,
              vmlaq_f32(
                vdupq_lane_s32(*(int32x2_t *)&a7.n128_i8[8], 0),
                v53,
                vmlaq_f32((float32x4_t)vld1q_dup_f32(&nn__util__detail__CosCoefficients[3]), v53, v54))));
    v58 = vmulq_f32(
            v52,
            vmlaq_f32(
              v48,
              v53,
              vmlaq_f32(
                vdupq_lane_s32((int32x2_t)v41.n128_u64[0], 0),
                v53,
                vmlaq_f32(
                  (float32x4_t)vld1q_dup_f32(&nn__util__detail__SinCoefficients[3]),
                  v53,
                  vmlaq_f32(
                    vdupq_lane_s32(v12, 0),
                    v53,
                    vmlaq_f32(
                      (float32x4_t)vld1q_dup_f32(&nn__util__detail__SinCoefficients[1]),
                      v53,
                      vdupq_lane_s32(*(int32x2_t *)&v41.n128_i8[8], 0)))))));
    v59.n128_u32[0] = vdup_lane_s32((int32x2_t)v58.n128_u64[0], 1).n64_u32[0];
    v60.n128_u32[0] = vdup_lane_s32((int32x2_t)v57.n128_u64[0], 1).n64_u32[0];
    v56.n128_u64[0] = vtrn_s32(*(int32x2_t *)&v58.n128_i8[8], *(int32x2_t *)&v57.n128_i8[8]).val[0].n64_u64[0];
    v61.n128_u64[0] = vtrn_s32(*(int32x2_t *)&v57.n128_i8[8], *(int32x2_t *)&v58.n128_i8[8]).val[0].n64_u64[0];
    v59.n128_u64[1] = 1065353216;
    a7.n128_u32[2] = FIELD_U32(v30, 4);
    v61.n128_u64[1] = v60.n128_u32[0];
    v60.n128_u64[1] = 3212836864LL;
    v59.n128_u32[1] = v58.n128_u32[1];
    v60.n128_u32[1] = v57.n128_u32[1];
    v62 = vmulq_f32(v59, v61);
    v61.n128_u64[1] = v59.n128_u32[0];
    v63 = a1 + 10;
    v64 = vmlaq_lane_f32(
            vmulq_f32(vmulq_n_f32((float32x4_t)v56.n128_u64[0], v57.n128_f32[0]), (float32x4_t)0x3F800000BF800000uLL),
            v62,
            (float32x2_t)v58.n128_u64[0],
            0);
    v65 = vmlaq_lane_f32(
            vmulq_f32(vmulq_n_f32((float32x4_t)v56.n128_u64[0], v58.n128_f32[0]), (float32x4_t)0xBF8000003F800000LL),
            v62,
            (float32x2_t)v57.n128_u64[0],
            0);
    v58.n128_u64[0] = -1;
    v58.n128_u64[1] = 0xFFFFFFFFLL;
    v93 = vzipq_s32(vmulq_f32(v61, v60), v65);
    v92 = vzipq_s32(v64, (int32x4_t)0);
    v90 = vzipq_s32(v93.val[0], v92.val[0]);
    a7.n128_f32[1] = (float)((float)((float)(FIELD_F32(a1 + (7) * 8, 0x0)[1] * FIELD_F32(v30, 8)) * 0.5)
                           + (float)(FIELD_F32(a1 + (7) * 8, 0x0)[1] * FIELD_F32(v30, 16)))
                   - (float)(FIELD_F32(a1 + (7) * 8, 0x0)[1] * 0.5);
    a7.n128_f32[0] = (float)((float)-(float)(FIELD_F32(a1 + (7) * 8, 0x0)[0] * FIELD_F32(v30, 12))
                           - (float)((float)(FIELD_F32(a1 + (7) * 8, 0x0)[0] * a7.n128_f32[2]) * 0.5))
                   + (float)(FIELD_F32(a1 + (7) * 8, 0x0)[0] * 0.5);
    v66 = vbslq_s64(v58, v90.val[0], (int64x2_t)0x3F800000uLL);
    v60.n128_f32[0] = -a7.n128_f32[0];
    v60.n128_f32[1] = -a7.n128_f32[0];
    v89 = vtrnq_s32((int32x4_t)0x3F80000000000000uLL, vuzpq_s32((int32x4_t)0x3F80000000000000uLL, a7).val[1]).val[0];
    v67 = vbslq_s64(v58, v90.val[1], (int64x2_t)0x3F80000000000000uLL);
    v93.val[1] = vzipq_s32(v93.val[1], v92.val[1]).val[0];
    v68 = vdupq_lane_s32(*(int32x2_t *)&v66.n128_i8[8], 1);
    v92.val[1].n128_u64[0] = 0;
    v92.val[1].n128_u64[1] = 1065353216;
    v69 = vbslq_s64(v58, v93.val[1], v92.val[1]);
    v93.val[0] = vextq_s8(vextq_s8((int8x16_t)0x3F800000uLL, (int8x16_t)0x3F800000uLL, 0xCu), a7, 4u);
    v92.val[1] = vdupq_lane_s32(*(int32x2_t *)&v69.n128_i8[8], 1);
    v92.val[0] = vmlaq_lane_f32(
                   vmulq_lane_f32(v89, (float32x2_t)v66.n128_u64[0], 1),
                   v93.val[0],
                   (float32x2_t)v66.n128_u64[0],
                   0);
    v93.val[1] = vmlaq_lane_f32(
                   vmulq_lane_f32(v89, (float32x2_t)v67.n128_u64[0], 1),
                   v93.val[0],
                   (float32x2_t)v67.n128_u64[0],
                   0);
    v70 = vmlaq_lane_f32(
            vmulq_lane_f32(v89, (float32x2_t)v69.n128_u64[0], 1),
            v93.val[0],
            (float32x2_t)v69.n128_u64[0],
            0);
    v71.n128_u64[0] = 0;
    v71.n128_u64[1] = 1065353216;
    v72 = a1 + 14;
    v73 = a1 + 12;
    v74 = vextq_s8((int8x16_t)vzipq_s32(v68, v68).val, (int8x16_t)0, 0xCu);
    v93.val[0] = vextq_s8((int8x16_t)vzipq_s32(v92.val[1], v92.val[1]).val, (int8x16_t)0, 0xCu);
    v92.val[1] = vdupq_lane_s32(*(int32x2_t *)&v67.n128_i8[8], 1);
    v92.val[0] = vmlaq_lane_f32(v92.val[0], v71, *(float32x2_t *)&v66.n128_i8[8], 0);
    v93.val[1] = vmlaq_lane_f32(v93.val[1], v71, *(float32x2_t *)&v67.n128_i8[8], 0);
    v91 = vzipq_s32(v92.val[1], v92.val[1]);
    v87 = v91.val[1];
    v87.n128_f32[1] = -a7.n128_f32[1];
    v92.val[0] = vaddq_f32(vextq_s8(v74, v74, 4u), v92.val[0]);
    v87.n128_f32[0] = -a7.n128_f32[0];
    v75 = vaddq_f32(vextq_s8(v93.val[0], v93.val[0], 4u), vmlaq_lane_f32(v70, v71, *(float32x2_t *)&v69.n128_i8[8], 0));
    v92.val[1] = vextq_s8(v91.val[0], (int8x16_t)0, 0xCu);
    v76 = vmulq_f32(v92.val[0], (float32x4_t)0);
    v77 = vextq_s8((int8x16_t)vzipq_s32(v60, v60).val, (int8x16_t)0, 0xCu);
    v93.val[1] = vaddq_f32(vextq_s8(v92.val[1], v92.val[1], 4u), v93.val[1]);
    v93.val[0] = vmulq_f32(v93.val[1], (float32x4_t)0);
    v92.val[1] = vmulq_f32(v75, (float32x4_t)0);
    v88 = vtrnq_s32((int32x4_t)0, vuzpq_s32((int32x4_t)0, v87).val[1]).val[0];
    v78.n64_u64[0] = FIELD_U64(v73 + (1) * 8, 0x0)[0];
    *(float32x2_t *)&v87.n128_i8[8] = v72[1];
    *(float32x2_t *)&v67.n128_i8[8] = v63[1];
    v92.val[0] = vaddq_f32(v92.val[1], vaddq_f32(v92.val[0], v93.val[0]));
    v92.val[1] = vaddq_f32(v88, vaddq_f32(vaddq_f32(v93.val[1], v76), v92.val[1]));
    v93.val[1] = vaddq_f32(v75, vaddq_f32(v76, v93.val[0]));
    v93.val[0] = vaddq_f32(vextq_s8(v77, v77, 4u), v92.val[0]);
    v79 = vmulq_lane_f32(v92.val[1], (float32x2_t)FIELD_U64(v63, 0x0)[0], 1);
    v80 = vmulq_lane_f32(v92.val[1], (float32x2_t)FIELD_U64(v73, 0x0)[0], 1);
    v92.val[0] = vmulq_lane_f32(v92.val[1], (float32x2_t)FIELD_U64(v72, 0x0)[0], 1);
    v92.val[1] = vdupq_lane_s32(v78, 1);
    v93.val[1] = vaddq_f32(v93.val[1], (float32x4_t)0);
    v81 = vdupq_lane_s32(*(int32x2_t *)&v67.n128_i8[8], 1);
    v82 = vmlaq_lane_f32(
            vmlaq_lane_f32(v79, v93.val[0], (float32x2_t)FIELD_U64(v63, 0x0)[0], 0),
            v93.val[1],
            *(float32x2_t *)&v67.n128_i8[8],
            0);
    v92.val[0] = vmlaq_lane_f32(
                   vmlaq_lane_f32(v92.val[0], v93.val[0], (float32x2_t)FIELD_U64(v72, 0x0)[0], 0),
                   v93.val[1],
                   *(float32x2_t *)&v87.n128_i8[8],
                   0);
    v83 = vdupq_lane_s32(*(int32x2_t *)&v87.n128_i8[8], 1);
    v92.val[1] = vextq_s8((int8x16_t)vzipq_s32(v92.val[1], v92.val[1]).val, (int8x16_t)0, 0xCu);
    v84 = vextq_s8((int8x16_t)vzipq_s32(v81, v81).val, (int8x16_t)0, 0xCu);
    v93.val[1] = vaddq_f32(
                   vextq_s8(v92.val[1], v92.val[1], 4u),
                   vmlaq_lane_f32(vmlaq_lane_f32(v80, v93.val[0], (float32x2_t)FIELD_U64(v73, 0x0)[0], 0), v93.val[1], v78, 0));
    v85 = vextq_s8((int8x16_t)vzipq_s32(v83, v83).val, (int8x16_t)0, 0xCu);
    a2[8] = vaddq_f32(vextq_s8(v84, v84, 4u), v82);
    a2[9] = v93.val[1];
    a2[10] = vaddq_f32(vextq_s8(v85, v85, 4u), v92.val[0]);
  }
  else
  {
    v14 = FIELD_U32(a1 + (10) * 8, 0x0)[1];
    v15 = a1[11].n64_u32[0];
    v16 = a1[11].n64_u32[1];
    v17 = FIELD_U32(a1 + (12) * 8, 0x0)[0];
    v18 = FIELD_U32(a1 + (12) * 8, 0x0)[1];
    FIELD_U32(a2 + (8) * 16, 0x0)[0] = FIELD_U32(a1 + (10) * 8, 0x0)[0];
    FIELD_U32(a2 + (8) * 16, 0x0)[1] = v14;
    FIELD_U32(a2 + (8) * 16, 0x0)[2] = v15;
    FIELD_U32(a2 + (8) * 16, 0x0)[3] = v16;
    FIELD_U32(a2 + (9) * 16, 0x0)[0] = v17;
    FIELD_U32(a2 + (9) * 16, 0x0)[1] = v18;
    v19 = a1[13].n64_u32[1];
    v20 = FIELD_U32(a1 + (14) * 8, 0x0)[0];
    v21 = FIELD_U32(a1 + (14) * 8, 0x0)[1];
    v22 = a1[15].n64_u32[0];
    v23 = a1[15].n64_u32[1];
    FIELD_U32(a2 + (9) * 16, 0x0)[2] = a1[13].n64_u32[0];
    FIELD_U32(a2 + (9) * 16, 0x0)[3] = v19;
    FIELD_U32(a2 + (10) * 16, 0x0)[0] = v20;
    FIELD_U32(a2 + (10) * 16, 0x0)[1] = v21;
    FIELD_U32(a2 + (10) * 16, 0x0)[2] = v22;
    FIELD_U32(a2 + (10) * 16, 0x0)[3] = v23;
  }
  a2[13].n128_u8[3] = 0;
  return 0;
}
