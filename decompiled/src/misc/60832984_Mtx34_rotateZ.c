/* Mtx34_rotateZ
 * address: 0x60832984   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x2_t *__fastcall Mtx34_rotateZ(float32x2_t *a1, unsigned int *a2)
{
  unsigned __int32 v2; // r7
  unsigned __int32 v3; // r8
  unsigned int v4; // r1
  float *v5; // r2
  float v6; // s0
  float32x4_t *v7; // r1
  int32x4_t v8; // q9
  int32x4_t v9; // q15
  float32x4_t v10; // q13
  float32x4_t v11; // q14
  float32x4_t v12; // q8
  int8x16_t v13; // q9
  int32x4_t v14; // q2
  int8x16_t v15; // q15
  float32x2_t *result; // r0
  int8x16_t v17; // q10
  unsigned __int64 v18; // [sp+0h] [bp-78h]
  int32x2_t v19; // [sp+38h] [bp-40h]
  int32x2_t v20; // [sp+48h] [bp-30h]

  v19.n64_u64[0] = FIELD_U64(a1 + (1) * 8, 0x0)[0];
  v2 = FIELD_U32(a1 + (5) * 8, 0x0)[0];
  v3 = FIELD_U32(a1 + (5) * 8, 0x0)[1];
  v20.n64_u64[0] = FIELD_U64(a1 + (3) * 8, 0x0)[0];
  v4 = *a2;
  v5 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v6 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  *(float *)&v18 = v5[2] + (float)(v6 * v5[3]);
  *((float *)&v18 + 1) = -(float)(*v5 + (float)(v5[1] * v6));
  v7 = (float32x4_t *)&a1[4];
  v8 = vdupq_lane_s32(v19, 1);
  v9 = vdupq_lane_s32(v20, 1);
  v10.n128_u64[0] = 0;
  v10.n128_u64[1] = 1065353216;
  v11 = vmlaq_lane_f32(
          vmlaq_lane_f32(
            vmulq_n_f32((float32x4_t)v18, FIELD_F32(a1 + (2) * 8, 0x0)[0]),
            (float32x4_t)__PAIR64__(v18, *v5 + (float)(v5[1] * v6)),
            a1[2],
            1),
          v10,
          v20,
          0);
  v12 = vmlaq_lane_f32(
          vmlaq_lane_f32(
            vmulq_n_f32((float32x4_t)v18, FIELD_F32(a1 + (4) * 8, 0x0)[0]),
            (float32x4_t)__PAIR64__(v18, *v5 + (float)(v5[1] * v6)),
            a1[4],
            1),
          v10,
          (float32x2_t)__PAIR64__(v3, v2),
          0);
  v13 = vextq_s8((int8x16_t)vzipq_s32(v8, v8).val, (int8x16_t)0, 0xCu);
  v14 = vdupq_lane_s32((int32x2_t)__PAIR64__(v3, v2), 1);
  v15 = vextq_s8((int8x16_t)vzipq_s32(v9, v9).val, (int8x16_t)0, 0xCu);
  *(float32x4_t *)FIELD_U64(a1, 0x0) = vaddq_f32(
                                  vextq_s8(v13, v13, 4u),
                                  vmlaq_lane_f32(
                                    vmlaq_lane_f32(
                                      vmulq_n_f32((float32x4_t)v18, FIELD_F32(a1, 0x0)[0]),
                                      (float32x4_t)__PAIR64__(v18, *v5 + (float)(v5[1] * v6)),
                                      (float32x2_t)FIELD_U64(a1, 0x0)[0],
                                      1),
                                    v10,
                                    v19,
                                    0));
  result = a1 + 2;
  v17 = vextq_s8((int8x16_t)vzipq_s32(v14, v14).val, (int8x16_t)0, 0xCu);
  *(float32x4_t *)FIELD_U64(result, 0x0) = vaddq_f32(vextq_s8(v15, v15, 4u), v11);
  *v7 = vaddq_f32(vextq_s8(v17, v17, 4u), v12);
  return result;
}
