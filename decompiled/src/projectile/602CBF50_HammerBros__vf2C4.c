/* HammerBros__vf2C4
 * address: 0x602CBF50   size: 412   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x60264430
// 
// Overridden by: None
__n64 __fastcall HammerBros__vf2C4(float *a1)
{
  float32x2_t *v1; // r12
  float v2; // s4
  float v3; // s0
  int v4; // r1
  int *v5; // r3
  int *v6; // r3
  float32x4_t *v7; // r2
  float32x4_t *v8; // r3
  float32x4_t *v9; // r0
  int32x2_t v10; // d7
  int32x2_t v11; // d5
  int32x4_t v12; // q11
  int32x4_t v13; // q15
  float32x4_t v14; // q8
  float32x4_t v15; // q14
  int8x16_t v16; // q11
  int32x2_t v17; // d7
  float32x4_t v18; // q10
  int32x4_t v19; // q12
  int8x16_t v20; // q15
  int8x16_t v21; // q12
  __n64 result; // d0
  float v23; // [sp+Ch] [bp-34h]
  float v24; // [sp+1Ch] [bp-24h]
  float32x4_t v25; // 0:q9.16

  v2 = a1[1583];
  v3 = a1[1579];
  v4 = *((_DWORD *)a1 + 20);
  v5 = &dword_60C91968;
  if ( v4 == 1 )
    v5 = &dword_60C9195C;
  v23 = *(float *)v5;
  v6 = &dword_60C9196C;
  if ( v4 == 1 )
    v6 = &dword_60C91960;
  v24 = *(float *)v6;
  v7 = (float32x4_t *)(a1 + 1580);
  v8 = (float32x4_t *)(a1 + 1576);
  v9 = (float32x4_t *)(a1 + 1584);
  FIELD_U64(v8, 0x0)[0] = 1065353216;
  FIELD_U64(v8, 0x0)[1] = 0;
  FIELD_U64(v7, 0x0)[0] = 0x3F80000000000000LL;
  FIELD_U64(v7, 0x0)[1] = 0;
  FIELD_U64(v9, 0x0)[0] = 0;
  FIELD_U64(v9, 0x0)[1] = 1065353216;
  v10.n64_u64[0] = v1[1].n64_u64[0];
  v11.n64_u64[0] = v1[3].n64_u64[0];
  v12 = vdupq_lane_s32(v10, 1);
  v13 = vdupq_lane_s32(v11, 1);
  v25 = *v9;
  v14 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v8, FIELD_F32(v1, 0x0)[0]), *v7, (float32x2_t)FIELD_U64(v1, 0x0)[0], 1),
          *v9,
          v10,
          0);
  v15 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v8, v1[2].n64_f32[0]), *v7, v1[2], 1), *v9, v11, 0);
  v16 = vextq_s8((int8x16_t)vzipq_s32(v12, v12).val, (int8x16_t)0LL, 0xCu);
  v17.n64_u64[0] = v1[5].n64_u64[0];
  v18 = vmlaq_lane_f32(vmulq_n_f32(*v8, v1[4].n64_f32[0]), *v7, v1[4], 1);
  v19 = vdupq_lane_s32(v17, 1);
  v20 = vextq_s8((int8x16_t)vzipq_s32(v13, v13).val, (int8x16_t)0LL, 0xCu);
  *(float32x4_t *)FIELD_U64(v1, 0x0) = vaddq_f32(vextq_s8(v16, v16, 4u), v14);
  v21 = vextq_s8((int8x16_t)vzipq_s32(v19, v19).val, (int8x16_t)0LL, 0xCu);
  *(float32x4_t *)v1[2].n64_u64 = vaddq_f32(vextq_s8(v20, v20, 4u), v15);
  *(float32x4_t *)v1[4].n64_u64 = vaddq_f32(vextq_s8(v21, v21, 4u), vmlaq_lane_f32(v18, v25, v17, 0));
  result.n64_f32[0] = v3 + v23;
  result.n64_f32[1] = v2 + v24;
  return result;
}
