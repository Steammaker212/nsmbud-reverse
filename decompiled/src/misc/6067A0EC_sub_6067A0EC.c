/* sub_6067A0EC
 * address: 0x6067A0EC   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067A0EC(int a1)
{
  ModelWrapper *v1; // r8
  unsigned int v2; // r1
  unsigned int v3; // r2
  unsigned int v4; // r3
  int v5; // s2
  float *v6; // r5
  float *v7; // r7
  float *v8; // r2
  float v9; // s14
  float v10; // s0
  float v11; // s2
  float v12; // s10
  float v13; // s5
  float v14; // s6
  float v15; // s1
  float v16; // s13
  float v17; // s9
  float v19[18]; // [sp+0h] [bp-48h] BYREF

  v1 = *(ModelWrapper **)(a1 + 6100);
  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 164);
  v5 = v3 & 0xFFFFFF;
  v6 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v7 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v8 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v9 = (float)(v2 & 0xFFFFFF);
  v10 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v11 = (float)(unsigned int)v5 * 0.000000059605;
  v12 = v7[2] + (float)(v10 * v7[3]);
  v13 = v6[2] + (float)(v11 * v6[3]);
  v14 = *v7 + (float)(v10 * v7[1]);
  v15 = *v6 + (float)(v11 * v6[1]);
  v16 = v8[2] + (float)((float)(v9 * 0.000000059605) * v8[3]);
  v17 = *v8 + (float)((float)(v9 * 0.000000059605) * v8[1]);
  v19[0] = v13 * v12;
  v19[4] = v13 * v14;
  v19[8] = -v15;
  v19[1] = (float)((float)(v17 * v15) * v12) - (float)(v16 * v14);
  v19[5] = (float)(v16 * v12) + (float)((float)(v17 * v15) * v14);
  v19[9] = v17 * v13;
  v19[2] = (float)(v15 * (float)(v16 * v12)) + (float)(v17 * v14);
  v19[6] = (float)(v15 * (float)(v16 * v14)) - (float)(v17 * v12);
  v19[10] = v16 * v13;
  v19[3] = FIELD_F32(a1, 108);
  v19[7] = FIELD_F32(a1, 112);
  v19[11] = FIELD_F32(a1, 116);
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v1, 0x0) + 60))(FIELD_U32(v1, 0x0), v19);
  return ModelWrapper_updateModel(v1);
}
