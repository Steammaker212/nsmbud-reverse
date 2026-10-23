/* sub_60590CBC
 * address: 0x60590CBC   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60590CBC(int a1)
{
  float v2; // s16
  int v3; // r7
  int v4; // r11
  float v5; // s18
  float v6; // r12
  unsigned int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r3
  float v10; // s0
  float *v11; // r6
  float *v12; // r0
  float v13; // s6
  float v14; // s8
  float v15; // s10
  float v16; // s12
  float *v17; // r0
  float v18; // s2
  float v19; // s4
  float v20; // s10
  float v21; // s5
  float v22; // s6
  float v23; // s1
  float v24; // s12
  float v25; // s13
  float v26; // s9
  int result; // r0
  float v28[28]; // [sp+0h] [bp-70h] BYREF

  v2 = 0.0;
  v3 = 0;
  v4 = a1 + 2168;
  v5 = (float)(FIELD_F32(a1, 660) * 16.0) * 0.25;
  do
  {
    v6 = FIELD_F32(a1, 112);
    v2 = v5 + v2;
    v7 = FIELD_U32(a1, 156);
    v8 = FIELD_U32(a1, 160);
    v9 = FIELD_U32(a1, 164);
    v10 = v2 + FIELD_F32(a1, 108);
    v11 = (float *)((char *)sinLutTable + ((v8 >> 20) & 0xFF0));
    v12 = (float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0));
    v13 = *v12;
    v14 = v12[1];
    v15 = v12[2];
    v16 = v12[3];
    v17 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
    v18 = (float)(v9 & 0xFFFFFF) * 0.000000059605;
    v19 = (float)(v8 & 0xFFFFFF) * 0.000000059605;
    v20 = v15 + (float)(v18 * v16);
    v21 = v11[2] + (float)(v19 * v11[3]);
    v22 = v13 + (float)(v18 * v14);
    v23 = *v11 + (float)(v19 * v11[1]);
    v24 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
    v25 = v17[2] + (float)(v24 * v17[3]);
    v26 = *v17 + (float)(v24 * v17[1]);
    v28[0] = v21 * v20;
    v28[4] = v21 * v22;
    v28[8] = -v23;
    v28[1] = (float)((float)(v26 * v23) * v20) - (float)(v25 * v22);
    v28[5] = (float)(v25 * v20) + (float)((float)(v26 * v23) * v22);
    v28[9] = v26 * v21;
    v28[2] = (float)(v23 * (float)(v25 * v20)) + (float)(v26 * v22);
    v28[6] = (float)(v23 * (float)(v25 * v22)) - (float)(v26 * v20);
    v28[10] = v25 * v21;
    v28[3] = v10;
    v28[7] = v6;
    v28[11] = -3200.0;
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(v4 + 4 * v3) + 60))(**(_DWORD **)(v4 + 4 * v3), v28);
    result = ModelWrapper_updateModel(*(ModelWrapper **)(v4 + 4 * v3++));
  }
  while ( v3 != 4 );
  return result;
}
