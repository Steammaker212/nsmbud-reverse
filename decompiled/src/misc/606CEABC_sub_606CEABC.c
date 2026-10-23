/* sub_606CEABC
 * address: 0x606CEABC   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CEABC(int a1)
{
  unsigned int v1; // r3
  unsigned int v2; // r5
  ModelWrapper *v3; // r8
  int v4; // s0
  float *v5; // r3
  int v6; // s4
  float *v7; // r5
  float *v8; // r1
  float v9; // s4
  float v10; // s0
  float v11; // s2
  float v12; // s6
  float v13; // s12
  float v14; // s5
  float v15; // s8
  float v16; // s1
  float v17; // s4
  float v18; // s10
  float v19; // s14
  float v20; // r0
  float v21; // s13
  float v22; // s9
  float v24[18]; // [sp+0h] [bp-48h] BYREF

  v1 = FIELD_U32(a1, 160);
  v2 = FIELD_U32(a1, 164);
  v3 = *(ModelWrapper **)(a1 + 6916);
  v4 = v1 & 0xFFFFFF;
  v5 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
  v6 = v2 & 0xFFFFFF;
  v7 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v8 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 156) >> 20) & 0xFF0));
  v9 = (float)(unsigned int)v6 * 0.000000059605;
  v10 = (float)(unsigned int)v4 * 0.000000059605;
  v11 = (float)(FIELD_U32(a1, 156) & 0xFFFFFF) * 0.000000059605;
  v12 = FIELD_F32(a1, 6900);
  v13 = v7[2] + (float)(v9 * v7[3]);
  v14 = v5[2] + (float)(v10 * v5[3]);
  v15 = *v7 + (float)(v9 * v7[1]);
  v16 = *v5 + (float)(v10 * v5[1]);
  v17 = FIELD_F32(a1, 6904);
  v18 = FIELD_F32(a1, 108);
  v19 = FIELD_F32(a1, 112);
  v20 = FIELD_F32(a1, 116);
  v21 = v8[2] + (float)(v11 * v8[3]);
  v22 = *v8 + (float)(v11 * v8[1]);
  v24[0] = v14 * v13;
  v24[4] = v14 * v15;
  v24[8] = -v16;
  v24[1] = (float)((float)(v22 * v16) * v13) - (float)(v21 * v15);
  v24[5] = (float)(v21 * v13) + (float)((float)(v22 * v16) * v15);
  v24[9] = v22 * v14;
  v24[2] = (float)(v16 * (float)(v21 * v13)) + (float)(v22 * v15);
  v24[6] = (float)(v16 * (float)(v21 * v15)) - (float)(v22 * v13);
  v24[10] = v21 * v14;
  v24[3] = v18 + v12;
  v24[7] = v19 + v17;
  v24[11] = v20;
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v3, 0x0) + 60))(FIELD_U32(v3, 0x0), v24);
  return ModelWrapper_updateModel(v3);
}
