/* Mtx34_rotateX
 * address: 0x60832AE0   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x2_t *__fastcall Mtx34_rotateX(float32x2_t *a1, unsigned int *a2)
{
  unsigned __int32 v2; // r7
  unsigned __int32 v3; // r8
  unsigned int v4; // r1
  float *v5; // r2
  float v6; // s8
  int32x4_t v7; // q9
  float32x4_t *v8; // r1
  float32x4_t v9; // q10
  float32x4_t v10; // q13
  int32x4_t v11; // q15
  int8x16_t v12; // q9
  float32x4_t v13; // q14
  float32x4_t v14; // q8
  int32x4_t v15; // q2
  int8x16_t v16; // q15
  float32x2_t *result; // r0
  int8x16_t v18; // q10
  unsigned __int64 v19; // [sp+10h] [bp-68h]
  unsigned __int64 v20; // [sp+20h] [bp-58h]
  int32x2_t v21; // [sp+38h] [bp-40h]
  int32x2_t v22; // [sp+48h] [bp-30h]

  v21.n64_u64[0] = FIELD_U64(a1 + (1) * 8, 0x0)[0];
  v2 = FIELD_U32(a1 + (5) * 8, 0x0)[0];
  v3 = FIELD_U32(a1 + (5) * 8, 0x0)[1];
  v22.n64_u64[0] = FIELD_U64(a1 + (3) * 8, 0x0)[0];
  v4 = *a2;
  v5 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  LODWORD(v19) = 0;
  LODWORD(v20) = 0;
  v6 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v7 = vdupq_lane_s32(v21, 1);
  *((float *)&v19 + 1) = v5[2] + (float)(v6 * v5[3]);
  *((float *)&v20 + 1) = *v5 + (float)(v5[1] * v6);
  v8 = (float32x4_t *)&a1[4];
  v9.n128_u64[0] = v19;
  v9.n128_u64[1] = COERCE_UNSIGNED_INT(-*((float *)&v20 + 1));
  v10.n128_u64[0] = v20;
  v10.n128_u64[1] = HIDWORD(v19);
  v11 = vdupq_lane_s32(v22, 1);
  v12 = vextq_s8((int8x16_t)vzipq_s32(v7, v7).val, (int8x16_t)0, 0xCu);
  v13 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32((float32x4_t)0x3F800000uLL, FIELD_F32(a1 + (2) * 8, 0x0)[0]), v9, a1[2], 1),
          v10,
          v22,
          0);
  v14 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32((float32x4_t)0x3F800000uLL, FIELD_F32(a1 + (4) * 8, 0x0)[0]), v9, a1[4], 1),
          v10,
          (float32x2_t)__PAIR64__(v3, v2),
          0);
  v15 = vdupq_lane_s32((int32x2_t)__PAIR64__(v3, v2), 1);
  v16 = vextq_s8((int8x16_t)vzipq_s32(v11, v11).val, (int8x16_t)0, 0xCu);
  *(float32x4_t *)FIELD_U64(a1, 0x0) = vaddq_f32(
                                  vextq_s8(v12, v12, 4u),
                                  vmlaq_lane_f32(
                                    vmlaq_lane_f32(
                                      vmulq_n_f32((float32x4_t)0x3F800000uLL, FIELD_F32(a1, 0x0)[0]),
                                      v9,
                                      (float32x2_t)FIELD_U64(a1, 0x0)[0],
                                      1),
                                    v10,
                                    v21,
                                    0));
  result = a1 + 2;
  v18 = vextq_s8((int8x16_t)vzipq_s32(v15, v15).val, (int8x16_t)0, 0xCu);
  *(float32x4_t *)FIELD_U64(result, 0x0) = vaddq_f32(vextq_s8(v16, v16, 4u), v13);
  *v8 = vaddq_f32(vextq_s8(v18, v18, 4u), v14);
  return result;
}
