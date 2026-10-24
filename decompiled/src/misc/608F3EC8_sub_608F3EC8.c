/* sub_608F3EC8
 * address: 0x608F3EC8   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F3EC8(int a1, int a2, int a3, float32x2_t *a4)
{
  int result; // r0
  unsigned int *v8; // r2
  unsigned int v9; // r5
  unsigned int v10; // r9
  int v11; // r8
  int32x2_t v12; // d5
  int32x2_t v13; // d3
  int32x4_t v14; // q10
  int32x4_t v15; // q12
  int32x2_t v16; // d1
  int32x4_t v17; // q3
  int8x16_t v18; // q13
  float32x4_t v19; // q10
  float32x4_t v20; // q15
  float32x4_t v21; // q14
  int8x16_t v22; // q2
  float32x4_t v23; // q13
  float32x4_t v24; // q12
  int8x16_t v25; // q1
  float32x4_t v26; // q14
  float32x4_t v27; // q15
  int32x4_t v28; // q3
  float32x4_t v29; // q9
  int8x16_t v30; // q11
  int v31; // r5
  float32x4_t *v32; // r0
  __int64 v33; // r0
  float32x4_t v34; // 0:q8.16

  result = FIELD_U8(a1, 1968);
  if ( !result )
  {
    v8 = (unsigned int *)(a1 + 1956);
    do
      v9 = __ldrex(v8);
    while ( __strex(v9 + 256, v8) );
    v10 = FIELD_U32(a1, 1964);
    if ( v9 + 256 - FIELD_U32(a1, 1960) <= v10 )
    {
      v11 = FIELD_U32(a2, 192);
      dword_60CC7818(v11, a1 + 24, 31);
      dword_60CC7810(v11, 3, a1 + 520);
      dword_60CC7814(v11, 1, a1 + 536);
      v12.n64_u64[0] = a4[1].n64_u64[0];
      v13.n64_u64[0] = FIELD_U64(a4 + (3) * 8, 0x0)[0];
      v34 = *(float32x4_t *)(a3 + 16);
      v14 = vdupq_lane_s32(v12, 1);
      v15 = vdupq_lane_s32(v13, 1);
      v16.n64_u64[0] = a4[5].n64_u64[0];
      v17 = vdupq_lane_s32(v16, 1);
      v18 = vextq_s8((int8x16_t)vzipq_s32(v14, v14).val, (int8x16_t)0, 0xCu);
      v19 = *(float32x4_t *)(a3 + 32);
      v20 = vextq_s8(v18, v18, 4u);
      v21 = vmlaq_lane_f32(
              vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a3, FIELD_F32(a4, 0x0)[0]), v34, (float32x2_t)FIELD_U64(a4, 0x0)[0], 1),
              v19,
              v12,
              0);
      v22 = vextq_s8((int8x16_t)vzipq_s32(v15, v15).val, (int8x16_t)0, 0xCu);
      v23 = vmlaq_lane_f32(
              vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a3, FIELD_F32(a4 + (2) * 8, 0x0)[0]), v34, a4[2], 1),
              v19,
              v13,
              0);
      v24 = vmlaq_lane_f32(
              vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a3, FIELD_F32(a4 + (4) * 8, 0x0)[0]), v34, a4[4], 1),
              v19,
              v16,
              0);
      v25 = vextq_s8((int8x16_t)vzipq_s32(v17, v17).val, (int8x16_t)0, 0xCu);
      v26 = vaddq_f32(v20, v21);
      v27 = vextq_s8(v22, v22, 4u);
      *(float32x2_t *)&v22.n128_i8[8] = a4[7];
      v28 = vdupq_lane_s32(*(int32x2_t *)&v22.n128_i8[8], 1);
      v29 = vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a3, FIELD_F32(a4 + (6) * 8, 0x0)[0]), v34, a4[6], 1);
      v30 = vextq_s8((int8x16_t)vzipq_s32(v28, v28).val, (int8x16_t)0, 0xCu);
      v31 = v9 % v10;
      v32 = (float32x4_t *)(FIELD_U32(a1, 1952) + v31);
      *v32 = v26;
      v32[1] = vaddq_f32(v27, v23);
      v32[2] = vaddq_f32(vextq_s8(v25, v25, 4u), v24);
      v32[3] = vaddq_f32(vextq_s8(v30, v30, 4u), vmlaq_lane_f32(v29, v19, *(float32x2_t *)&v22.n128_i8[8], 0));
      v33 = dword_60CC746C(a1 + 1904);
      return dword_60CC7824(v11, 0, 0, dword_60CC7824, v33 + v31, (v33 + (unsigned __int64)(unsigned int)v31) >> 32, 64);
    }
    else
    {
      FIELD_U8(a1, 1968) = 1;
      return 1;
    }
  }
  return result;
}
