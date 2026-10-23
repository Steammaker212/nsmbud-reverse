/* sub_60292D70
 * address: 0x60292D70   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int32 __fastcall sub_60292D70(int a1, _DWORD *a2)
{
  unsigned __int32 result; // r0
  unsigned int v5; // r1
  float *v6; // r1
  unsigned int v7; // r1
  float v8; // s4
  float v9; // s8
  float *v10; // r2
  float v11; // s0
  float v12; // s14
  float v13; // s3
  float32x4_t v14; // q9
  float32x4_t v15; // q11
  int32x4_t v16; // q10
  int32x4_t v17; // q12
  float32x4_t v18; // q8
  float32x4_t v19; // q15
  float32x4_t v20; // q14
  int8x16_t v21; // q10
  int32x4_t v22; // q2
  float32x4_t v23; // q14
  float32x4_t v24; // q9
  int8x16_t v25; // q12
  int8x16_t v26; // q11
  float32x2_t v27; // [sp+30h] [bp-70h]
  unsigned int v28; // [sp+38h] [bp-68h]
  float32x2_t v29; // [sp+40h] [bp-60h]
  unsigned int v30; // [sp+48h] [bp-58h]
  float32x2_t v31; // [sp+50h] [bp-50h]
  unsigned int v32; // [sp+58h] [bp-48h]
  unsigned __int64 v33; // [sp+68h] [bp-38h]
  unsigned __int64 v34; // [sp+78h] [bp-28h]

  sub_602918C0(a1);
  result = 7604;
  v5 = FIELD_U32(a1, 7604);
  if ( v5 != -1 )
  {
    if ( v5 >= 4 )
      v5 = 0;
    v6 = *(float **)(dword_60CBF354 + 4 * v5 + 32);
    LODWORD(v33) = 0;
    LODWORD(v34) = 0;
    *((float *)&v33 + 1) = *v6 - (float)(FIELD_F32(a1, 108) + FIELD_F32(a1, 572));
    *((float *)&v34 + 1) = v6[1] - (float)(FIELD_F32(a1, 112) + FIELD_F32(a1, 576));
    v7 = -FIELD_U32(a1, 164);
    v8 = (float)(0.024541 * 0.0) + 0.0;
    v9 = (float)(-0.00030118 * 0.0) + 1.0;
    v10 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
    v11 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
    v12 = *v10 + (float)(v11 * v10[1]);
    v13 = v10[2] + (float)(v11 * v10[3]);
    v27.n64_f32[0] = v9 * v13;
    v29.n64_f32[0] = v9 * v12;
    v31.n64_f32[0] = -v8;
    v27.n64_f32[1] = (float)((float)(v8 * v8) * v13) - (float)(v9 * v12);
    v29.n64_f32[1] = (float)(v9 * v13) + (float)((float)(v8 * v8) * v12);
    v31.n64_f32[1] = v8 * v9;
    *(float *)&v28 = (float)(v8 * (float)(v9 * v13)) + (float)(v8 * v12);
    *(float *)&v30 = (float)(v8 * (float)(v9 * v12)) - (float)(v8 * v13);
    *(float *)&v32 = v9 * v9;
    v14.n128_u64[0] = 1065353216;
    v14.n128_u64[1] = v33;
    v15.n128_u64[0] = 0x3F80000000000000LL;
    v15.n128_u64[1] = v34;
    v16 = vdupq_lane_s32((int32x2_t)v28, 1);
    v17 = vdupq_lane_s32((int32x2_t)v30, 1);
    v18 = vmlaq_lane_f32(vmulq_n_f32(v14, v9 * v13), v15, v27, 1);
    v19.n128_u64[0] = 0;
    v19.n128_u64[1] = 1065353216;
    v20 = vmulq_n_f32(v14, v9 * v12);
    v21 = vextq_s8((int8x16_t)vzipq_s32(v16, v16).val, (int8x16_t)0LL, 0xCu);
    v22 = vdupq_lane_s32((int32x2_t)COERCE_UNSIGNED_INT(v9 * v9), 1);
    v23 = vmlaq_lane_f32(vmlaq_lane_f32(v20, v15, v29, 1), v19, (float32x2_t)v30, 0);
    v24 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v14, -v8), v15, v31, 1), v19, (float32x2_t)v32, 0);
    v25 = vextq_s8((int8x16_t)vzipq_s32(v17, v17).val, (int8x16_t)0LL, 0xCu);
    v26 = vextq_s8((int8x16_t)vzipq_s32(v22, v22).val, (int8x16_t)0LL, 0xCu);
    *a2 = vaddq_f32(vextq_s8(v21, v21, 4u), vmlaq_lane_f32(v18, v19, (float32x2_t)v28, 0)).n128_u32[3];
    a2[1] = vaddq_f32(vextq_s8(v25, v25, 4u), v23).n128_u32[3];
    result = vaddq_f32(vextq_s8(v26, v26, 4u), v24).n128_u32[3];
    a2[2] = result;
  }
  return result;
}
