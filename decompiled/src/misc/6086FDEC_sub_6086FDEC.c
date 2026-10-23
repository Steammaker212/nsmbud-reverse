/* sub_6086FDEC
 * address: 0x6086FDEC   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086FDEC(int a1, int a2)
{
  float v4; // s16
  float v5; // s18
  float v6; // s20
  __int64 v7; // r0
  float v8; // s2
  float *v9; // r0
  float v10; // s8
  float v11; // s4
  float v12; // s12
  float v13; // s0
  float v14; // s6
  float v15; // s2
  float v16; // s8
  float v17; // s1
  float v18; // s12
  float v19; // s4
  float v20; // s10
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r0

  v4 = FIELD_F32(a2, 4);
  v5 = FIELD_F32(a2, 8);
  v6 = FIELD_F32(a2, 16);
  v7 = (__int64)(float)(FIELD_F32(a2, 12)
                      * (float)((float)nn__util__detail__AngleIndexHalfRound / nn__util__detail__FloatPi));
  HIDWORD(v7) = ((unsigned int)v7 >> 20) & 0xFF0;
  v8 = (float)(v7 & 0xFFFFFF);
  v9 = *(float **)(a2 + 24);
  HIDWORD(v7) += &nn__util__detail__SinCosSampleTable;
  v10 = *(float *)(HIDWORD(v7) + 4) + (float)(*(float *)(HIDWORD(v7) + 12) * (float)(v8 * 0.000000059605));
  v11 = *(float *)HIDWORD(v7) + (float)(*(float *)(HIDWORD(v7) + 8) * (float)(v8 * 0.000000059605));
  v12 = FIELD_F32(a2, 20) + -0.5;
  v13 = v5 * v11;
  v14 = v4 * v10;
  v15 = v5 * v10;
  v16 = v4 * v11;
  v17 = (float)(v12 * (float)(v5 * v11)) + (float)((float)(v6 + 0.5) * v15);
  v18 = (float)(v12 * v14) - (float)((float)(v6 + 0.5) * (float)(v4 * v11));
  v19 = v17 + 0.5;
  v20 = v18 + 0.5;
  if ( v9 )
  {
    *(float *)a1 = (float)((float)(v14 * v9[4]) + (float)(v16 * *v9)) + (float)(v20 * v9[8]);
    FIELD_F32(a1, 16) = (float)((float)(v13 * v9[4]) - (float)(*v9 * v15)) + (float)(v19 * v9[8]);
    FIELD_F32(a1, 4) = (float)((float)(v14 * v9[5]) + (float)(v16 * v9[1])) + (float)(v20 * v9[9]);
    FIELD_F32(a1, 20) = (float)((float)(v13 * v9[5]) - (float)(v9[1] * v15)) + (float)(v19 * v9[9]);
    FIELD_F32(a1, 8) = (float)((float)(v14 * v9[6]) + (float)(v16 * v9[2])) + (float)(v20 * v9[10]);
    FIELD_F32(a1, 24) = (float)((float)(v13 * v9[6]) - (float)(v9[2] * v15)) + (float)(v19 * v9[10]);
    FIELD_F32(a1, 12) = (float)((float)(v14 * v9[7]) + (float)(v16 * v9[3])) + (float)(v20 * v9[11]);
    FIELD_F32(a1, 28) = (float)((float)(v13 * v9[7]) - (float)(v9[3] * v15)) + (float)(v19 * v9[11]);
    v21 = *((_DWORD *)v9 + 8);
    v22 = *((_DWORD *)v9 + 9);
    v23 = *((_DWORD *)v9 + 10);
    v24 = *((_DWORD *)v9 + 11);
    FIELD_U32(a1, 32) = v21;
    FIELD_U32(a1, 36) = v22;
    FIELD_U32(a1, 40) = v23;
    FIELD_U32(a1, 44) = v24;
  }
  else
  {
    *(float *)a1 = v16;
    FIELD_F32(a1, 16) = -v15;
    FIELD_F32(a1, 4) = v14;
    FIELD_F32(a1, 20) = v13;
    FIELD_F32(a1, 8) = v20;
    FIELD_F32(a1, 24) = v19;
    FIELD_U32(a1, 44) = 0;
    FIELD_U32(a1, 36) = 0;
    FIELD_U32(a1, 32) = 0;
    FIELD_U32(a1, 28) = 0;
    FIELD_U32(a1, 12) = 0;
    FIELD_U32(a1, 40) = 1065353216;
  }
  return 48;
}
