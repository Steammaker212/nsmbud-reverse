/* lift_zen_yoko_ref_2_helper
 * address: 0x60676378   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lift_zen_yoko_ref_2_helper(int a1)
{
  float v2; // r8
  float v3; // r12
  float v4; // lr
  unsigned int v5; // r0
  unsigned int v6; // r6
  unsigned int v7; // r2
  float *v8; // r7
  float *v9; // r1
  float *v10; // r3
  float v11; // s2
  float v12; // s0
  float v13; // s4
  float v14; // s12
  float v15; // s5
  float v16; // s8
  float v17; // s1
  float v18; // s9
  float v19; // s13
  float v21[18]; // [sp+0h] [bp-48h] BYREF

  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 116);
  v5 = FIELD_U32(a1, 156);
  v6 = FIELD_U32(a1, 160);
  v7 = FIELD_U32(a1, 164);
  v8 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v11 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v14 = v9[2] + (float)(v11 * v9[3]);
  v15 = v8[2] + (float)(v12 * v8[3]);
  v16 = *v9 + (float)(v11 * v9[1]);
  v17 = *v8 + (float)(v12 * v8[1]);
  v18 = *v10 + (float)(v13 * v10[1]);
  v19 = v10[2] + (float)(v13 * v10[3]);
  v21[0] = (float)(v15 * v14) + (float)(v18 * (float)(v17 * v16));
  v21[4] = v19 * v16;
  v21[8] = (float)(v18 * (float)(v15 * v16)) - (float)(v17 * v14);
  v21[1] = (float)(v18 * (float)(v17 * v14)) - (float)(v15 * v16);
  v21[5] = v19 * v14;
  v21[9] = (float)(v17 * v16) + (float)(v18 * (float)(v15 * v14));
  v21[2] = v19 * v17;
  v21[6] = -v18;
  v21[10] = v19 * v15;
  v21[3] = v2;
  v21[7] = v3;
  v21[11] = v4;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 644) + 60))(**(_DWORD **)(a1 + 644), v21);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 644) + 68))(**(_DWORD **)(a1 + 644), a1 + 144);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 644));
  return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 644));
}
