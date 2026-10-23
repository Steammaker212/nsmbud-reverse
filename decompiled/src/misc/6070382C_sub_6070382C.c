/* sub_6070382C
 * address: 0x6070382C   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6070382C(float *a1)
{
  float *v1; // r4
  float v2; // r8
  float v3; // r12
  float v4; // lr
  unsigned int v5; // r3
  unsigned int v6; // r5
  unsigned int v7; // r0
  int v8; // s2
  float *v9; // r2
  float *v10; // r0
  float *v11; // r6
  float v12; // s2
  float v13; // s0
  float v14; // s4
  float v15; // s12
  float v16; // s5
  float v17; // s8
  float v18; // s1
  float v19; // s9
  float v20; // s13
  _DWORD *v21; // t1
  float v23[18]; // [sp+0h] [bp-48h] BYREF

  v1 = a1;
  v2 = a1[27];
  v3 = a1[28];
  v4 = a1[29];
  v5 = *((_DWORD *)a1 + 39);
  v6 = *((_DWORD *)a1 + 40);
  v7 = *((_DWORD *)a1 + 41);
  v8 = v7 & 0xFFFFFF;
  v9 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v11 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v12 = (float)(unsigned int)v8 * 0.000000059605;
  v13 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v14 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v15 = v10[2] + (float)(v12 * v10[3]);
  v16 = v9[2] + (float)(v13 * v9[3]);
  v17 = *v10 + (float)(v12 * v10[1]);
  v18 = *v9 + (float)(v13 * v9[1]);
  v19 = *v11 + (float)(v14 * v11[1]);
  v20 = v11[2] + (float)(v14 * v11[3]);
  v23[0] = (float)(v16 * v15) + (float)(v19 * (float)(v18 * v17));
  v23[4] = v20 * v17;
  v23[8] = (float)(v19 * (float)(v16 * v17)) - (float)(v18 * v15);
  v23[1] = (float)(v19 * (float)(v18 * v15)) - (float)(v16 * v17);
  v23[5] = v20 * v15;
  v23[9] = (float)(v18 * v17) + (float)(v19 * (float)(v16 * v15));
  v23[2] = v20 * v18;
  v23[6] = -v19;
  v23[10] = v20 * v16;
  v23[3] = v2;
  v23[7] = v3;
  v23[11] = v4;
  sub_60703E9C(v1, v23);
  v21 = *((_DWORD **)v1 + 1525);
  v1 += 1525;
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)*v21 + 60))(*v21, v23);
  ModelWrapper_updateAnims(*(ModelWrapper **)v1);
  return ModelWrapper_updateModel(*(ModelWrapper **)v1);
}
