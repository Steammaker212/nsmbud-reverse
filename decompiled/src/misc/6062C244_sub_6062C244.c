/* sub_6062C244
 * address: 0x6062C244   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062C244(int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r3
  unsigned int v4; // r2
  int v5; // s0
  float *v6; // r0
  int v7; // lr
  float *v8; // r1
  float v9; // s0
  float v10; // s4
  float v11; // s2
  float v12; // s10
  float v13; // s6
  float v14; // s5
  float v15; // s11
  float v16; // s1
  float v17; // s12
  float v19[16]; // [sp+0h] [bp-40h] BYREF

  v2 = FIELD_U32(a1, 6196);
  FIELD_U32(a1, 164) = v2;
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 156);
  v5 = v2 & 0xFFFFFF;
  v6 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v7 = (v4 >> 20) & 0xFF0;
  v8 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v9 = (float)(unsigned int)v5 * 0.000000059605;
  v10 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v11 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v12 = v6[2] + (float)(v9 * v6[3]);
  v13 = *v6 + (float)(v9 * v6[1]);
  v14 = v8[2] + (float)(v10 * v8[3]);
  v15 = *(float *)((char *)&sinLutTable[2] + v7) + (float)(v11 * *(float *)((char *)&sinLutTable[3] + v7));
  v16 = *v8 + (float)(v10 * v8[1]);
  v17 = *(float *)((char *)sinLutTable + v7) + (float)(*(float *)((char *)&sinLutTable[1] + v7) * v11);
  v19[0] = v14 * v12;
  v19[4] = v14 * v13;
  v19[8] = -v16;
  v19[1] = (float)((float)(v17 * v16) * v12) - (float)(v15 * v13);
  v19[5] = (float)(v15 * v12) + (float)((float)(v17 * v16) * v13);
  v19[9] = v17 * v14;
  v19[2] = (float)(v16 * (float)(v15 * v12)) + (float)(v17 * v13);
  v19[6] = (float)(v16 * (float)(v15 * v13)) - (float)(v17 * v12);
  v19[10] = v15 * v14;
  v19[3] = FIELD_F32(a1, 108);
  v19[7] = FIELD_F32(a1, 112);
  v19[11] = FIELD_F32(a1, 116);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6076) + 60))(**(_DWORD **)(a1 + 6076), v19);
  return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6076));
}
