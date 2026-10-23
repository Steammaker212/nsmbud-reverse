/* sub_6069BE24
 * address: 0x6069BE24   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069BE24(int a1, _DWORD *a2, float *a3)
{
  int v4; // s14
  float *v5; // r0
  float *v6; // r3
  float v7; // s0
  float v8; // s2
  float *v9; // r1
  float v10; // s14
  float v11; // s10
  float v12; // s6
  float v13; // s5
  float v14; // s1
  float v15; // s13
  float v16; // s9
  float v18[18]; // [sp+0h] [bp-48h] BYREF

  v4 = *a2 & 0xFFFFFF;
  v5 = (float *)((char *)sinLutTable + ((*a2 >> 20) & 0xFF0));
  v6 = (float *)((char *)sinLutTable + ((a2[2] >> 20) & 0xFF0));
  v7 = (float)(a2[2] & 0xFFFFFF) * 0.000000059605;
  v8 = (float)(a2[1] & 0xFFFFFF) * 0.000000059605;
  v9 = (float *)((char *)sinLutTable + ((a2[1] >> 20) & 0xFF0));
  v10 = (float)(unsigned int)v4;
  v11 = v6[2] + (float)(v7 * v6[3]);
  v12 = *v6 + (float)(v7 * v6[1]);
  v13 = v9[2] + (float)(v8 * v9[3]);
  v14 = *v9 + (float)(v8 * v9[1]);
  v15 = v5[2] + (float)((float)(v10 * 0.000000059605) * v5[3]);
  v16 = *v5 + (float)((float)(v10 * 0.000000059605) * v5[1]);
  v18[0] = v13 * v11;
  v18[4] = v13 * v12;
  v18[8] = -v14;
  v18[1] = (float)((float)(v16 * v14) * v11) - (float)(v15 * v12);
  v18[5] = (float)(v15 * v11) + (float)((float)(v16 * v14) * v12);
  v18[9] = v16 * v13;
  v18[2] = (float)(v14 * (float)(v15 * v11)) + (float)(v16 * v12);
  v18[6] = (float)(v14 * (float)(v15 * v12)) - (float)(v16 * v11);
  v18[10] = v15 * v13;
  v18[3] = *a3;
  v18[7] = a3[1];
  v18[11] = a3[2];
  ((void (__fastcall *)(int, float *, float))loc_60630830)(a1, v18, 0.0);
  FIELD_U8(a1, 484) = 1;
  return 1;
}
