/* sub_60298FC8
 * address: 0x60298FC8   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60298FC8(int a1, int a2, int a3)
{
  _BYTE *v5; // r6
  int v6; // r0
  int v7; // r1
  unsigned int v8; // r1
  float *v9; // r2
  float v10; // s4
  float v11; // s8
  float v12; // s0
  float v13; // s14
  float v14; // s3
  float32x4_t v15; // q9
  float32x4_t v16; // q11
  int32x4_t v17; // q10
  float32x4_t v18; // q15
  int8x16_t v19; // q10
  int v20; // r0
  float32x2_t v22; // [sp+30h] [bp-70h]
  unsigned int v23; // [sp+38h] [bp-68h]
  unsigned __int64 v24; // [sp+68h] [bp-38h]
  unsigned __int64 v25; // [sp+78h] [bp-28h]
  unsigned __int64 v26; // [sp+88h] [bp-18h]

  v5 = (_BYTE *)(a1 + 6672);
  if ( !FIELD_U8(a1, 6672) )
  {
    Enemy__collisionThrowableObject((_DWORD *)a1, a2, a3);
    v6 = FIELD_U32(a3, 64);
    *v5 = 1;
    v7 = FIELD_S8(v6, 84);
    if ( (unsigned __int8)v7 != 255 )
    {
      if ( (unsigned __int8)v7 >= 6u )
        v7 = 0;
      ++*(_DWORD *)(dword_60C99DD4 + 72 * v7 + 348);
    }
    LODWORD(v24) = 0;
    LODWORD(v25) = 0;
    LODWORD(v26) = 1065353216;
    HIDWORD(v24) = FIELD_U32(v6, 120);
    HIDWORD(v25) = FIELD_U32(v6, 124);
    HIDWORD(v26) = FIELD_U32(v6, 128);
    v8 = -FIELD_U32(a1, 164);
    v9 = (float *)((char *)sinLutTable + ((v8 >> 20) & 0xFF0));
    v10 = (float)(0.024541 * 0.0) + 0.0;
    v11 = (float)(-0.00030118 * 0.0) + 1.0;
    v12 = (float)(v8 & 0xFFFFFF) * 0.000000059605;
    v13 = *v9 + (float)(v12 * v9[1]);
    v14 = v9[2] + (float)(v12 * v9[3]);
    v22.n64_f32[0] = v11 * v14;
    v22.n64_f32[1] = (float)((float)(v10 * v10) * v14) - (float)(v11 * v13);
    *(float *)&v23 = (float)(v10 * (float)(v11 * v14)) + (float)(v10 * v13);
    v15.n128_u64[0] = 1065353216;
    v15.n128_u64[1] = v24;
    v16.n128_u64[0] = 0x3F80000000000000LL;
    v16.n128_u64[1] = v25;
    v17 = vdupq_lane_s32((int32x2_t)v23, 1);
    v18.n128_u64[0] = 0;
    v18.n128_u64[1] = v26;
    v19 = vextq_s8((int8x16_t)vzipq_s32(v17, v17).val, (int8x16_t)0, 0xCu);
    v20 = 715827882;
    if ( COERCE_FLOAT(vaddq_f32(
                        vextq_s8(v19, v19, 4u),
                        vmlaq_lane_f32(
                          vmlaq_lane_f32(vmulq_n_f32(v15, v11 * v14), v16, v22, 1),
                          v18,
                          (float32x2_t)v23,
                          0)).n128_u32[3]) > 0.0 )
      v20 = -715827882;
    FIELD_U32(a1, 160) = v20;
  }
  return 1;
}
