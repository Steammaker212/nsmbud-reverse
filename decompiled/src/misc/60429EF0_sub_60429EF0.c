/* sub_60429EF0
 * address: 0x60429EF0   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60429EF0(float *a1, float *a2, int a3)
{
  float v5; // s24
  float v6; // s17
  float v7; // s18
  float v8; // s30
  __int64 v9; // r0
  float v10; // s0
  float v11; // s4
  float v12; // s2
  float v13; // s12
  float v14; // s20
  float v15; // s22
  float v16; // s26
  float v17; // s0
  float v18; // s18
  float v19; // s16
  float v20; // s24
  float v21; // s17
  float v22; // s19
  __int64 v23; // r0
  float v24; // s8
  float v25; // s2
  float v26; // s0
  float v27; // s4
  float v28; // s6
  float v29; // s0
  float v30; // s2

  v5 = a2[1];
  v6 = a2[2];
  v7 = a2[4];
  v8 = (float)nn__util__detail__AngleIndexHalfRound / nn__util__detail__FloatPi;
  v9 = (__int64)(float)(a2[3] * v8);
  HIDWORD(v9) = (char *)&nn__util__detail__SinCosSampleTable + (((unsigned int)v9 >> 20) & 0xFF0);
  v10 = (float)(v9 & 0xFFFFFF) * 0.000000059605;
  v11 = *(float *)(HIDWORD(v9) + 4) + (float)(*(float *)(HIDWORD(v9) + 12) * v10);
  v12 = *(float *)HIDWORD(v9) + (float)(*(float *)(HIDWORD(v9) + 8) * v10);
  v13 = (float)(v11 * 0.5) + -0.5;
  v14 = v6 * v11;
  v15 = v5 * v11;
  v16 = v5 * v12;
  v17 = (float)((float)(v12 * -0.5) - v13) - v7;
  v18 = v6 * v12;
  v19 = (float)(v6 * (float)(a2[5] + (float)((float)(v12 * -0.5) + v13))) + 1.0;
  v20 = v5 * v17;
  if ( *(_DWORD *)a3 )
  {
    *a1 = v16;
    a1[1] = -v14;
    a1[2] = v15;
    a1[3] = v18;
    a1[4] = v20;
  }
  else
  {
    v21 = FIELD_F32(a3, 4);
    v22 = FIELD_F32(a3, 8);
    v23 = (__int64)(float)(v8 * FIELD_F32(a3, 12));
    HIDWORD(v23) = (char *)&nn__util__detail__SinCosSampleTable + (((unsigned int)v23 >> 20) & 0xFF0);
    v24 = (float)(v23 & 0xFFFFFF) * 0.000000059605;
    v25 = *(float *)(HIDWORD(v23) + 4) + (float)(*(float *)(HIDWORD(v23) + 12) * v24);
    v26 = *(float *)HIDWORD(v23) + (float)(*(float *)(HIDWORD(v23) + 8) * v24);
    v27 = v22 * v25;
    v28 = v21 * v26;
    v29 = v22 * v26;
    v30 = v21 * v25;
    *a1 = (float)(v15 * v27) + (float)(v16 * v28);
    a1[1] = (float)(v18 * v27) - (float)(v28 * v14);
    a1[2] = (float)(v15 * v29) + (float)(v16 * v30);
    a1[3] = (float)(v18 * v29) - (float)(v30 * v14);
    a1[4] = v20 + (float)((float)(v15 * FIELD_F32(a3, 20)) + (float)(v16 * FIELD_F32(a3, 16)));
    v19 = v19 + (float)((float)(v18 * FIELD_F32(a3, 20)) - (float)(FIELD_F32(a3, 16) * v14));
  }
  a1[5] = v19;
  return 24;
}
