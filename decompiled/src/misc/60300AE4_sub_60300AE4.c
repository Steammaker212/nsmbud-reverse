/* sub_60300AE4
 * address: 0x60300AE4   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60300AE4(int a1, _DWORD *a2)
{
  unsigned int v2; // r3
  float *v4; // r2
  unsigned int v5; // r0
  float v6; // s4
  float v7; // s8
  float *v8; // r2
  float v9; // s0
  float v10; // s14
  float v11; // s3
  int32x2_t v12; // d1
  float32x4_t v13; // q9
  float32x4_t v14; // q11
  int32x4_t v15; // q10
  int32x4_t v16; // q12
  float32x4_t v17; // q15
  int8x16_t v18; // q10
  int8x16_t v19; // q12
  float32x2_t v20; // [sp+30h] [bp-60h]
  unsigned int v21; // [sp+38h] [bp-58h]
  float32x2_t v22; // [sp+40h] [bp-50h]
  unsigned __int64 v23; // [sp+68h] [bp-28h]
  unsigned __int64 v24; // [sp+78h] [bp-18h]

  v2 = FIELD_U32(a1, 8504);
  if ( v2 == -1 )
    return 0;
  if ( v2 >= 4 )
    v2 = 0;
  v4 = *(float **)(dword_60CBF354 + 4 * v2 + 32);
  LODWORD(v23) = 0;
  LODWORD(v24) = 0;
  *((float *)&v23 + 1) = *v4 - (float)(FIELD_F32(a1, 108) + FIELD_F32(a1, 572));
  *((float *)&v24 + 1) = v4[1] - (float)(FIELD_F32(a1, 112) + FIELD_F32(a1, 576));
  v5 = -FIELD_U32(a1, 164);
  v6 = (float)(0.024541 * 0.0) + 0.0;
  v7 = (float)(-0.00030118 * 0.0) + 1.0;
  v8 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v9 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v10 = *v8 + (float)(v9 * v8[1]);
  v11 = v8[2] + (float)(v9 * v8[3]);
  v20.n64_f32[0] = v7 * v11;
  v22.n64_f32[0] = v7 * v10;
  v20.n64_f32[1] = (float)((float)(v6 * v6) * v11) - (float)(v7 * v10);
  v22.n64_f32[1] = (float)(v7 * v11) + (float)((float)(v6 * v6) * v10);
  *(float *)&v21 = (float)(v6 * (float)(v7 * v11)) + (float)(v6 * v10);
  v12.n64_u64[0] = COERCE_UNSIGNED_INT((float)(v6 * (float)(v7 * v10)) - (float)(v6 * v11));
  v13.n128_u64[0] = 1065353216;
  v13.n128_u64[1] = v23;
  v14.n128_u64[0] = 0x3F80000000000000LL;
  v14.n128_u64[1] = v24;
  v15 = vdupq_lane_s32((int32x2_t)v21, 1);
  v16 = vdupq_lane_s32(v12, 1);
  v17.n128_u64[0] = 0;
  v17.n128_u64[1] = 1065353216;
  v18 = vextq_s8((int8x16_t)vzipq_s32(v15, v15).val, (int8x16_t)0LL, 0xCu);
  v19 = vextq_s8((int8x16_t)vzipq_s32(v16, v16).val, (int8x16_t)0LL, 0xCu);
  *a2 = vaddq_f32(
          vextq_s8(v18, v18, 4u),
          vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v13, v20.n64_f32[0]), v14, v20, 1), v17, (float32x2_t)v21, 0)).n128_u32[3];
  a2[1] = vaddq_f32(
            vextq_s8(v19, v19, 4u),
            vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v13, v7 * v10), v14, v22, 1), v17, v12, 0)).n128_u32[3];
  return 1;
}
