/* sub_606AD6EC
 * address: 0x606AD6EC   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606AD6EC(int a1)
{
  unsigned int v1; // r3
  unsigned int v2; // r2
  int v3; // s4
  float *v4; // r2
  float *v5; // r1
  float v6; // s1
  float v7; // s3
  float v8; // s5
  float v9; // s7
  float *v10; // r1
  float v11; // s13
  float v12; // s15
  float v13; // s9
  float v14; // s11
  float v15; // r1
  float v16; // s4
  float v17; // s0
  float v18; // s2
  float v19; // s6
  float v20; // s12
  float v21; // s5
  float v22; // s8
  float v23; // s1
  float v24; // s4
  float v25; // s10
  float v26; // s14
  float v27; // s13
  float v28; // s9
  float v30[16]; // [sp+0h] [bp-40h] BYREF

  v1 = FIELD_U32(a1, 160);
  v2 = FIELD_U32(a1, 164);
  v3 = v2 & 0xFFFFFF;
  v4 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v5 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
  v6 = *v5;
  v7 = v5[1];
  v8 = v5[2];
  v9 = v5[3];
  v10 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 156) >> 20) & 0xFF0));
  v11 = v10[2];
  v12 = v10[3];
  v13 = *v10;
  v14 = v10[1];
  v15 = FIELD_F32(a1, 116);
  v16 = (float)(unsigned int)v3 * 0.000000059605;
  v17 = (float)(v1 & 0xFFFFFF) * 0.000000059605;
  v18 = (float)(FIELD_U32(a1, 156) & 0xFFFFFF) * 0.000000059605;
  v19 = FIELD_F32(a1, 112);
  v20 = v4[2] + (float)(v16 * v4[3]);
  v21 = v8 + (float)(v17 * v9);
  v22 = *v4 + (float)(v16 * v4[1]);
  v23 = v6 + (float)(v17 * v7);
  v24 = FIELD_F32(a1, 108);
  v25 = FIELD_F32(a1, 6136);
  v26 = FIELD_F32(a1, 6132);
  v27 = v11 + (float)(v18 * v12);
  v28 = v13 + (float)(v18 * v14);
  v30[0] = v21 * v20;
  v30[4] = v21 * v22;
  v30[8] = -v23;
  v30[1] = (float)((float)(v28 * v23) * v20) - (float)(v27 * v22);
  v30[5] = (float)(v27 * v20) + (float)((float)(v28 * v23) * v22);
  v30[9] = v28 * v21;
  v30[2] = (float)(v23 * (float)(v27 * v20)) + (float)(v28 * v22);
  v30[6] = (float)(v23 * (float)(v27 * v22)) - (float)(v28 * v20);
  v30[10] = v27 * v21;
  v30[3] = v24 + v26;
  v30[7] = v19 + v25;
  v30[11] = v15;
  return ((int (__fastcall *)(int, float *, float))loc_60630830)(a1 + 6144, v30, 0.0);
}
