/* sub_60879258
 * address: 0x60879258   size: 884   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60879258(int *result, int a2)
{
  float v2; // s4
  int v3; // r11
  _QWORD *v4; // r6
  int v5; // r8
  float v6; // s0
  _QWORD *v7; // r7
  float v8; // s0
  _DWORD *v9; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r4
  __int64 v13; // d17
  float32x4_t v14; // q9
  float32x4_t v15; // q11
  float32x4_t v16; // q8
  float32x4_t v17; // q12
  float32x4_t v18; // q10
  float v19; // s0
  float32x4_t v20; // q5
  float32x4_t v21; // q8
  float v22; // s16
  int8x8x2_t v23; // q8
  int8x8x2_t v24; // q1
  float32x4_t v25; // q9
  float32x4_t v26; // q10
  float32x4_t v27; // q11
  float32x4_t v28; // q12
  float32x4_t v29; // q9
  _QWORD *v30; // r0
  __int64 v31; // d9
  int v32; // [sp+10h] [bp-A8h]
  int *v33; // [sp+1Ch] [bp-9Ch]
  __int64 v34; // [sp+44h] [bp-74h]
  unsigned int v35; // [sp+4Ch] [bp-6Ch]
  float32x4_t v36; // 0:d24.8,8:d25.8
  int8x8x2_t v37; // 0:d26.8,8:d27.8

  v33 = result;
  if ( *((_WORD *)result + 3) )
  {
    v2 = 1.0;
    v3 = 0;
    v4 = (_QWORD *)(FIELD_U32(a2, 12) + 48);
    v5 = *result;
    v32 = *result;
    do
    {
      v6 = FIELD_F32(v5, 68);
      if ( fabsf(v6) >= 0.001 )
      {
        if ( fabsf(v6 + -1.0) >= 0.001 )
        {
          v8 = v2 / v6;
          *(float32x4_t *)v5 = vmulq_n_f32(*(float32x4_t *)v5, v8);
          *(float32x4_t *)(v5 + 16) = vmulq_n_f32(*(float32x4_t *)(v5 + 16), v8);
          v7 = (_QWORD *)(v32 + 80 * v3 + 16);
        }
        else
        {
          v7 = (_QWORD *)(v5 + 16);
        }
        v9 = v4 - 4;
        *((_DWORD *)v4 - 12) = (*(_DWORD *)(v4 - 6) & 0xF07FFFFF | (((FIELD_U32(v5, 64) >> 23) & 0x1F) << 23))
                             ^ 0xF800000;
        v10 = FIELD_U32(v5, 4);
        v11 = FIELD_U32(v5, 8);
        v12 = FIELD_U32(v5, 12);
        *v9 = *(_DWORD *)v5;
        v9[1] = v10;
        v9[2] = v11;
        v9[3] = v12;
        v13 = v7[1];
        v4[4] = *v7;
        v4[5] = v13;
        v36 = *(float32x4_t *)(v5 + 48);
        v37 = *(int8x8x2_t *)(v5 + 32);
        *(int8x8_t *)&v14.n128_i8[8] = vtbl2_s8((int8x8x2_t)v36, (int8x8_t)0xF0E0D0C07060504LL);
        v14.n128_u64[0] = vtbl2_s8((int8x8x2_t)v36, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
        *(int8x8_t *)&v15.n128_i8[8] = vtbl2_s8(v37, (int8x8_t)0xF0E0D0C03020100LL);
        v15.n128_u64[0] = vtbl2_s8(v37, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
        *(int8x8_t *)&v16.n128_i8[8] = vtbl2_s8((int8x8x2_t)v36, (int8x8_t)0xF0E0D0C03020100LL);
        v16.n128_u64[0] = vtbl2_s8((int8x8x2_t)v36, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
        v17 = vmulq_f32(v36, v36);
        *(int8x8_t *)&v18.n128_i8[8] = vtbl2_s8(v37, (int8x8_t)0xF0E0D0C07060504LL);
        v18.n128_u64[0] = vtbl2_s8(v37, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
        v17.n128_u64[0] = vadd_f32(*(float32x2_t *)&v17.n128_i8[8], (float32x2_t)v17.n128_u64[0]).n64_u64[0];
        v19 = vpadd_f32((float32x2_t)v17.n128_u64[0], (float32x2_t)v17.n128_u64[0]).n64_f32[0];
        if ( v19 != 0.0 )
        {
          v20 = vmlsq_f32(vmulq_f32(v15, v14), v18, v16);
          v21 = vmulq_f32(v20, v20);
          v21.n128_u64[0] = vadd_f32(*(float32x2_t *)&v21.n128_i8[8], (float32x2_t)v21.n128_u64[0]).n64_u64[0];
          v22 = vpadd_f32((float32x2_t)v21.n128_u64[0], (float32x2_t)v21.n128_u64[0]).n64_f32[0];
          if ( v22 != 0.0 )
          {
            v23 = (int8x8x2_t)vmulq_n_f32(*(float32x4_t *)(v5 + 48), v2 / sqrtf(v19));
            v24 = (int8x8x2_t)vmulq_n_f32(v20, v2 / sqrtf(v22));
            *(int8x8_t *)&v25.n128_i8[8] = vtbl2_s8(v24, (int8x8_t)0xF0E0D0C07060504LL);
            v25.n128_u64[0] = vtbl2_s8(v24, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
            *(int8x8_t *)&v26.n128_i8[8] = vtbl2_s8(v23, (int8x8_t)0xF0E0D0C03020100LL);
            v26.n128_u64[0] = vtbl2_s8(v23, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
            *(int8x8_t *)&v27.n128_i8[8] = vtbl2_s8(v24, (int8x8_t)0xF0E0D0C03020100LL);
            v27.n128_u64[0] = vtbl2_s8(v24, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
            *(int8x8_t *)&v28.n128_i8[8] = vtbl2_s8(v23, (int8x8_t)0xF0E0D0C07060504LL);
            v28.n128_u64[0] = vtbl2_s8(v23, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
            v29 = vmlsq_f32(vmulq_f32(v26, v25), v28, v27);
            v34 = v4[4];
            v35 = *((_DWORD *)v4 + 10);
            v30 = v4 - 2;
            v31 = v24.val[0].n64_u32[0];
            v2 = 1.0;
            *v30 = __PAIR64__(v23.val[0].n64_u32[0], v29.n128_u32[0]);
            v30[1] = v31;
            *v4 = __PAIR64__(v23.val[0].n64_u32[1], v29.n128_u32[1]);
            v4[1] = v24.val[0].n64_u32[1];
            v4[2] = __PAIR64__(v23.val[1].n64_u32[0], v29.n128_u32[2]);
            v4[3] = v24.val[1].n64_u32[0];
            v4[4] = v34;
            v4[5] = v35;
          }
        }
      }
      result = v33;
      ++v3;
      v4 += 12;
      v5 += 80;
    }
    while ( v3 < *((unsigned __int16 *)v33 + 3) );
  }
  return result;
}
