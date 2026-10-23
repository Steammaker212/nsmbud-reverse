/* sub_608795F8
 * address: 0x608795F8   size: 800   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608795F8(int *result, int a2)
{
  int v2; // r11
  _QWORD *v3; // r6
  int v4; // r5
  _DWORD *v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  __int64 v9; // d17
  float32x4_t v10; // q9
  float32x4_t v11; // q11
  float32x4_t v12; // q8
  float32x4_t v13; // q12
  float32x4_t v14; // q10
  float v15; // s0
  float32x4_t v16; // q7
  float32x4_t v17; // q8
  float v18; // s16
  int8x8x2_t v19; // q8
  int8x8x2_t v20; // q1
  float32x4_t v21; // q9
  float32x4_t v22; // q10
  float32x4_t v23; // q11
  float32x4_t v24; // q12
  float32x4_t v25; // q9
  _QWORD *v26; // r0
  int *v27; // [sp+14h] [bp-9Ch]
  __int64 v28; // [sp+3Ch] [bp-74h]
  unsigned int v29; // [sp+44h] [bp-6Ch]
  float32x4_t v30; // 0:d24.8,8:d25.8
  int8x8x2_t v31; // 0:d26.8,8:d27.8

  v27 = result;
  if ( *((_WORD *)result + 3) )
  {
    v2 = 0;
    v3 = (_QWORD *)(FIELD_U32(a2, 12) + 48);
    v4 = *result;
    do
    {
      if ( fabsf(FIELD_F32(v4, 68)) >= 0.001 )
      {
        v5 = (_DWORD *)v3 - 7;
        *((_DWORD *)v3 - 12) = (*(_DWORD *)(v3 - 6) & 0xF07FFFFF | (((FIELD_U32(v4, 64) >> 23) & 0x1F) << 23))
                             ^ 0xF800000;
        v6 = FIELD_U32(v4, 4);
        v7 = FIELD_U32(v4, 8);
        v8 = FIELD_U32(v4, 12);
        *((_DWORD *)v3 - 8) = *(_DWORD *)v4;
        *v5 = v6;
        v5[1] = v7;
        v5[2] = v8;
        v9 = FIELD_U64(v4, 24);
        v3[4] = FIELD_U64(v4, 16);
        v3[5] = v9;
        v30 = *(float32x4_t *)(v4 + 48);
        v31 = *(int8x8x2_t *)(v4 + 32);
        *(int8x8_t *)&v10.n128_i8[8] = vtbl2_s8((int8x8x2_t)v30, (int8x8_t)0xF0E0D0C07060504LL);
        v10.n128_u64[0] = vtbl2_s8((int8x8x2_t)v30, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
        *(int8x8_t *)&v11.n128_i8[8] = vtbl2_s8(v31, (int8x8_t)0xF0E0D0C03020100LL);
        v11.n128_u64[0] = vtbl2_s8(v31, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
        *(int8x8_t *)&v12.n128_i8[8] = vtbl2_s8((int8x8x2_t)v30, (int8x8_t)0xF0E0D0C03020100LL);
        v12.n128_u64[0] = vtbl2_s8((int8x8x2_t)v30, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
        v13 = vmulq_f32(v30, v30);
        *(int8x8_t *)&v14.n128_i8[8] = vtbl2_s8(v31, (int8x8_t)0xF0E0D0C07060504LL);
        v14.n128_u64[0] = vtbl2_s8(v31, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
        v13.n128_u64[0] = vadd_f32(*(float32x2_t *)&v13.n128_i8[8], (float32x2_t)v13.n128_u64[0]).n64_u64[0];
        v15 = vpadd_f32((float32x2_t)v13.n128_u64[0], (float32x2_t)v13.n128_u64[0]).n64_f32[0];
        if ( v15 != 0.0 )
        {
          v16 = vmlsq_f32(vmulq_f32(v11, v10), v14, v12);
          v17 = vmulq_f32(v16, v16);
          v17.n128_u64[0] = vadd_f32(*(float32x2_t *)&v17.n128_i8[8], (float32x2_t)v17.n128_u64[0]).n64_u64[0];
          v18 = vpadd_f32((float32x2_t)v17.n128_u64[0], (float32x2_t)v17.n128_u64[0]).n64_f32[0];
          if ( v18 != 0.0 )
          {
            v19 = (int8x8x2_t)vmulq_n_f32(*(float32x4_t *)(v4 + 48), 1.0 / sqrtf(v15));
            v20 = (int8x8x2_t)vmulq_n_f32(v16, 1.0 / sqrtf(v18));
            *(int8x8_t *)&v21.n128_i8[8] = vtbl2_s8(v20, (int8x8_t)0xF0E0D0C07060504LL);
            v21.n128_u64[0] = vtbl2_s8(v20, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
            *(int8x8_t *)&v22.n128_i8[8] = vtbl2_s8(v19, (int8x8_t)0xF0E0D0C03020100LL);
            v22.n128_u64[0] = vtbl2_s8(v19, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
            v28 = v3[4];
            *(int8x8_t *)&v23.n128_i8[8] = vtbl2_s8(v20, (int8x8_t)0xF0E0D0C03020100LL);
            v23.n128_u64[0] = vtbl2_s8(v20, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
            *(int8x8_t *)&v24.n128_i8[8] = vtbl2_s8(v19, (int8x8_t)0xF0E0D0C07060504LL);
            v24.n128_u64[0] = vtbl2_s8(v19, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
            v25 = vmlsq_f32(vmulq_f32(v22, v21), v24, v23);
            v29 = *((_DWORD *)v3 + 10);
            v26 = v3 - 2;
            *v26 = __PAIR64__(v19.val[0].n64_u32[0], v25.n128_u32[0]);
            v26[1] = v20.val[0].n64_u32[0];
            *v3 = __PAIR64__(v19.val[0].n64_u32[1], v25.n128_u32[1]);
            v3[1] = v20.val[0].n64_u32[1];
            v3[2] = __PAIR64__(v19.val[1].n64_u32[0], v25.n128_u32[2]);
            v3[3] = v20.val[1].n64_u32[0];
            v3[4] = v28;
            v3[5] = v29;
          }
        }
      }
      result = v27;
      ++v2;
      v3 += 12;
      v4 += 80;
    }
    while ( v2 < *((unsigned __int16 *)v27 + 3) );
  }
  return result;
}
