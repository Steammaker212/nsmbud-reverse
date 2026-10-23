/* sub_606801CC
 * address: 0x606801CC   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606801CC(int a1)
{
  unsigned int v2; // r3
  unsigned int v3; // r2
  unsigned int v4; // r5
  float v5; // r12
  float v6; // lr
  int v7; // r7
  float *v8; // r0
  float v9; // s6
  float v10; // s8
  float v11; // s10
  float v12; // s12
  float *v13; // r1
  float v14; // r0
  float v15; // s2
  float v16; // s0
  float v17; // s4
  float v18; // s10
  float v19; // s6
  float v20; // s5
  float v21; // s1
  float v22; // s13
  float v23; // s9
  float v25[18]; // [sp+0h] [bp-48h] BYREF

  v2 = FIELD_U32(a1, 160);
  v3 = FIELD_U32(a1, 164);
  v4 = FIELD_U32(a1, 156);
  v5 = FIELD_F32(a1, 112);
  v6 = FIELD_F32(a1, 108);
  v7 = (v4 >> 20) & 0xFF0;
  v8 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  v12 = v8[3];
  v13 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v14 = 0.0;
  v15 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v16 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v17 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  if ( FIELD_U32(a1, 648) == 1 )
    v14 = 8800.0;
  v18 = v11 + (float)(v15 * v12);
  v19 = v9 + (float)(v15 * v10);
  v20 = v13[2] + (float)(v16 * v13[3]);
  v21 = *v13 + (float)(v16 * v13[1]);
  v22 = *(float *)((char *)&sinLutTable[2] + v7) + (float)(v17 * *(float *)((char *)&sinLutTable[3] + v7));
  v23 = *(float *)((char *)sinLutTable + v7) + (float)(v17 * *(float *)((char *)&sinLutTable[1] + v7));
  v25[0] = v20 * v18;
  v25[4] = v20 * v19;
  v25[8] = -v21;
  v25[1] = (float)((float)(v23 * v21) * v18) - (float)(v22 * v19);
  v25[5] = (float)(v22 * v18) + (float)((float)(v23 * v21) * v19);
  v25[9] = v23 * v20;
  v25[2] = (float)(v21 * (float)(v22 * v18)) + (float)(v23 * v19);
  v25[6] = (float)(v21 * (float)(v22 * v19)) - (float)(v23 * v18);
  v25[10] = v22 * v20;
  v25[3] = v6;
  v25[7] = v5;
  v25[11] = v14;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 644) + 60))(**(_DWORD **)(a1 + 644), v25);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 644) + 68))(**(_DWORD **)(a1 + 644), a1 + 144);
  return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 644));
}
