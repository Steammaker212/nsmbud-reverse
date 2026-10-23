/* sub_600F6DD0
 * address: 0x600F6DD0   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F6DD0(int a1)
{
  int v2; // s2
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r2
  float *v6; // r3
  int v7; // lr
  int v8; // s2
  float *v9; // r1
  float v10; // s14
  float v11; // s0
  float v12; // s2
  float v13; // s10
  float v14; // s5
  float v15; // s6
  float v16; // s13
  float v17; // s1
  float v18; // s9
  float v20[16]; // [sp+0h] [bp-40h] BYREF

  sub_604183EC(a1 + 6368);
  *(__n64 *)(a1 + 144) = sub_600DBC58((__n64 **)&dword_60C85B68, FIELD_F32(a1, 6384));
  FIELD_U32(a1, 152) = v2;
  v3 = FIELD_U32(a1, 156);
  v4 = FIELD_U32(a1, 160);
  v5 = FIELD_U32(a1, 164);
  v6 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v7 = (v5 >> 20) & 0xFF0;
  v8 = v4 & 0xFFFFFF;
  v9 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v10 = (float)(v3 & 0xFFFFFF);
  v11 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(unsigned int)v8 * 0.000000059605;
  v13 = *(float *)((char *)&sinLutTable[2] + v7) + (float)(v11 * *(float *)((char *)&sinLutTable[3] + v7));
  v14 = v6[2] + (float)(v12 * v6[3]);
  v15 = *(float *)((char *)sinLutTable + v7) + (float)(v11 * *(float *)((char *)&sinLutTable[1] + v7));
  v16 = v9[2] + (float)((float)(v10 * 0.000000059605) * v9[3]);
  v17 = *v6 + (float)(v12 * v6[1]);
  v18 = *v9 + (float)((float)(v10 * 0.000000059605) * v9[1]);
  v20[0] = v14 * v13;
  v20[4] = v14 * v15;
  v20[8] = -v17;
  v20[1] = (float)((float)(v18 * v17) * v13) - (float)(v16 * v15);
  v20[5] = (float)(v16 * v13) + (float)((float)(v18 * v17) * v15);
  v20[9] = v18 * v14;
  v20[2] = (float)(v17 * (float)(v16 * v13)) + (float)(v18 * v15);
  v20[6] = (float)(v17 * (float)(v16 * v15)) - (float)(v18 * v13);
  v20[10] = v16 * v14;
  v20[3] = FIELD_F32(a1, 108);
  v20[7] = FIELD_F32(a1, 112);
  v20[11] = FIELD_F32(a1, 116);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6300) + 60))(**(_DWORD **)(a1 + 6300), v20);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6300) + 68))(**(_DWORD **)(a1 + 6300), a1 + 144);
  return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6300));
}
