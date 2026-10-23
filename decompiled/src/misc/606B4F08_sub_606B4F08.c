/* sub_606B4F08
 * address: 0x606B4F08   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B4F08(int a1, int32x2_t *a2)
{
  int v4; // r7
  ModelWrapper **v5; // r4
  unsigned int v6; // r2
  float32x2_t *v7; // r0
  float32x2_t *v8; // r6
  float32x2_t v9; // d4
  int32x2_t v10; // d5
  int32x2_t v11; // d1
  int32x2_t v12; // d3
  int32x4_t v13; // q11
  int32x4_t v14; // q15
  float32x4_t v15; // q9
  float32x4_t v16; // q14
  float32x4_t v17; // q10
  int8x16_t v18; // q11
  int32x4_t v19; // q2
  int8x16_t v20; // q15
  int8x16_t v21; // q12
  _OWORD v23[4]; // [sp+0h] [bp-48h] BYREF
  float32x4_t v24; // 0:q8.16
  float32x4_t v25; // 0:q10.16
  float32x4_t v26; // 0:q12.16

  v4 = FIELD_U32(a1, 108);
  if ( v4 )
  {
    v5 = (ModelWrapper **)(a1 + 20);
    sub_606447F4((_DWORD *)(a1 + 20), *(float *)v4);
    v6 = FIELD_U32(v4, 4);
    FIELD_U32(a1, 108) = 0;
    FIELD_U32(a1, 112) = v6;
  }
  else
  {
    v6 = FIELD_U32(a1, 112);
    v5 = (ModelWrapper **)(a1 + 20);
  }
  v7 = a2 + 4;
  v9.n64_u64[0] = FIELD_U64(a2, 0x0)[0];
  v10.n64_u64[0] = a2[1].n64_u64[0];
  v8 = a2 + 2;
  v25 = *(float32x4_t *)(a1 + 44);
  v11.n64_u64[0] = v8[1].n64_u64[0];
  v12.n64_u64[0] = v7[1].n64_u64[0];
  v26 = *(float32x4_t *)(a1 + 60);
  v13 = vdupq_lane_s32(v10, 1);
  v14 = vdupq_lane_s32(v11, 1);
  v24 = *(float32x4_t *)(a1 + 76);
  v15 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v25, v9.n64_f32[0]), v26, v9, 1), v24, v10, 0);
  v16 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(v25, FIELD_F32(v8, 0x0)[0]), v26, (float32x2_t)FIELD_U64(v8, 0x0)[0], 1),
          v24,
          v11,
          0);
  v17 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(v25, FIELD_F32(v7, 0x0)[0]), v26, (float32x2_t)FIELD_U64(v7, 0x0)[0], 1),
          v24,
          v12,
          0);
  v18 = vextq_s8((int8x16_t)vzipq_s32(v13, v13).val, (int8x16_t)0, 0xCu);
  v19 = vdupq_lane_s32(v12, 1);
  v20 = vextq_s8((int8x16_t)vzipq_s32(v14, v14).val, (int8x16_t)0, 0xCu);
  v23[0] = vaddq_f32(vextq_s8(v18, v18, 4u), v15);
  v21 = vextq_s8((int8x16_t)vzipq_s32(v19, v19).val, (int8x16_t)0, 0xCu);
  v23[1] = vaddq_f32(vextq_s8(v20, v20, 4u), v16);
  v23[2] = vaddq_f32(vextq_s8(v21, v21, 4u), v17);
  return sub_60644758(v5, (unsigned int *)v23, v6);
}
