/* sub_60693A00
 * address: 0x60693A00   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60693A00(int a1)
{
  unsigned int v1; // r1
  int v2; // s14
  float *v3; // r1
  float *v4; // r3
  float *v5; // r2
  float v6; // s14
  float v7; // s0
  float v8; // s2
  float v9; // s10
  float v10; // s5
  float v11; // s6
  float v12; // s1
  float v13; // s13
  float v14; // s9
  float v16[16]; // [sp+0h] [bp-40h] BYREF

  v1 = FIELD_U32(a1, 156);
  v2 = v1 & 0xFFFFFF;
  v3 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
  v4 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 164) >> 20) & 0xFF0));
  v5 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 160) >> 20) & 0xFF0));
  v6 = (float)(unsigned int)v2;
  v7 = (float)(FIELD_U32(a1, 164) & 0xFFFFFF) * 0.000000059605;
  v8 = (float)(FIELD_U32(a1, 160) & 0xFFFFFF) * 0.000000059605;
  v9 = v4[2] + (float)(v7 * v4[3]);
  v10 = v5[2] + (float)(v8 * v5[3]);
  v11 = *v4 + (float)(v7 * v4[1]);
  v12 = *v5 + (float)(v8 * v5[1]);
  v13 = v3[2] + (float)((float)(v6 * 0.000000059605) * v3[3]);
  v14 = *v3 + (float)((float)(v6 * 0.000000059605) * v3[1]);
  v16[0] = v10 * v9;
  v16[4] = v10 * v11;
  v16[8] = -v12;
  v16[1] = (float)((float)(v14 * v12) * v9) - (float)(v13 * v11);
  v16[5] = (float)(v13 * v9) + (float)((float)(v14 * v12) * v11);
  v16[9] = v14 * v10;
  v16[2] = (float)(v12 * (float)(v13 * v9)) + (float)(v14 * v11);
  v16[6] = (float)(v12 * (float)(v13 * v11)) - (float)(v14 * v9);
  v16[10] = v13 * v10;
  v16[3] = FIELD_F32(a1, 108);
  v16[7] = FIELD_F32(a1, 112);
  v16[11] = FIELD_F32(a1, 116);
  return sub_60694258(a1 + 644, v16);
}
