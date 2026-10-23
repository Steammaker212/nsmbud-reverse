/* sub_607855B8
 * address: 0x607855B8   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607855B8(int a1)
{
  int v2; // r2
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r2
  float *v6; // r4
  float *v7; // r5
  float *v8; // r3
  float v9; // s0
  float v10; // s2
  float v11; // s4
  float v12; // s12
  float v13; // s5
  float v14; // s13
  float v15; // s8
  float v16; // s1
  float v17; // s9
  float v19[18]; // [sp+0h] [bp-48h] BYREF

  v2 = a1 + 156;
  v3 = FIELD_U32(a1, 156);
  v4 = FIELD_U32(v2, 4);
  v5 = FIELD_U32(v2, 8);
  v6 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v7 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v8 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v9 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v10 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v11 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v12 = v8[2] + (float)(v9 * v8[3]);
  v13 = v7[2] + (float)(v10 * v7[3]);
  v14 = v6[2] + (float)(v11 * v6[3]);
  v15 = *v8 + (float)(v9 * v8[1]);
  v16 = *v7 + (float)(v10 * v7[1]);
  v17 = *v6 + (float)(v11 * v6[1]);
  v19[0] = v13 * v12;
  v19[4] = v13 * v15;
  v19[8] = -v16;
  v19[2] = (float)(v16 * (float)(v14 * v12)) + (float)(v17 * v15);
  v19[6] = (float)(v16 * (float)(v14 * v15)) - (float)(v17 * v12);
  v19[10] = v14 * v13;
  v19[3] = FIELD_F32(a1, 108);
  v19[7] = FIELD_F32(a1, 112);
  v19[11] = FIELD_F32(a1, 116);
  v19[1] = (float)((float)((float)(v17 * v16) * v12) - (float)(v14 * v15)) * 1.2;
  v19[5] = (float)((float)(v14 * v12) + (float)((float)(v17 * v16) * v15)) * 1.2;
  v19[9] = (float)(v17 * v13) * 1.2;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 644) + 60))(**(_DWORD **)(a1 + 644), v19);
  return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 644));
}
