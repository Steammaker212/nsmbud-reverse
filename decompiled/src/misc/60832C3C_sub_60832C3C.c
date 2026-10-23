/* sub_60832C3C
 * address: 0x60832C3C   size: 1008   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x4_t *__fastcall sub_60832C3C(float32x2_t *a1, _DWORD *a2)
{
  unsigned __int32 v2; // r7
  unsigned __int32 v3; // lr
  unsigned int v4; // r2
  float *v5; // r3
  float v6; // s10
  unsigned int v7; // s2
  float32x4_t v8; // q9
  int32x4_t v9; // q14
  int32x4_t v10; // q10
  float32x4_t v11; // q13
  int32x4_t v12; // q3
  float32x4_t v13; // q15
  int8x16_t v14; // q10
  int8x16_t v15; // q11
  float32x4_t v16; // q10
  float32x4_t v17; // q9
  int8x16_t v18; // q3
  unsigned __int32 v19; // r9
  unsigned __int32 v20; // r10
  unsigned __int32 v21; // r5
  unsigned __int32 v22; // r7
  int v23; // s10
  float *v24; // r1
  float v25; // s10
  int32x4_t v26; // q10
  int32x4_t v27; // q13
  int8x16_t v28; // q10
  int8x16_t v29; // q13
  int32x4_t v30; // q3
  float32x4_t v31; // q14
  float32x4_t v32; // q9
  float32x4_t v33; // q10
  int8x16_t v34; // q11
  float32x4_t *v35; // r10
  float32x2_t *v36; // r0
  float32x2_t v37; // r2
  int32x2_t v38; // r4
  float32x2_t v39; // r6
  unsigned int v40; // r0
  float *v41; // r1
  float v42; // s0
  unsigned int v43; // s2
  int32x4_t v44; // q10
  int32x4_t v45; // q15
  int8x16_t v46; // q10
  int32x4_t v47; // q2
  int8x16_t v48; // q15
  int8x16_t v49; // q8
  float32x4_t *v51; // [sp+4h] [bp-4Ch]
  unsigned __int64 v54; // [sp+20h] [bp-30h]
  unsigned __int64 v55; // [sp+30h] [bp-20h]
  unsigned __int64 v56; // [sp+40h] [bp-10h]
  int32x2_t v57; // [sp+58h] [bp+8h]
  int32x2_t v58; // [sp+68h] [bp+18h]
  int32x2_t v59; // [sp+68h] [bp+18h]
  int32x2_t v60; // [sp+68h] [bp+18h]
  float32x2_t v61; // [sp+70h] [bp+20h]
  int32x2_t v62; // [sp+78h] [bp+28h]

  v57.n64_u64[0] = a1[1].n64_u64[0];
  v2 = a1[5].n64_u32[0];
  v3 = a1[5].n64_u32[1];
  v58.n64_u64[0] = a1[3].n64_u64[0];
  v4 = a2[1];
  v5 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v6 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  *(float *)&v7 = *v5 + (float)(v5[1] * v6);
  v8.n128_u64[0] = COERCE_UNSIGNED_INT(v5[2] + (float)(v6 * v5[3]));
  v8.n128_u64[1] = v7;
  v9 = vdupq_lane_s32((int32x2_t)__PAIR64__(v3, v2), 1);
  v10 = vdupq_lane_s32(v57, 1);
  v11.n128_u64[0] = COERCE_UNSIGNED_INT(-*(float *)&v7);
  v11.n128_u64[1] = v8.n128_u64[0];
  v12 = vdupq_lane_s32(v58, 1);
  v13 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(v8, a1[2].n64_f32[0]), (float32x4_t)0x3F80000000000000uLL, a1[2], 1),
          v11,
          v58,
          0);
  v14 = vextq_s8((int8x16_t)vzipq_s32(v10, v10).val, (int8x16_t)0, 0xCu);
  v15 = vextq_s8((int8x16_t)vzipq_s32(v9, v9).val, (int8x16_t)0, 0xCu);
  v16 = vaddq_f32(
          vextq_s8(v14, v14, 4u),
          vmlaq_lane_f32(
            vmlaq_lane_f32(
              vmulq_n_f32(v8, FIELD_F32(a1, 0x0)[0]),
              (float32x4_t)0x3F80000000000000uLL,
              (float32x2_t)FIELD_U64(a1, 0x0)[0],
              1),
            v11,
            v57,
            0));
  v17 = vaddq_f32(
          vextq_s8(v15, v15, 4u),
          vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v8, a1[4].n64_f32[0]), (float32x4_t)0x3F80000000000000uLL, a1[4], 1),
            v11,
            (float32x2_t)__PAIR64__(v3, v2),
            0));
  v18 = vextq_s8((int8x16_t)vzipq_s32(v12, v12).val, (int8x16_t)0, 0xCu);
  *(float32x4_t *)FIELD_U64(a1, 0x0) = v16;
  *(float32x4_t *)a1[2].n64_u64 = vaddq_f32(vextq_s8(v18, v18, 4u), v13);
  *(float32x4_t *)a1[4].n64_u64 = v17;
  v51 = (float32x4_t *)&a1[4];
  v19 = a1[1].n64_u32[0];
  v20 = a1[1].n64_u32[1];
  v21 = a1[5].n64_u32[0];
  v22 = a1[5].n64_u32[1];
  v59.n64_u64[0] = a1[3].n64_u64[0];
  v23 = *a2 & 0xFFFFFF;
  v24 = (float *)((char *)sinLutTable + ((*a2 >> 20) & 0xFF0));
  LODWORD(v55) = 0;
  LODWORD(v56) = 0;
  v25 = (float)(unsigned int)v23 * 0.000000059605;
  *((float *)&v55 + 1) = v24[2] + (float)(v25 * v24[3]);
  *((float *)&v56 + 1) = *v24 + (float)(v24[1] * v25);
  v15.n128_u64[0] = v55;
  v15.n128_u64[1] = COERCE_UNSIGNED_INT(-*((float *)&v56 + 1));
  v26 = vdupq_lane_s32((int32x2_t)__PAIR64__(v20, v19), 1);
  v27 = vdupq_lane_s32(v59, 1);
  v28 = vextq_s8((int8x16_t)vzipq_s32(v26, v26).val, (int8x16_t)0, 0xCu);
  v13.n128_u64[0] = v56;
  v13.n128_u64[1] = HIDWORD(v55);
  v29 = vextq_s8((int8x16_t)vzipq_s32(v27, v27).val, (int8x16_t)0, 0xCu);
  v30 = vdupq_lane_s32((int32x2_t)__PAIR64__(v22, v21), 1);
  v31 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32((float32x4_t)0x3F800000uLL, a1[2].n64_f32[0]), v15, a1[2], 1),
          v13,
          v59,
          0);
  v32 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32((float32x4_t)0x3F800000uLL, a1[4].n64_f32[0]), v15, a1[4], 1),
          v13,
          (float32x2_t)__PAIR64__(v22, v21),
          0);
  v33 = vaddq_f32(
          vextq_s8(v28, v28, 4u),
          vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32((float32x4_t)0x3F800000uLL, FIELD_F32(a1, 0x0)[0]), v15, (float32x2_t)FIELD_U64(a1, 0x0)[0], 1),
            v13,
            (float32x2_t)__PAIR64__(v20, v19),
            0));
  v34 = vextq_s8((int8x16_t)vzipq_s32(v30, v30).val, (int8x16_t)0, 0xCu);
  *(float32x4_t *)FIELD_U64(a1, 0x0) = v33;
  v35 = (float32x4_t *)&a1[2];
  *(float32x4_t *)a1[2].n64_u64 = vaddq_f32(vextq_s8(v29, v29, 4u), v31);
  *(float32x4_t *)a1[4].n64_u64 = vaddq_f32(vextq_s8(v34, v34, 4u), v32);
  v37.n64_u64[0] = FIELD_U64(a1, 0x0)[0];
  v38.n64_u64[0] = a1[1].n64_u64[0];
  v39.n64_u64[0] = a1[2].n64_u64[0];
  v36 = a1 + 3;
  v60.n64_u64[0] = FIELD_U64(v36, 0x0)[0];
  v61.n64_u64[0] = v36[1].n64_u64[0];
  v62.n64_u64[0] = v36[2].n64_u64[0];
  v40 = a2[2];
  v41 = (float *)((char *)sinLutTable + ((v40 >> 20) & 0xFF0));
  v42 = (float)(v40 & 0xFFFFFF) * 0.000000059605;
  *(float *)&v43 = *v41 + (float)(v41[1] * v42);
  *(float *)&v54 = v41[2] + (float)(v42 * v41[3]);
  *((float *)&v54 + 1) = -*(float *)&v43;
  v44 = vdupq_lane_s32(v38, 1);
  v45 = vdupq_lane_s32(v60, 1);
  v29.n128_u64[0] = 0;
  v29.n128_u64[1] = 1065353216;
  v46 = vextq_s8((int8x16_t)vzipq_s32(v44, v44).val, (int8x16_t)0, 0xCu);
  v47 = vdupq_lane_s32(v62, 1);
  v48 = vextq_s8((int8x16_t)vzipq_s32(v45, v45).val, (int8x16_t)0, 0xCu);
  *(float32x4_t *)FIELD_U64(a1, 0x0) = vaddq_f32(
                                  vextq_s8(v46, v46, 4u),
                                  vmlaq_lane_f32(
                                    vmlaq_lane_f32(
                                      vmulq_n_f32((float32x4_t)v54, v37.n64_f32[0]),
                                      (float32x4_t)__PAIR64__(v54, v43),
                                      v37,
                                      1),
                                    v29,
                                    v38,
                                    0));
  v49 = vextq_s8((int8x16_t)vzipq_s32(v47, v47).val, (int8x16_t)0, 0xCu);
  *v35 = vaddq_f32(
           vextq_s8(v48, v48, 4u),
           vmlaq_lane_f32(
             vmlaq_lane_f32(vmulq_n_f32((float32x4_t)v54, v39.n64_f32[0]), (float32x4_t)__PAIR64__(v54, v43), v39, 1),
             v29,
             v60,
             0));
  *v51 = vaddq_f32(
           vextq_s8(v49, v49, 4u),
           vmlaq_lane_f32(
             vmlaq_lane_f32(vmulq_n_f32((float32x4_t)v54, v61.n64_f32[0]), (float32x4_t)__PAIR64__(v54, v43), v61, 1),
             v29,
             v62,
             0));
  return v51;
}
