/* sub_601656B0
 * address: 0x601656B0   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601656B0(int result)
{
  _DWORD *v1; // r1
  int v2; // r12
  float *v3; // r1
  unsigned int v4; // r2
  int v5; // lr
  int v6; // r3
  float *v7; // r6
  _DWORD *v8; // r7
  unsigned int v9; // r4
  int v10; // s2
  float *v11; // r4
  float v12; // s12
  float v13; // s2
  float v14; // s1
  bool v15; // cc
  unsigned int v16; // r1
  float *v17; // r2
  float v18; // s10
  float v19; // s0
  float v20; // s2
  float v21; // r5
  int v22; // r1
  int v23; // r2
  float *v24; // r3
  float v25; // s6
  float v26; // s8
  float v27; // s12
  float v28; // s10

  v1 = *(_DWORD **)(result + 396);
  *v1 = FIELD_U32(result, 408);
  v1[1] = FIELD_U32(result, 412);
  v2 = FIELD_U32(result, 392);
  if ( v2 >= 2 )
  {
    v3 = *(float **)(result + 396);
    v4 = 1;
    v5 = 0;
    v6 = 2;
    v7 = v3;
    do
    {
      v8 = *(_DWORD **)(result + 388);
      if ( FIELD_U32(result, 384) > v4 - 1 )
        v8 = (_DWORD *)((char *)v8 + v5);
      v5 += 4;
      if ( v2 > v4 )
        v3 = (float *)((char *)v3 + v6 * 4);
      v9 = *v8 - 0x40000000;
      v10 = v9 & 0xFFFFFF;
      v11 = (float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0));
      v12 = FIELD_F32(result, 420);
      v13 = (float)(unsigned int)v10 * 0.000000059605;
      v14 = v7[1] + (float)(v12 * (float)(*v11 + (float)(v11[1] * v13)));
      *v3 = *v7 + (float)(v12 * (float)(v11[2] + (float)(v13 * v11[3])));
      v3[1] = v14;
      v2 = FIELD_U32(result, 392);
      v3 = *(float **)(result + 396);
      v15 = v2 > v4;
      v7 = v3;
      ++v4;
      if ( v15 )
        v7 = &v3[v6];
      v6 += 2;
    }
    while ( (int)v4 < v2 );
  }
  v16 = FIELD_U32(result, 244);
  if ( v16 )
  {
    v17 = (float *)((char *)sinLutTable + ((v16 >> 20) & 0xFF0));
    v18 = (float)(v16 & 0xFFFFFF);
    v19 = *v17 + (float)((float)(v18 * 0.000000059605) * v17[1]);
    v20 = v17[2] + (float)((float)(v18 * 0.000000059605) * v17[3]);
    v21 = -v19;
    FIELD_F32(result, 228) = v20;
    FIELD_U8(result, 232) = LOBYTE(v21);
    FIELD_U8(result, 235) = HIBYTE(COERCE_UNSIGNED_INT(-v19));
    FIELD_U8(result, 234) = BYTE2(COERCE_UNSIGNED_INT(-v19));
    FIELD_U8(result, 233) = BYTE1(COERCE_UNSIGNED_INT(-v19));
    FIELD_F32(result, 236) = v19;
    FIELD_F32(result, 240) = v20;
    if ( v2 >= 1 )
    {
      v22 = 0;
      v23 = 0;
      do
      {
        v24 = *(float **)(result + 396);
        v15 = v2 > (unsigned int)v23;
        v25 = FIELD_F32(result, 188);
        v26 = FIELD_F32(result, 192);
        ++v23;
        if ( v15 )
          v24 = (float *)((char *)v24 + v22);
        v22 += 8;
        v27 = v24[1] - v26;
        v28 = *v24 - v25;
        *v24 = v25 + (float)((float)(v27 * (float)-v19) + (float)(v20 * v28));
        v24[1] = v26 + (float)((float)(v20 * v27) + (float)(v19 * v28));
        v2 = FIELD_U32(result, 392);
      }
      while ( v23 < v2 );
    }
  }
  FIELD_F32(result, 428) = (float)FIELD_S32(result, 384) * FIELD_F32(result, 420);
  FIELD_U32(result, 204) = FIELD_U32(result, 188);
  FIELD_U32(result, 208) = FIELD_U32(result, 192);
  return result;
}
