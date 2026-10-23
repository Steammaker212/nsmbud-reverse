/* sub_6060F858
 * address: 0x6060F858   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060F858(int a1)
{
  unsigned int v2; // r3
  unsigned int v3; // r7
  float v4; // lr
  float v5; // r8
  float *v6; // r5
  unsigned int v7; // r1
  float v8; // s10
  float *v9; // r3
  float *v10; // r0
  float v11; // s10
  float v12; // s1
  float v13; // s3
  float v14; // s5
  float v15; // s7
  float v16; // s14
  float v17; // r0
  float v18; // s4
  float v19; // s0
  float v20; // s8
  float v21; // s5
  float v22; // s13
  float v23; // s1
  float v24; // s9
  float v26[18]; // [sp+0h] [bp-48h] BYREF

  v2 = FIELD_U32(a1, 164);
  v3 = FIELD_U32(a1, 156);
  v4 = FIELD_F32(a1, 108);
  v5 = FIELD_F32(a1, 112);
  v6 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v7 = FIELD_U32(a1, 160);
  v8 = (float)(v2 & 0xFFFFFF);
  v9 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v11 = v8 * 0.000000059605;
  v12 = *v10;
  v13 = v10[1];
  v14 = v10[2];
  v15 = v10[3];
  v16 = (float)(v3 & 0xFFFFFF);
  v17 = -3700.0;
  v18 = v6[2] + (float)(v11 * v6[3]);
  v19 = *v6 + (float)(v11 * v6[1]);
  if ( !FIELD_U8(a1, 86) )
    v17 = -200.0;
  v20 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v21 = v14 + (float)(v20 * v15);
  v22 = v9[2] + (float)((float)(v16 * 0.000000059605) * v9[3]);
  v23 = v12 + (float)(v20 * v13);
  v24 = *v9 + (float)((float)(v16 * 0.000000059605) * v9[1]);
  v26[0] = v21 * v18;
  v26[4] = v21 * v19;
  v26[8] = -v23;
  v26[1] = (float)((float)(v24 * v23) * v18) - (float)(v22 * v19);
  v26[5] = (float)(v22 * v18) + (float)((float)(v24 * v23) * v19);
  v26[9] = v24 * v21;
  v26[2] = (float)(v23 * (float)(v22 * v18)) + (float)(v24 * v19);
  v26[6] = (float)(v23 * (float)(v22 * v19)) - (float)(v24 * v18);
  v26[10] = v22 * v21;
  v26[3] = v4;
  v26[7] = v5;
  v26[11] = v17;
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 644) + 68))(**(_DWORD **)(a1 + 644), a1 + 144);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 644) + 60))(**(_DWORD **)(a1 + 644), v26);
  return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 644));
}
