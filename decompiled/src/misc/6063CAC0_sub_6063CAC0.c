/* sub_6063CAC0
 * address: 0x6063CAC0   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063CAC0(int a1, float *a2, unsigned int a3)
{
  float v3; // s6
  float v4; // s4
  float v5; // s12
  float v6; // s8
  int v7; // lr
  unsigned int v8; // r3
  int v9; // r12
  float v10; // s0
  float v11; // s10
  float v12; // s14
  float v13; // s1
  float v14; // s3
  ModelWrapper *v15; // r4
  float v16; // s7
  float v17; // s22
  float v18; // s18
  float v19; // s9
  float v20; // s13
  float v21; // s5
  float v22; // s1
  float v23; // s10
  float v25[26]; // [sp+0h] [bp-68h] BYREF

  v3 = *a2;
  v4 = a2[1];
  v5 = FIELD_F32(a1, 8);
  v6 = FIELD_F32(a1, 4);
  v7 = (a3 >> 20) & 0xFF0;
  v8 = FIELD_U32(a1, 16) + a3;
  v9 = (v8 >> 20) & 0xFF0;
  v10 = a2[2] + FIELD_F32(a1, 12);
  v11 = *(float *)((char *)sinLutTable + v7);
  v12 = *(float *)((char *)&sinLutTable[1] + v7);
  v13 = *(float *)((char *)&sinLutTable[2] + v7);
  v14 = *(float *)((char *)&sinLutTable[3] + v7);
  v15 = *(ModelWrapper **)a1;
  v16 = (float)(v8 & 0xFFFFFF) * 0.000000059605;
  v17 = (float)(-0.00030118 * 0.0) + 1.0;
  v18 = (float)(0.024541 * 0.0) + 0.0;
  v19 = *(float *)((char *)sinLutTable + v9) + (float)(v16 * *(float *)((char *)&sinLutTable[1] + v9));
  v20 = *(float *)((char *)&sinLutTable[2] + v9) + (float)(v16 * *(float *)((char *)&sinLutTable[3] + v9));
  v25[0] = v17 * v20;
  v25[4] = v17 * v19;
  v25[8] = -v18;
  v21 = (float)(a3 & 0xFFFFFF) * 0.000000059605;
  v25[1] = (float)((float)(v18 * v18) * v20) - (float)(v17 * v19);
  v22 = v13 + (float)(v21 * v14);
  v23 = v11 + (float)(v21 * v12);
  v25[5] = (float)(v17 * v20) + (float)((float)(v18 * v18) * v19);
  v25[9] = v18 * v17;
  v25[2] = (float)(v18 * (float)(v17 * v20)) + (float)(v18 * v19);
  v25[6] = (float)(v18 * (float)(v17 * v19)) - (float)(v18 * v20);
  v25[10] = v17 * v17;
  v25[3] = v3 + (float)((float)(v6 * v22) - (float)(v5 * v23));
  v25[7] = v4 + (float)((float)(v5 * v22) + (float)(v6 * v23));
  v25[11] = v10;
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v15, 0x0) + 60))(FIELD_U32(v15, 0x0), v25);
  return ModelWrapper_updateModel(v15);
}
