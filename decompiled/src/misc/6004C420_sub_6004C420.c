/* sub_6004C420
 * address: 0x6004C420   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6004C420(int a1, float *a2, float *a3)
{
  float v3; // s6
  float v4; // s8
  float v5; // s4
  float v6; // s14
  float v7; // s10
  float v8; // s12
  float v10; // s0
  float v11; // s18
  float v12; // s20
  float v13; // s0
  float v14; // s2
  float v15; // s0
  float v16; // s4
  float v17; // s8
  float v18; // s2
  float v19; // s10
  float v20; // s3
  float v21; // s12
  float v22; // s6
  float v23; // s5
  float v24; // s4
  float v25; // s7
  float v26; // s0
  float v27; // s16
  _QWORD *v29; // r0
  _QWORD *v30; // r4

  v3 = *a2;
  v4 = *a3;
  v5 = a2[1];
  v6 = a3[1];
  v7 = a2[2];
  v8 = a3[2];
  v10 = (float)((float)((float)(*a3 * *a2) + (float)(v5 * v6)) + (float)(v8 * v7)) + 1.0;
  if ( v10 <= 0.00000011921 )
  {
    v29 = (_QWORD *)(a1 + 32);
    *(_QWORD *)a1 = 1065353216;
    FIELD_U64(a1, 8) = 0;
    v30 = (_QWORD *)(a1 + 16);
    *v30 = 0x3F80000000000000LL;
    v30[1] = 0;
    *v29 = 0;
    v29[1] = 1065353216;
    return 0;
  }
  else
  {
    v11 = (float)(v5 * v8) - (float)(v7 * v6);
    v12 = (float)(v6 * v3) - (float)(v5 * v4);
    v13 = sqrtf(v10 + v10);
    v14 = 1.0 / v13;
    v15 = (float)(v13 * 0.5) + (float)(v13 * 0.5);
    v16 = (float)((float)(v7 * v4) - (float)(v8 * v3)) * v14;
    v17 = v12 * v14;
    v18 = v11 * v14;
    v19 = v16 + v16;
    v20 = v17 * v15;
    v21 = v16 * (float)(v16 + v16);
    v22 = v17 * (float)(v17 + v17);
    v23 = v16 * (float)(v18 + v18);
    v24 = v16 * v15;
    v25 = v17 * (float)(v18 + v18);
    v26 = v18 * v15;
    v27 = 1.0 - (float)(v18 * (float)(v18 + v18));
    *(float *)a1 = (float)(1.0 - v21) - v22;
    FIELD_F32(a1, 4) = v23 - v20;
    FIELD_F32(a1, 8) = v24 + v25;
    FIELD_F32(a1, 16) = v20 + v23;
    FIELD_F32(a1, 20) = v27 - v22;
    FIELD_F32(a1, 24) = (float)(v17 * v19) - v26;
    FIELD_F32(a1, 32) = v25 - v24;
    FIELD_F32(a1, 36) = v26 + (float)(v17 * v19);
    FIELD_F32(a1, 40) = v27 - v21;
    FIELD_U32(a1, 12) = 0;
    FIELD_U32(a1, 28) = 0;
    FIELD_U32(a1, 44) = 0;
    return 1;
  }
}
