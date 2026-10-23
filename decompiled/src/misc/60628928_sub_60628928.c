/* sub_60628928
 * address: 0x60628928   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60628928(int a1)
{
  int v2; // r2
  unsigned int v3; // r0
  unsigned int v4; // r1
  int v5; // lr
  unsigned int v6; // r3
  int v7; // r5
  float *v8; // r2
  float *v9; // r1
  float v10; // s0
  float v11; // s2
  float v12; // s14
  float v13; // s10
  float v14; // s5
  float v15; // s6
  float v16; // s1
  float v17; // s13
  float v18; // s9
  float v20[16]; // [sp+0h] [bp-40h] BYREF

  v2 = a1 + 156;
  v3 = FIELD_U32(a1, 156);
  v4 = FIELD_U32(v2, 4);
  v5 = (v3 >> 20) & 0xFF0;
  v6 = FIELD_U32(v2, 8);
  v7 = v4 & 0xFFFFFF;
  v8 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v10 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v11 = (float)(unsigned int)v7 * 0.000000059605;
  v12 = (float)(v3 & 0xFFFFFF);
  v13 = v8[2] + (float)(v10 * v8[3]);
  v14 = v9[2] + (float)(v11 * v9[3]);
  v15 = *v8 + (float)(v10 * v8[1]);
  v16 = *v9 + (float)(v11 * v9[1]);
  v17 = *(float *)((char *)&sinLutTable[2] + v5)
      + (float)((float)(v12 * 0.000000059605) * *(float *)((char *)&sinLutTable[3] + v5));
  v18 = *(float *)((char *)sinLutTable + v5)
      + (float)((float)(v12 * 0.000000059605) * *(float *)((char *)&sinLutTable[1] + v5));
  v20[0] = v14 * v13;
  v20[4] = v14 * v15;
  v20[8] = -v16;
  v20[1] = (float)((float)(v18 * v16) * v13) - (float)(v17 * v15);
  v20[5] = (float)(v17 * v13) + (float)((float)(v18 * v16) * v15);
  v20[9] = v18 * v14;
  v20[2] = (float)(v16 * (float)(v17 * v13)) + (float)(v18 * v15);
  v20[6] = (float)(v16 * (float)(v17 * v15)) - (float)(v18 * v13);
  v20[10] = v17 * v14;
  v20[3] = FIELD_F32(a1, 108);
  v20[7] = FIELD_F32(a1, 112);
  v20[11] = FIELD_F32(a1, 116);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 644) + 60))(**(_DWORD **)(a1 + 644), v20);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 644) + 68))(**(_DWORD **)(a1 + 644), a1 + 144);
  return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 644));
}
