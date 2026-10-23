/* sub_608A7F74
 * address: 0x608A7F74   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A7F74(_DWORD *a1)
{
  int v2; // r0
  int v3; // r4
  int *v4; // r6
  int v5; // r10
  float v6; // s16
  float v7; // s18
  __int64 v8; // r0
  float v9; // s4
  int v10; // r0
  float v11; // s4
  float v12; // s0
  float v13; // s2
  int v14; // r0

  v2 = a1[10];
  v3 = a1[2];
  if ( v2 <= 0 )
  {
    v4 = a1 + 3;
  }
  else
  {
    v4 = a1 + 3;
    v5 = 0;
    v6 = (float)nn__util__detail__AngleIndexHalfRound / nn__util__detail__FloatPi;
    v7 = (float)(nn__util__detail__FloatPi / nn__util__detail__FloatDegree180) * 360.0;
    do
    {
      v8 = (__int64)(float)(v6 * (float)((float)((float)v5 * v7) / (float)v2));
      HIDWORD(v8) = (char *)&nn__util__detail__SinCosSampleTable + (((unsigned int)v8 >> 20) & 0xFF0);
      v9 = (float)(v8 & 0xFFFFFF);
      v10 = *v4;
      v11 = v9 * 0.000000059605;
      v12 = *(float *)(HIDWORD(v8) + 4) + (float)(*(float *)(HIDWORD(v8) + 12) * v11);
      v13 = *(float *)HIDWORD(v8) + (float)(*(float *)(HIDWORD(v8) + 8) * v11);
      if ( (*v4 & 1) != 0 )
      {
        FIELD_U32(v3, 8) = 0;
        *(float *)v3 = v13;
        FIELD_F32(v3, 4) = v12;
        v3 += 12;
        v10 = *v4;
      }
      if ( (v10 & 2) != 0 )
      {
        *(_DWORD *)v3 = 0;
        FIELD_U32(v3, 4) = 0;
        FIELD_U32(v3, 8) = 1065353216;
        v3 += 12;
        v10 = *v4;
      }
      if ( (v10 & 4) != 0 )
      {
        *(float *)v3 = (float)(v13 * 0.5) + 0.5;
        FIELD_F32(v3, 4) = 1.0 - (float)((float)(v12 * 0.5) + 0.5);
        v3 += 8;
      }
      v2 = a1[10];
      ++v5;
    }
    while ( v5 < v2 );
  }
  v14 = *v4;
  if ( (*v4 & 1) != 0 )
  {
    *(_DWORD *)v3 = 0;
    FIELD_U32(v3, 4) = 0;
    FIELD_U32(v3, 8) = 0;
    v3 += 12;
    v14 = *v4;
  }
  if ( (v14 & 2) != 0 )
  {
    *(_DWORD *)v3 = 0;
    FIELD_U32(v3, 4) = 0;
    FIELD_U32(v3, 8) = 1065353216;
    v3 += 12;
    v14 = *v4;
  }
  if ( (v14 & 4) != 0 )
  {
    *(_DWORD *)v3 = 1056964608;
    FIELD_U32(v3, 4) = 1056964608;
    v3 += 8;
  }
  return v3;
}
