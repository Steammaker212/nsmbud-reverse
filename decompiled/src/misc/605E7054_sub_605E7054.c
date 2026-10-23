/* sub_605E7054
 * address: 0x605E7054   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E7054(int a1)
{
  float v1; // s0
  float v2; // s2
  float v3; // r12
  float v4; // lr
  int v5; // r3
  unsigned int v6; // r3
  unsigned int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r3
  float *v10; // r7
  float *v11; // r4
  float *v12; // r5
  float v13; // s4
  float v14; // s6
  float v15; // s8
  float v16; // s1
  float v17; // s9
  float v18; // s12
  float v19; // s5
  float v20; // s13
  float v21; // s16
  float v23[22]; // [sp+0h] [bp-58h] BYREF

  v1 = 0.0;
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 116);
  v4 = FIELD_F32(a1, 108);
  v5 = FIELD_U32(a1, 5952);
  if ( (unsigned __int16)v5 == 0x10 )
  {
    v6 = BYTE2(v5);
    if ( v6 <= 0x10 && ((1 << v6) & 0x10050) != 0 )
      v1 = -1.0;
  }
  v7 = FIELD_U32(a1, 156);
  v8 = FIELD_U32(a1, 160);
  v9 = FIELD_U32(a1, 164);
  v10 = (float *)((char *)sinLutTable + ((v8 >> 20) & 0xFF0));
  v11 = (float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0));
  v12 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v13 = (float)(v9 & 0xFFFFFF) * 0.000000059605;
  v14 = (float)(v8 & 0xFFFFFF) * 0.000000059605;
  v15 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v16 = v11[2] + (float)(v13 * v11[3]);
  v17 = v10[2] + (float)(v14 * v10[3]);
  v18 = *v11 + (float)(v13 * v11[1]);
  v19 = *v10 + (float)(v14 * v10[1]);
  v20 = *v12 + (float)(v15 * v12[1]);
  v21 = v12[2] + (float)(v15 * v12[3]);
  v23[0] = (float)(v17 * v16) + (float)(v20 * (float)(v19 * v18));
  v23[4] = v21 * v18;
  v23[8] = (float)(v20 * (float)(v17 * v18)) - (float)(v19 * v16);
  v23[1] = (float)(v20 * (float)(v19 * v16)) - (float)(v17 * v18);
  v23[5] = v21 * v16;
  v23[9] = (float)(v19 * v18) + (float)(v20 * (float)(v17 * v16));
  v23[2] = v21 * v19;
  v23[6] = -v20;
  v23[10] = v21 * v17;
  v23[3] = v4;
  v23[7] = v2 + v1;
  v23[11] = v3;
  FIELD_U32(a1, 6116) = FIELD_U32(a1, 144);
  FIELD_U32(a1, 6120) = FIELD_U32(a1, 148);
  FIELD_U32(a1, 6124) = FIELD_U32(a1, 152);
  return sub_6045D390(a1 + 6100, (int)v23);
}
