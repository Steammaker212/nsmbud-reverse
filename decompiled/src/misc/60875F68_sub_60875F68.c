/* sub_60875F68
 * address: 0x60875F68   size: 804   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60875F68(_DWORD *a1, int *a2, int a3, int a4)
{
  _BOOL4 v4; // r12
  int v5; // r12
  int v6; // r6
  int v7; // r4
  int v8; // r5
  unsigned __int16 *v9; // r4
  int v10; // r7
  int v11; // r6
  int v12; // r11
  int v13; // lr
  int v14; // r3
  int i; // r12
  int v16; // r5
  __int64 v17; // d4
  int v18; // r10
  int v19; // r4
  float *v20; // r3
  unsigned __int64 *v21; // r7
  float32x4_t v22; // q1
  __int64 *v23; // r0
  __int64 v24; // d6
  int v25; // r0
  float32x4_t v26; // q2
  float32x4_t v27; // q8
  int v28; // r10
  int v29; // r6
  __int64 v30; // d4
  int v31; // r7
  float *v32; // r3
  int j; // r5
  unsigned __int64 *v34; // r4
  float32x4_t v35; // q1
  __int64 *v36; // r0
  __int64 v37; // d6
  int v38; // r0
  float32x4_t v39; // q2
  float32x4_t v40; // q8

  v4 = 0;
  if ( *(unsigned __int8 *)(*a1 + 103) <= a4 )
    return v4;
  v5 = *(_DWORD *)(*a1 + 32);
  if ( a4 < 1 )
  {
    v6 = 0;
  }
  else
  {
    if ( (a4 & 1) == 0 )
    {
      v6 = 0;
      v7 = 0;
      if ( a4 == 1 )
        goto LABEL_10;
LABEL_8:
      v8 = a4 - v7;
      v9 = (unsigned __int16 *)(v5 + 56 * v7 + 108);
      do
      {
        v8 -= 2;
        v10 = *(v9 - 28) + v6;
        v11 = *v9;
        v9 += 56;
        v6 = v11 + v10;
      }
      while ( v8 );
      goto LABEL_10;
    }
    v6 = FIELD_U16(v5, 52);
    v7 = 1;
    if ( a4 != 1 )
      goto LABEL_8;
  }
LABEL_10:
  v12 = *a2;
  v13 = *(unsigned __int16 *)(v5 + 56 * a4 + 52);
  v14 = a1[9];
  a2[2] = *a2;
  for ( i = v14 + 32 * v6; v12 < v13; a2[2] = v12 )
  {
    v16 = i + 32 * v12;
    if ( !FIELD_U32(a3, 228)
      || (v17 = FIELD_U64(v16, 16), *(float *)a3 <= *(float *)&v17)
      && *(float *)v16 <= FIELD_F32(a3, 16)
      && FIELD_F32(a3, 4) <= *((float *)&v17 + 1)
      && FIELD_F32(a3, 8) <= FIELD_F32(v16, 24) )
    {
      v18 = FIELD_U32(a3, 224);
      if ( v18 < 1 )
        break;
      v19 = 0;
      v20 = (float *)(a3 + 48);
      while ( 1 )
      {
        v21 = (unsigned __int64 *)(v16 + 16);
        v22 = *(float32x4_t *)(v20 - 4);
        v23 = (__int64 *)(v16 + 16);
        if ( v22.n128_f32[1] >= 0.0 )
          v23 = (__int64 *)(i + 32 * v12);
        v24 = *v23;
        v25 = v16 + 16;
        if ( v22.n128_f32[2] >= 0.0 )
          v25 = i + 32 * v12;
        if ( v22.n128_f32[0] >= 0.0 )
          v21 = (unsigned __int64 *)(i + 32 * v12);
        v26.n128_u64[0] = *v21;
        v26.n128_u32[1] = HIDWORD(v24);
        v26.n128_u64[1] = FIELD_U32(v25, 8);
        v27 = vmulq_f32(v22, v26);
        v27.n128_u64[0] = vadd_f32(*(float32x2_t *)&v27.n128_i8[8], (float32x2_t)v27.n128_u64[0]).n64_u64[0];
        if ( (float)(vpadd_f32((float32x2_t)v27.n128_u64[0], (float32x2_t)v27.n128_u64[0]).n64_f32[0] + *v20) > 0.0 )
          break;
        ++v19;
        v20 += 8;
        if ( v19 >= v18 )
          goto LABEL_28;
      }
    }
    ++v12;
  }
LABEL_28:
  v28 = v12 + 1;
  for ( *a2 = v12 + 1; v28 < v13; *a2 = ++v28 )
  {
    v29 = i + 32 * v28;
    if ( FIELD_U32(a3, 228) )
    {
      v30 = FIELD_U64(v29, 16);
      if ( *(float *)a3 > *(float *)&v30
        || *(float *)v29 > FIELD_F32(a3, 16)
        || FIELD_F32(a3, 4) > *((float *)&v30 + 1)
        || FIELD_F32(a3, 8) > FIELD_F32(v29, 24) )
      {
        break;
      }
    }
    v31 = FIELD_U32(a3, 224);
    if ( v31 > 0 )
    {
      v32 = (float *)(a3 + 48);
      for ( j = 0; j < v31; ++j )
      {
        v34 = (unsigned __int64 *)(v29 + 16);
        v35 = *(float32x4_t *)(v32 - 4);
        v36 = (__int64 *)(v29 + 16);
        if ( v35.n128_f32[1] >= 0.0 )
          v36 = (__int64 *)(i + 32 * v28);
        v37 = *v36;
        v38 = v29 + 16;
        if ( v35.n128_f32[2] >= 0.0 )
          v38 = i + 32 * v28;
        if ( v35.n128_f32[0] >= 0.0 )
          v34 = (unsigned __int64 *)(i + 32 * v28);
        v39.n128_u64[0] = *v34;
        v39.n128_u32[1] = HIDWORD(v37);
        v39.n128_u64[1] = FIELD_U32(v38, 8);
        v40 = vmulq_f32(v35, v39);
        v40.n128_u64[0] = vadd_f32(*(float32x2_t *)&v40.n128_i8[8], (float32x2_t)v40.n128_u64[0]).n64_u64[0];
        if ( (float)(vpadd_f32((float32x2_t)v40.n128_u64[0], (float32x2_t)v40.n128_u64[0]).n64_f32[0] + *v32) > 0.0 )
          goto LABEL_45;
        v32 += 8;
      }
    }
  }
LABEL_45:
  v4 = v12 < v13;
  a2[3] = v28 - v12;
  return v4;
}
