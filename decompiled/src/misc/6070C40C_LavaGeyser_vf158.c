/* LavaGeyser_vf158
 * address: 0x6070C40C   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LavaGeyser_vf158(int a1)
{
  float v2; // r8
  float v3; // r12
  float v4; // lr
  unsigned int v5; // r3
  unsigned int v6; // r0
  unsigned int v7; // r1
  int v8; // r2
  int v9; // s0
  float *v10; // r0
  float *v11; // r2
  float *v12; // r6
  float v13; // s2
  float v14; // s0
  float v15; // s4
  float v16; // s12
  float v17; // s5
  float v18; // s8
  float v19; // s1
  float v20; // s9
  float v21; // s13
  float v23[18]; // [sp+0h] [bp-48h] BYREF

  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 116);
  v5 = FIELD_U32(a1, 156);
  v6 = FIELD_U32(a1, 160);
  v7 = FIELD_U32(a1, 164);
  v8 = (v6 >> 20) & 0xFF0;
  v9 = v6 & 0xFFFFFF;
  v10 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v11 = (float *)((char *)sinLutTable + v8);
  v12 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v13 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v14 = (float)(unsigned int)v9 * 0.000000059605;
  v15 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v16 = v10[2] + (float)(v13 * v10[3]);
  v17 = v11[2] + (float)(v14 * v11[3]);
  v18 = *v10 + (float)(v13 * v10[1]);
  v19 = *v11 + (float)(v14 * v11[1]);
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
  v23[3] = v2;
  v23[7] = v3;
  v23[11] = v4;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6300) + 60))(**(_DWORD **)(a1 + 6300), v23);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6300) + 68))(**(_DWORD **)(a1 + 6300), a1 + 144);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6300));
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 640))(a1);
}
