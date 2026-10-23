/* sub_600CC43C
 * address: 0x600CC43C   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600CC43C(int a1)
{
  unsigned int v1; // r7
  unsigned int v2; // r2
  unsigned int v3; // r3
  int v4; // r4
  float *v5; // r5
  float *v6; // r6
  float v7; // s0
  float v8; // s8
  float v9; // s2
  float v10; // s10
  float v11; // s6
  float v12; // s12
  float v13; // s4
  float v14; // s14
  float v15; // s1
  float v16; // s3
  float v17; // s5
  float v18; // s7
  float v19; // r12
  float v20; // s15
  float v21; // r1
  float v22; // s9
  float v23; // s13
  float v24; // r2
  float v25; // s4
  float v26; // s5
  float v27; // s6
  float v28; // s1
  float v29; // s0
  float v30; // s2
  float v32[18]; // [sp+0h] [bp-48h] BYREF

  v1 = FIELD_U32(a1, 156);
  v2 = FIELD_U32(a1, 160);
  v3 = FIELD_U32(a1, 164) - 0x40000000;
  v4 = (v1 >> 20) & 0xFF0;
  v32[3] = FIELD_F32(a1, 108);
  v5 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v6 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v7 = *(float *)((char *)sinLutTable + v4);
  v8 = *(float *)((char *)&sinLutTable[1] + v4);
  v9 = *(float *)((char *)&sinLutTable[2] + v4);
  v10 = *(float *)((char *)&sinLutTable[3] + v4);
  v11 = *v6;
  v12 = v6[1];
  v13 = v6[2];
  v14 = v6[3];
  v15 = *v5;
  v16 = v5[1];
  v17 = v5[2];
  v18 = v5[3];
  v32[7] = FIELD_F32(a1, 112);
  v32[11] = FIELD_F32(a1, 116);
  v19 = *(float *)&dword_60C84078;
  FIELD_U32(a1, 144) = dword_60C84078;
  v20 = (float)(v1 & 0xFFFFFF);
  v21 = *(float *)&dword_60C8407C;
  v22 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v23 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  FIELD_U32(a1, 148) = dword_60C8407C;
  v24 = *(float *)&dword_60C84080;
  v25 = v13 + (float)(v23 * v14);
  v26 = v17 + (float)(v22 * v18);
  v27 = v11 + (float)(v23 * v12);
  v28 = v15 + (float)(v22 * v16);
  FIELD_U32(a1, 152) = dword_60C84080;
  v29 = v7 + (float)((float)(v20 * 0.000000059605) * v8);
  v30 = v9 + (float)((float)(v20 * 0.000000059605) * v10);
  v32[0] = (float)((float)(v25 * v26) + (float)(v29 * (float)(v27 * v28))) * v19;
  v32[4] = v19 * (float)(v30 * v28);
  v32[8] = (float)((float)(v29 * (float)(v25 * v28)) - (float)(v27 * v26)) * v19;
  v32[1] = (float)((float)(v29 * (float)(v27 * v26)) - (float)(v25 * v28)) * v21;
  v32[5] = v21 * (float)(v30 * v26);
  v32[9] = (float)((float)(v27 * v28) + (float)(v29 * (float)(v25 * v26))) * v21;
  v32[2] = (float)(v30 * v27) * v24;
  v32[6] = -(float)(v29 * v24);
  v32[10] = (float)(v30 * v25) * v24;
  return sub_602372C0(a1 + 6100, 579, v32, 1);
}
