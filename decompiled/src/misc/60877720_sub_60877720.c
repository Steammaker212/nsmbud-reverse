/* sub_60877720
 * address: 0x60877720   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60877720(int result, int a2)
{
  int v2; // r8
  int v3; // lr
  int v4; // r1
  int v5; // r2
  __int64 v6; // d0
  __int64 v7; // d2
  int v8; // r9
  unsigned int v9; // s2
  unsigned int v10; // s6
  int64x2_t v11; // q1
  int8x8x2_t v12; // q1
  float32x4_t v13; // q2
  float32x4_t v14; // q3
  float32x4_t v15; // q4
  float32x4_t v16; // q5
  float32x4_t v17; // q0
  float32x4_t v18; // q1
  float32x4_t v19; // q0
  float32x4_t v20; // q2
  float32x4_t v21; // q3
  int64x2_t v22; // 0:q0.16
  int8x8x4_t v23; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  int8x8x4_t v24; // 0:d8.8,8:d9.8,16:d10.8,24:d11.8

  v2 = FIELD_U16(result, 64);
  if ( FIELD_U16(result, 64) )
  {
    v3 = FIELD_U32(a2, 12);
    v4 = 0;
    v5 = FIELD_U32(result, 48) + 16;
    do
    {
      if ( *(int *)(FIELD_U32(result, 56) + 4 * v4) >= 0 )
      {
        v6 = *(_QWORD *)v5;
        v7 = *(_QWORD *)(v5 - 12);
        v9 = FIELD_U32(v5, 8);
        v8 = v3 + 96 * (*(_DWORD *)(FIELD_U32(result, 56) + 4 * v4) & 0x7FFF);
        v10 = *(_DWORD *)(v5 - 4);
        *(_DWORD *)v8 = *(_DWORD *)v8 & 0xF07FFFFF | (((*(_DWORD *)(v5 - 16) >> 23) & 0x1F) << 23);
        FIELD_U64(v8, 16) = v7;
        FIELD_U64(v8, 24) = v10;
        FIELD_U64(v8, 80) = v6;
        FIELD_U64(v8, 88) = v9;
        v22 = *(int64x2_t *)(v5 + 16);
        v11.n128_u64[0] = -1;
        v11.n128_u64[1] = 0xFFFFFFFFLL;
        v12 = (int8x8x2_t)vandq_s64(v22, v11);
        *(int8x8_t *)&v13.n128_i8[8] = vtbl2_s8(v12, (int8x8_t)0xF0E0D0C07060504LL);
        v13.n128_u64[0] = vtbl2_s8(v12, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
        *(int8x8_t *)&v14.n128_i8[8] = vtbl2_s8(v12, (int8x8_t)0xF0E0D0C03020100LL);
        v14.n128_u64[0] = vtbl2_s8(v12, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
        v15.n128_u64[0] = vtbl2_s8(v12, (int8x8_t)0xB0A09080B0A0908LL).n64_u64[0];
        v16.n128_u64[0] = vtbl2_s8(v12, (int8x8_t)0x302010007060504LL).n64_u64[0];
        v17 = vmulq_lane_f32(v13, *(float32x2_t *)&v22.n128_i8[8], 1);
        v18 = vmulq_f32((float32x4_t)v12, v14);
        v15.n128_u64[1] = v13.n128_u64[1];
        v16.n128_u64[1] = v14.n128_u64[1];
        v19 = vaddq_f32(v17, v17);
        v20 = vmulq_f32(v15, v15);
        v21 = vmulq_f32(v16, v16);
        *(float32x4_t *)v23.val[2].n64_u64 = vaddq_f32(v18, v18);
        *(float32x4_t *)v24.val[2].n64_u64 = vsubq_f32(*(float32x4_t *)v23.val[2].n64_u64, v19);
        *(float32x4_t *)v24.val[0].n64_u64 = vaddq_f32(*(float32x4_t *)v23.val[2].n64_u64, v19);
        v19.n128_u64[0] = 0x3F8000003F800000LL;
        v19.n128_u64[1] = 1065353216;
        *(float32x4_t *)v23.val[0].n64_u64 = vsubq_f32(v19, vaddq_f32(vaddq_f32(v21, v21), vaddq_f32(v20, v20)));
        v23.val[3] = vtbl4_s8(v24, (int8x8_t)0x706050413121110LL);
        v23.val[2] = vtbl4_s8(v24, (int8x8_t)0x1B1A191803020100LL);
        *(int8x8_t *)&v20.n128_i8[8] = vtbl4_s8(v23, (int8x8_t)0xF0E0D0C17161514LL);
        v20.n128_u64[0] = vtbl4_s8(v23, (int8x8_t)0x1312111003020100LL).n64_u64[0];
        v21.n128_u64[0] = vtbl4_s8(v24, (int8x8_t)0x1F1E1D1C1F1E1D1CLL).n64_u64[0];
        *(int8x8_t *)&v21.n128_i8[8] = vtbl4_s8(v24, (int8x8_t)0x171615140B0A0908LL);
        v24.val[1] = vtbl4_s8(v23, (int8x8_t)0xF0E0D0C1F1E1D1CLL);
        v24.val[0] = vtbl4_s8(v23, (int8x8_t)0x70605041B1A1918LL);
        v23.val[2].n64_u64[0] = v21.n128_u64[1];
        *(float32x4_t *)(v8 + 32) = v20;
        v23.val[3].n64_u64[0] = v21.n128_u64[0];
        FIELD_U64(v8, 48) = v24.val[0].n64_u64[0];
        FIELD_U64(v8, 56) = v24.val[1].n64_u64[0];
        *(int8x8_t *)(v8 + 64) = vtbl4_s8(v23, (int8x8_t)0x1716151413121110LL);
        *(int8x8_t *)(v8 + 72) = vtbl4_s8(v23, (int8x8_t)0xF0E0D0C0B0A0908LL);
      }
      ++v4;
      v5 += 48;
    }
    while ( v2 != v4 );
  }
  return result;
}
