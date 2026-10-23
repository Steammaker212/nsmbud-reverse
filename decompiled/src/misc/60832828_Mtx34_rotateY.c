/* Mtx34_rotateY
 * address: 0x60832828   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x2_t *__fastcall Mtx34_rotateY(float32x2_t *a1, unsigned int *a2)
{
  float v2; // r5
  __int64 v3; // r6
  unsigned __int32 v4; // r8
  unsigned int v5; // r1
  float *v6; // r2
  float v7; // s0
  unsigned int v8; // s2
  float32x4_t v9; // q8
  float32x4_t *v10; // r1
  int32x4_t v11; // q9
  int32x4_t v12; // q15
  float32x4_t v13; // q13
  float32x4_t v14; // q14
  int8x16_t v15; // q9
  int32x4_t v16; // q2
  int8x16_t v17; // q15
  float32x2_t *result; // r0
  int8x16_t v19; // q10
  int32x2_t v20; // [sp+38h] [bp-40h]
  int32x2_t v21; // [sp+48h] [bp-30h]

  v20.n64_u64[0] = a1[1].n64_u64[0];
  v2 = a1[4].n64_f32[0];
  v3 = *(__int64 *)((char *)a1[4].n64_i64 + 4);
  v4 = a1[5].n64_u32[1];
  v21.n64_u64[0] = a1[3].n64_u64[0];
  v5 = *a2;
  v6 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v7 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  *(float *)&v8 = *v6 + (float)(v6[1] * v7);
  v9.n128_u64[0] = COERCE_UNSIGNED_INT(v6[2] + (float)(v7 * v6[3]));
  v9.n128_u64[1] = v8;
  v10 = (float32x4_t *)&a1[4];
  v11 = vdupq_lane_s32(v20, 1);
  v12 = vdupq_lane_s32(v21, 1);
  v13.n128_u64[0] = COERCE_UNSIGNED_INT(-*(float *)&v8);
  v13.n128_u64[1] = v9.n128_u64[0];
  v14 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(v9, a1[2].n64_f32[0]), (float32x4_t)0x3F80000000000000uLL, a1[2], 1),
          v13,
          v21,
          0);
  v15 = vextq_s8((int8x16_t)vzipq_s32(v11, v11).val, (int8x16_t)0, 0xCu);
  v16 = vdupq_lane_s32((int32x2_t)__PAIR64__(v4, HIDWORD(v3)), 1);
  v17 = vextq_s8((int8x16_t)vzipq_s32(v12, v12).val, (int8x16_t)0, 0xCu);
  *(float32x4_t *)FIELD_U64(a1, 0x0) = vaddq_f32(
                                  vextq_s8(v15, v15, 4u),
                                  vmlaq_lane_f32(
                                    vmlaq_lane_f32(
                                      vmulq_n_f32(v9, FIELD_F32(a1, 0x0)[0]),
                                      (float32x4_t)0x3F80000000000000uLL,
                                      (float32x2_t)FIELD_U64(a1, 0x0)[0],
                                      1),
                                    v13,
                                    v20,
                                    0));
  result = a1 + 2;
  v19 = vextq_s8((int8x16_t)vzipq_s32(v16, v16).val, (int8x16_t)0, 0xCu);
  *(float32x4_t *)FIELD_U64(result, 0x0) = vaddq_f32(vextq_s8(v17, v17, 4u), v14);
  *v10 = vaddq_f32(
           vextq_s8(v19, v19, 4u),
           vmlaq_lane_f32(
             vmlaq_lane_f32(
               vmulq_n_f32(v9, v2),
               (float32x4_t)0x3F80000000000000uLL,
               (float32x2_t)__PAIR64__(v3, LODWORD(v2)),
               1),
             v13,
             (float32x2_t)__PAIR64__(v4, HIDWORD(v3)),
             0));
  return result;
}
