/* sub_60298998
 * address: 0x60298998   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60298998(int a1, int a2, int a3)
{
  _BYTE *v4; // r6
  int v5; // r5
  int v6; // r0
  unsigned int v7; // r1
  float *v8; // r2
  float v9; // s4
  float v10; // s8
  float v11; // s0
  float v12; // s14
  float v13; // s3
  float32x4_t v14; // q9
  float32x4_t v15; // q11
  int32x4_t v16; // q10
  float32x4_t v17; // q15
  int8x16_t v18; // q10
  int v19; // r0
  float32x2_t v21; // [sp+30h] [bp-70h]
  unsigned int v22; // [sp+38h] [bp-68h]
  unsigned __int64 v23; // [sp+68h] [bp-38h]
  unsigned __int64 v24; // [sp+78h] [bp-28h]
  unsigned __int64 v25; // [sp+88h] [bp-18h]

  v4 = (_BYTE *)(a1 + 6672);
  if ( !FIELD_U8(a1, 6672) )
  {
    v5 = FIELD_U32(a3, 64);
    Enemy__collisionFireballYoshi(a1, a2, a3);
    *v4 = 1;
    v6 = FIELD_S8(v5, 84);
    if ( (unsigned __int8)v6 != 255 )
    {
      if ( (unsigned __int8)v6 >= 6u )
        v6 = 0;
      ++*(_DWORD *)(dword_60C99DD4 + 72 * v6 + 348);
    }
    LODWORD(v23) = 0;
    LODWORD(v24) = 0;
    LODWORD(v25) = 1065353216;
    HIDWORD(v23) = FIELD_U32(v5, 120);
    HIDWORD(v24) = FIELD_U32(v5, 124);
    HIDWORD(v25) = FIELD_U32(v5, 128);
    v7 = -FIELD_U32(a1, 164);
    v8 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
    v9 = (float)(0.024541 * 0.0) + 0.0;
    v10 = (float)(-0.00030118 * 0.0) + 1.0;
    v11 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
    v12 = *v8 + (float)(v11 * v8[1]);
    v13 = v8[2] + (float)(v11 * v8[3]);
    v21.n64_f32[0] = v10 * v13;
    v21.n64_f32[1] = (float)((float)(v9 * v9) * v13) - (float)(v10 * v12);
    *(float *)&v22 = (float)(v9 * (float)(v10 * v13)) + (float)(v9 * v12);
    v14.n128_u64[0] = 1065353216;
    v14.n128_u64[1] = v23;
    v15.n128_u64[0] = 0x3F80000000000000LL;
    v15.n128_u64[1] = v24;
    v16 = vdupq_lane_s32((int32x2_t)v22, 1);
    v17.n128_u64[0] = 0;
    v17.n128_u64[1] = v25;
    v18 = vextq_s8((int8x16_t)vzipq_s32(v16, v16).val, (int8x16_t)0, 0xCu);
    v19 = 715827882;
    if ( COERCE_FLOAT(vaddq_f32(
                        vextq_s8(v18, v18, 4u),
                        vmlaq_lane_f32(
                          vmlaq_lane_f32(vmulq_n_f32(v14, v10 * v13), v15, v21, 1),
                          v17,
                          (float32x2_t)v22,
                          0)).n128_u32[3]) > 0.0 )
      v19 = -715827882;
    FIELD_U32(a1, 160) = v19;
  }
  return 1;
}
