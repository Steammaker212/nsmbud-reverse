/* sub_6092B640
 * address: 0x6092B640   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6092B640(int a1)
{
  int32x2_t v2; // d5
  int32x2_t v3; // d3
  int32x4_t v4; // q12
  int32x4_t v5; // q14
  int32x2_t v6; // d1
  float32x4_t v7; // q13
  int32x4_t v8; // q2
  int8x16_t v9; // q12
  int8x16_t v10; // q14
  float32x4_t v11; // q15
  float32x4_t v12; // q12
  int8x16_t v13; // q1
  float32x4_t v14; // q13
  float32x4_t v15; // q15
  float32x4_t v16; // q9
  int32x4_t v17; // q11
  int8x16_t v18; // q10
  float32x4_t v20; // 0:q8.16
  float32x4_t v21; // 0:q9.16
  float32x4_t v22; // 0:q11.16

  ((void (*)(void))loc_6092B744)();
  sub_6092BA74(a1);
  v2.n64_u64[0] = *(unsigned __int64 *)(a1 + 396);
  v21 = *(float32x4_t *)(a1 + 340);
  v22 = *(float32x4_t *)(a1 + 356);
  v3.n64_u64[0] = *(unsigned __int64 *)(a1 + 412);
  v4 = vdupq_lane_s32(v2, 1);
  v5 = vdupq_lane_s32(v3, 1);
  v20 = *(float32x4_t *)(a1 + 372);
  v6.n64_u64[0] = *(unsigned __int64 *)(a1 + 428);
  v7 = vmlaq_lane_f32(
         vmlaq_lane_f32(vmulq_n_f32(v21, FIELD_F32(a1, 388)), v22, *(float32x2_t *)(a1 + 388), 1),
         v20,
         v2,
         0);
  v8 = vdupq_lane_s32(v6, 1);
  v9 = vextq_s8((int8x16_t)vzipq_s32(v4, v4).val, (int8x16_t)0, 0xCu);
  v10 = vextq_s8((int8x16_t)vzipq_s32(v5, v5).val, (int8x16_t)0, 0xCu);
  v11 = vextq_s8(v9, v9, 4u);
  v12 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(v21, FIELD_F32(a1, 404)), v22, *(float32x2_t *)(a1 + 404), 1),
          v20,
          v3,
          0);
  v13 = vextq_s8((int8x16_t)vzipq_s32(v8, v8).val, (int8x16_t)0, 0xCu);
  v8.n128_u64[1] = FIELD_U64(a1, 444);
  v14 = vaddq_f32(v11, v7);
  v15 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(v21, FIELD_F32(a1, 420)), v22, *(float32x2_t *)(a1 + 420), 1),
          v20,
          v6,
          0);
  v16 = vmlaq_lane_f32(vmulq_n_f32(v21, FIELD_F32(a1, 436)), v22, *(float32x2_t *)(a1 + 436), 1);
  v17 = vdupq_lane_s32(*(int32x2_t *)&v8.n128_i8[8], 1);
  *(float32x4_t *)(a1 + 452) = v14;
  v18 = vextq_s8((int8x16_t)vzipq_s32(v17, v17).val, (int8x16_t)0, 0xCu);
  *(float32x4_t *)(a1 + 468) = vaddq_f32(vextq_s8(v10, v10, 4u), v12);
  *(float32x4_t *)(a1 + 484) = vaddq_f32(vextq_s8(v13, v13, 4u), v15);
  *(float32x4_t *)(a1 + 500) = vaddq_f32(
                                 vextq_s8(v18, v18, 4u),
                                 vmlaq_lane_f32(v16, v20, *(float32x2_t *)&v8.n128_i8[8], 0));
  return a1 + 500;
}
