/* sub_60879BD0
 * address: 0x60879BD0   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60879BD0(int *result, int a2)
{
  unsigned __int16 v2; // r12
  int v3; // r4
  int v4; // lr
  float32x4_t *v5; // r2
  float32x4_t *v6; // r11
  unsigned __int32 v7; // r3
  unsigned __int32 v8; // r12
  unsigned __int32 v9; // r5
  unsigned __int64 v10; // d3
  int64x2_t v11; // q2
  int8x8x2_t v12; // q2
  float32x4_t v13; // q3
  float32x4_t v14; // q4
  float32x4_t v15; // q5
  float32x4_t v16; // q6
  float32x4_t v17; // q1
  float32x4_t v18; // q2
  float32x4_t v19; // q1
  float32x4_t v20; // q3
  float32x4_t v21; // q4
  unsigned __int64 v22; // d1
  float32x4_t *v23; // r1
  int8x8_t *v24; // r1
  int64x2_t v25; // 0:q1.16
  int8x8x4_t v26; // 0:d2.8,8:d3.8,16:d4.8,24:d5.8
  int8x8x4_t v27; // 0:d10.8,8:d11.8,16:d12.8,24:d13.8

  v2 = *((_WORD *)result + 3);
  if ( v2 )
  {
    v3 = *result;
    v4 = 0;
    v5 = (float32x4_t *)(FIELD_U32(a2, 12) + 80);
    do
    {
      if ( fabsf(FIELD_F32(v3, 68)) >= 0.001 )
      {
        v6 = v5 - 4;
        v5[-5].n128_u32[0] = (v5[-5].n128_u32[0] & 0xF07FFFFF | (((FIELD_U32(v3, 64) >> 23) & 0x1F) << 23))
                           ^ 0xF800000;
        v7 = FIELD_U32(v3, 4);
        v8 = FIELD_U32(v3, 8);
        v9 = FIELD_U32(v3, 12);
        FIELD_U32(v6, 0x0)[0] = *(_DWORD *)v3;
        FIELD_U32(v6, 0x0)[1] = v7;
        FIELD_U32(v6, 0x0)[2] = v8;
        v5[-4].n128_u32[3] = v9;
        v10 = FIELD_U64(v3, 24);
        FIELD_U64(v5, 0x0)[0] = FIELD_U64(v3, 16);
        FIELD_U64(v5, 0x0)[1] = v10;
        v25 = *(int64x2_t *)(v3 + 32);
        v11.n128_u64[0] = -1;
        v11.n128_u64[1] = 0xFFFFFFFFLL;
        v12 = (int8x8x2_t)vandq_s64(v25, v11);
        *(int8x8_t *)&v13.n128_i8[8] = vtbl2_s8(v12, (int8x8_t)0xF0E0D0C07060504LL);
        v13.n128_u64[0] = vtbl2_s8(v12, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
        *(int8x8_t *)&v14.n128_i8[8] = vtbl2_s8(v12, (int8x8_t)0xF0E0D0C03020100LL);
        v14.n128_u64[0] = vtbl2_s8(v12, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
        v15.n128_u64[0] = vtbl2_s8(v12, (int8x8_t)0xB0A09080B0A0908LL).n64_u64[0];
        v16.n128_u64[0] = vtbl2_s8(v12, (int8x8_t)0x302010007060504LL).n64_u64[0];
        v17 = vmulq_lane_f32(v13, *(float32x2_t *)&v25.n128_i8[8], 1);
        v18 = vmulq_f32((float32x4_t)v12, v14);
        v15.n128_u64[1] = v13.n128_u64[1];
        v16.n128_u64[1] = v14.n128_u64[1];
        v19 = vaddq_f32(v17, v17);
        v20 = vmulq_f32(v15, v15);
        v21 = vmulq_f32(v16, v16);
        *(float32x4_t *)v26.val[2].n64_u64 = vaddq_f32(v18, v18);
        *(float32x4_t *)v27.val[2].n64_u64 = vsubq_f32(*(float32x4_t *)v26.val[2].n64_u64, v19);
        *(float32x4_t *)v27.val[0].n64_u64 = vaddq_f32(*(float32x4_t *)v26.val[2].n64_u64, v19);
        v19.n128_u64[0] = 0x3F8000003F800000LL;
        v19.n128_u64[1] = 1065353216;
        *(float32x4_t *)v26.val[0].n64_u64 = vsubq_f32(v19, vaddq_f32(vaddq_f32(v21, v21), vaddq_f32(v20, v20)));
        v26.val[3] = vtbl4_s8(v27, (int8x8_t)0x706050413121110LL);
        v26.val[2] = vtbl4_s8(v27, (int8x8_t)0x1B1A191803020100LL);
        *(int8x8_t *)&v20.n128_i8[8] = vtbl4_s8(v26, (int8x8_t)0xF0E0D0C17161514LL);
        v20.n128_u64[0] = vtbl4_s8(v26, (int8x8_t)0x1312111003020100LL).n64_u64[0];
        v22 = vtbl4_s8(v27, (int8x8_t)0x1F1E1D1C1F1E1D1CLL).n64_u64[0];
        v21.n128_u64[0] = vtbl4_s8(v27, (int8x8_t)0x171615140B0A0908LL).n64_u64[0];
        v27.val[1] = vtbl4_s8(v26, (int8x8_t)0xF0E0D0C1F1E1D1CLL);
        v27.val[0] = vtbl4_s8(v26, (int8x8_t)0x70605041B1A1918LL);
        v26.val[2].n64_u64[0] = v21.n128_u64[0];
        v5[-3] = v20;
        v23 = v5 - 2;
        v26.val[3].n64_u64[0] = v22;
        FIELD_U64(v23, 0x0)[0] = v27.val[0].n64_u64[0];
        FIELD_U64(v23, 0x0)[1] = v27.val[1].n64_u64[0];
        v24 = (int8x8_t *)&v5[-1];
        FIELD_U64(v24, 0x0)[0] = vtbl4_s8(v26, (int8x8_t)0x1716151413121110LL).n64_u64[0];
        v24[1].n64_u64[0] = vtbl4_s8(v26, (int8x8_t)0xF0E0D0C0B0A0908LL).n64_u64[0];
        v2 = *((_WORD *)result + 3);
      }
      ++v4;
      v5 += 6;
      v3 += 80;
    }
    while ( v4 < v2 );
  }
  return result;
}
