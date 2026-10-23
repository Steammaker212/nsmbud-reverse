/* sub_60672DC8
 * address: 0x60672DC8   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60672DC8(float *a1)
{
  int v2; // r0
  ModelWrapper *v3; // r11
  void *model; // r6
  unsigned int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r3
  float *v8; // r5
  float v9; // s0
  float v10; // s2
  float v11; // s4
  float v12; // s6
  int v13; // r7
  float *v14; // r5
  float v15; // s14
  float v16; // s10
  float v17; // s8
  float v18; // s4
  float v19; // s0
  float v20; // s5
  float v21; // s1
  float v22; // s13
  float v23; // s9
  float v25[21]; // [sp+4h] [bp-54h] BYREF

  v2 = *((_DWORD *)a1 + 27);
  *((_DWORD *)a1 + 1525) = v2;
  a1[1526] = a1[28];
  a1[1527] = a1[29];
  *((_DWORD *)a1 + 1529) = v2;
  v3 = *((ModelWrapper **)a1 + 1531);
  model = FIELD_U32(v3, 0x0);
  (*(void (__fastcall **)(void *, _DWORD *))(*(_DWORD *)FIELD_U32(v3, 0x0) + 68))(FIELD_U32(v3, 0x0), (_DWORD *)a1 + 36);
  v5 = *((_DWORD *)a1 + 39);
  v6 = *((_DWORD *)a1 + 40);
  v7 = *((_DWORD *)a1 + 41);
  v8 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  v12 = v8[3];
  v13 = (v6 >> 20) & 0xFF0;
  v14 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v15 = (float)(v5 & 0xFFFFFF);
  v16 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v17 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v18 = v11 + (float)(v16 * v12);
  v19 = v9 + (float)(v16 * v10);
  v20 = *(float *)((char *)&sinLutTable[2] + v13) + (float)(v17 * *(float *)((char *)&sinLutTable[3] + v13));
  v21 = *(float *)((char *)sinLutTable + v13) + (float)(v17 * *(float *)((char *)&sinLutTable[1] + v13));
  v22 = v14[2] + (float)((float)(v15 * 0.000000059605) * v14[3]);
  v23 = *v14 + (float)((float)(v15 * 0.000000059605) * v14[1]);
  v25[0] = v20 * v18;
  v25[4] = v20 * v19;
  v25[8] = -v21;
  v25[1] = (float)((float)(v23 * v21) * v18) - (float)(v22 * v19);
  v25[5] = (float)(v22 * v18) + (float)((float)(v23 * v21) * v19);
  v25[9] = v23 * v20;
  v25[2] = (float)(v21 * (float)(v22 * v18)) + (float)(v23 * v19);
  v25[6] = (float)(v21 * (float)(v22 * v19)) - (float)(v23 * v18);
  v25[10] = v22 * v20;
  v25[3] = a1[1525];
  v25[7] = a1[1526];
  v25[11] = a1[1527];
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)model + 60))(model, v25);
  return ModelWrapper_updateModel(v3);
}
