/* sub_60879940
 * address: 0x60879940   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60879940(int *result, int a2)
{
  unsigned __int16 v2; // lr
  int v3; // r12
  int v4; // r4
  int8x8_t *v5; // r2
  int v6; // r1
  float v7; // s6
  unsigned __int64 *v8; // lr
  float v9; // s6
  int8x8_t *v10; // r11
  unsigned __int32 v11; // r5
  unsigned __int32 v12; // r6
  unsigned __int32 v13; // r7
  unsigned __int64 v14; // d5
  int64x2_t v15; // q3
  int8x8x2_t v16; // q3
  float32x4_t v17; // q4
  float32x4_t v18; // q5
  float32x4_t v19; // q2
  float32x4_t v20; // q6
  float32x4_t v21; // q7
  float32x4_t v22; // q3
  float32x4_t v23; // q2
  float32x4_t v24; // q4
  float32x4_t v25; // q5
  int8x8_t *v26; // r3
  int64x2_t v27; // 0:q2.16
  int8x8x4_t v28; // 0:d4.8,8:d5.8,16:d6.8,24:d7.8
  int8x8x4_t v29; // 0:d12.8,8:d13.8,16:d14.8,24:d15.8
  int8x8x4_t v30; // 0:d16.8,8:d17.8,16:d18.8,24:d19.8

  v2 = *((_WORD *)result + 3);
  if ( v2 )
  {
    v3 = *result;
    v4 = 0;
    v5 = (int8x8_t *)(FIELD_U32(a2, 12) + 48);
    v6 = *result;
    do
    {
      v7 = FIELD_F32(v6, 68);
      if ( fabsf(v7) >= 0.001 )
      {
        if ( fabsf(v7 + -1.0) >= 0.001 )
        {
          v9 = 1.0 / v7;
          *(float32x4_t *)v6 = vmulq_n_f32(*(float32x4_t *)v6, v9);
          *(float32x4_t *)(v6 + 16) = vmulq_n_f32(*(float32x4_t *)(v6 + 16), v9);
          v8 = (unsigned __int64 *)(v3 + 80 * v4 + 16);
        }
        else
        {
          v8 = (unsigned __int64 *)(v6 + 16);
        }
        v10 = v5 - 4;
        v5[-6].n64_u32[0] = (v5[-6].n64_u32[0] & 0xF07FFFFF | (((FIELD_U32(v6, 64) >> 23) & 0x1F) << 23)) ^ 0xF800000;
        v11 = FIELD_U32(v6, 4);
        v12 = FIELD_U32(v6, 8);
        v13 = FIELD_U32(v6, 12);
        FIELD_U32(v10, 0x0)[0] = *(_DWORD *)v6;
        FIELD_U32(v10, 0x0)[1] = v11;
        v10[1].n64_u32[0] = v12;
        v10[1].n64_u32[1] = v13;
        v14 = v8[1];
        FIELD_U64(v5 + (4) * 8, 0x0)[0] = *v8;
        v5[5].n64_u64[0] = v14;
        v15.n128_u64[0] = -1;
        v15.n128_u64[1] = 0xFFFFFFFFLL;
        v27 = *(int64x2_t *)(v6 + 32);
        v16 = (int8x8x2_t)vandq_s64(v27, v15);
        *(int8x8_t *)&v17.n128_i8[8] = vtbl2_s8(v16, (int8x8_t)0xF0E0D0C07060504LL);
        v17.n128_u64[0] = vtbl2_s8(v16, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
        *(int8x8_t *)&v18.n128_i8[8] = vtbl2_s8(v16, (int8x8_t)0xF0E0D0C03020100LL);
        v19 = vmulq_lane_f32(v17, *(float32x2_t *)&v27.n128_i8[8], 1);
        v18.n128_u64[0] = vtbl2_s8(v16, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
        v20.n128_u64[0] = vtbl2_s8(v16, (int8x8_t)0xB0A09080B0A0908LL).n64_u64[0];
        v21.n128_u64[0] = vtbl2_s8(v16, (int8x8_t)0x302010007060504LL).n64_u64[0];
        v22 = vmulq_f32((float32x4_t)v16, v18);
        v20.n128_u64[1] = v17.n128_u64[1];
        v21.n128_u64[1] = v18.n128_u64[1];
        v23 = vaddq_f32(v19, v19);
        v24 = vmulq_f32(v20, v20);
        v25 = vmulq_f32(v21, v21);
        *(float32x4_t *)v28.val[2].n64_u64 = vaddq_f32(v22, v22);
        *(float32x4_t *)v29.val[2].n64_u64 = vsubq_f32(*(float32x4_t *)v28.val[2].n64_u64, v23);
        *(float32x4_t *)v29.val[0].n64_u64 = vaddq_f32(*(float32x4_t *)v28.val[2].n64_u64, v23);
        v23.n128_u64[0] = 0x3F8000003F800000LL;
        v23.n128_u64[1] = 1065353216;
        v26 = v5 - 2;
        *(float32x4_t *)v28.val[0].n64_u64 = vsubq_f32(v23, vaddq_f32(vaddq_f32(v25, v25), vaddq_f32(v24, v24)));
        v28.val[3] = vtbl4_s8(v29, (int8x8_t)0x706050413121110LL);
        v28.val[2] = vtbl4_s8(v29, (int8x8_t)0x1B1A191803020100LL);
        v30.val[3] = vtbl4_s8(v29, (int8x8_t)0x1F1E1D1C1F1E1D1CLL);
        v30.val[2] = vtbl4_s8(v29, (int8x8_t)0x171615140B0A0908LL);
        v30.val[0].n64_u64[0] = v28.val[0].n64_u64[0];
        FIELD_U64(v26, 0x0)[0] = vtbl4_s8(v28, (int8x8_t)0x1312111003020100LL).n64_u64[0];
        v26[1].n64_u64[0] = vtbl4_s8(v28, (int8x8_t)0xF0E0D0C17161514LL).n64_u64[0];
        v30.val[1].n64_u64[0] = v28.val[1].n64_u64[0];
        FIELD_U64(v5, 0x0)[0] = vtbl4_s8(v28, (int8x8_t)0x70605041B1A1918LL).n64_u64[0];
        v5[1].n64_u64[0] = vtbl4_s8(v28, (int8x8_t)0xF0E0D0C1F1E1D1CLL).n64_u64[0];
        FIELD_U64(v5 + (2) * 8, 0x0)[0] = vtbl4_s8(v30, (int8x8_t)0x1716151413121110LL).n64_u64[0];
        v5[3].n64_u64[0] = vtbl4_s8(v30, (int8x8_t)0xF0E0D0C0B0A0908LL).n64_u64[0];
        v2 = *((_WORD *)result + 3);
      }
      ++v4;
      v5 += 12;
      v6 += 80;
    }
    while ( v4 < v2 );
  }
  return result;
}
