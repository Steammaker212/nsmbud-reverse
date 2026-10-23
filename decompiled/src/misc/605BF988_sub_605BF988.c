/* sub_605BF988
 * address: 0x605BF988   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BF988(ModelWrapper **a1, unsigned int *a2, float *a3)
{
  ModelWrapper *v3; // r8
  unsigned int v4; // r0
  unsigned int v5; // r3
  unsigned int v6; // r1
  int v7; // r5
  int v8; // r7
  int v9; // s2
  int v10; // r3
  float *v11; // r5
  float v12; // s14
  float v13; // s0
  float v14; // s2
  float v15; // s10
  float v16; // s5
  float v17; // s6
  float v18; // s1
  float v19; // s13
  float v20; // s9
  float v22[18]; // [sp+0h] [bp-48h] BYREF

  v3 = *a1;
  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = (v5 >> 20) & 0xFF0;
  v8 = (v6 >> 20) & 0xFF0;
  v9 = v5 & 0xFFFFFF;
  v10 = (v4 >> 20) & 0xFF0;
  v11 = (float *)((char *)sinLutTable + v7);
  v12 = (float)(v4 & 0xFFFFFF);
  v13 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v14 = (float)(unsigned int)v9 * 0.000000059605;
  v15 = *(float *)((char *)&sinLutTable[2] + v8) + (float)(v13 * *(float *)((char *)&sinLutTable[3] + v8));
  v16 = v11[2] + (float)(v14 * v11[3]);
  v17 = *(float *)((char *)sinLutTable + v8) + (float)(v13 * *(float *)((char *)&sinLutTable[1] + v8));
  v18 = *v11 + (float)(v14 * v11[1]);
  v19 = *(float *)((char *)&sinLutTable[2] + v10)
      + (float)((float)(v12 * 0.000000059605) * *(float *)((char *)&sinLutTable[3] + v10));
  v20 = *(float *)((char *)sinLutTable + v10)
      + (float)((float)(v12 * 0.000000059605) * *(float *)((char *)&sinLutTable[1] + v10));
  v22[0] = v16 * v15;
  v22[4] = v16 * v17;
  v22[8] = -v18;
  v22[1] = (float)((float)(v20 * v18) * v15) - (float)(v19 * v17);
  v22[5] = (float)(v19 * v15) + (float)((float)(v20 * v18) * v17);
  v22[9] = v20 * v16;
  v22[2] = (float)(v18 * (float)(v19 * v15)) + (float)(v20 * v17);
  v22[6] = (float)(v18 * (float)(v19 * v17)) - (float)(v20 * v15);
  v22[10] = v19 * v16;
  v22[3] = *a3;
  v22[7] = a3[1];
  v22[11] = a3[2];
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v3, 0x0) + 60))(FIELD_U32(v3, 0x0), v22);
  return ModelWrapper_updateModel(v3);
}
