/* sub_60720018
 * address: 0x60720018   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60720018(int a1, int a2, int a3, Vec3 *a4, _DWORD *a5, Vec3 *a6)
{
  unsigned int v7; // r2
  float z; // s0
  unsigned int v9; // r6
  float v10; // s2
  int v11; // s4
  float *v12; // r7
  float *v13; // r2
  float x; // lr
  float v15; // s3
  float v16; // s5
  float v17; // s7
  float v18; // s9
  float *v19; // r2
  float v20; // s10
  float v21; // s8
  float v22; // s4
  float v23; // s12
  float v24; // s3
  float v25; // s7
  float v26; // s6
  float v27; // s15
  float v28; // s11
  float v29; // s10
  float v30; // s8
  float y; // s10
  float v32; // s6
  float v34[20]; // [sp+0h] [bp-50h] BYREF

  v7 = a5[1];
  z = FIELD_F32(a4, 0x8);
  v9 = -a5[2];
  v10 = -FIELD_F32(a4, 0x4);
  v11 = v7 & 0xFFFFFF;
  v12 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v13 = (float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0));
  x = FIELD_F32(a4, 0x0);
  v15 = *v13;
  v16 = v13[1];
  v17 = v13[2];
  v18 = v13[3];
  v19 = (float *)((char *)sinLutTable + ((*a5 >> 20) & 0xFF0));
  v20 = (float)(unsigned int)v11 * 0.000000059605;
  v21 = (float)(v9 & 0xFFFFFF) * 0.000000059605;
  v22 = v12[2] + (float)(v20 * v12[3]);
  v23 = *v12 + (float)(v20 * v12[1]);
  v24 = v15 + (float)(v21 * v16);
  v25 = v17 + (float)(v21 * v18);
  v26 = (float)(*a5 & 0xFFFFFF) * 0.000000059605;
  v27 = v19[2] + (float)(v26 * v19[3]);
  v28 = *v19 + (float)(v26 * v19[1]);
  v29 = (float)(v22 * v24) * FIELD_F32(a6, 0x0);
  v30 = -(float)(v23 * FIELD_F32(a6, 0x0));
  v34[0] = FIELD_F32(a6, 0x0) * (float)(v22 * v25);
  v34[4] = v29;
  v34[8] = v30;
  y = FIELD_F32(a6, 0x4);
  v34[1] = (float)((float)((float)(v28 * v23) * v25) - (float)(v27 * v24)) * y;
  v34[5] = (float)((float)(v27 * v25) + (float)((float)(v28 * v23) * v24)) * y;
  v34[9] = (float)(v28 * v22) * y;
  v32 = FIELD_F32(a6, 0x8);
  v34[2] = (float)((float)(v23 * (float)(v27 * v25)) + (float)(v28 * v24)) * v32;
  v34[6] = (float)((float)(v23 * (float)(v27 * v24)) - (float)(v28 * v25)) * v32;
  v34[10] = (float)(v27 * v22) * v32;
  v34[3] = x;
  v34[7] = v10;
  v34[11] = z + -10000.0;
  return ((int (__fastcall *)(int, int, float *, int))sub_607201B0)(a1, a2, v34, a3);
}
