/* sub_600668C4
 * address: 0x600668C4   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600668C4(float *a1)
{
  float *v1; // r4
  unsigned int v2; // r12
  unsigned int v3; // r1
  unsigned int v4; // r0
  int v5; // s0
  int v6; // s14
  float *v7; // r1
  float v8; // s0
  float v9; // s2
  float *v10; // r0
  float v11; // s6
  float v12; // s8
  float v13; // s10
  float v14; // s12
  float *v15; // r1
  float v16; // s10
  float v17; // s6
  float v18; // s0
  float v19; // s8
  float v20; // s12
  float v21; // s4
  float v22; // s5
  float v23; // s1
  float v24; // s13
  float v25; // s9
  _DWORD *v26; // t1
  float v28[14]; // [sp+0h] [bp-38h] BYREF

  v1 = a1;
  v2 = *((_DWORD *)a1 + 40);
  v3 = *((_DWORD *)a1 + 41);
  v4 = *((_DWORD *)a1 + 39);
  v5 = v3 & 0xFFFFFF;
  v6 = v4 & 0xFFFFFF;
  v7 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v8 = (float)(unsigned int)v5 * 0.000000059605;
  v9 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v10 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v11 = *v7;
  v12 = v7[1];
  v13 = v7[2];
  v14 = v7[3];
  v15 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v16 = v13 + (float)(v8 * v14);
  v17 = v11 + (float)(v8 * v12);
  v18 = v1[27];
  v19 = v1[28];
  v20 = v1[29];
  v21 = (float)(unsigned int)v6 * 0.000000059605;
  v22 = v15[2] + (float)(v9 * v15[3]);
  v23 = *v15 + (float)(v9 * v15[1]);
  v24 = v10[2] + (float)(v21 * v10[3]);
  v25 = *v10 + (float)(v21 * v10[1]);
  v28[0] = v22 * v16;
  v28[4] = v22 * v17;
  v28[8] = -v23;
  v28[1] = (float)((float)(v25 * v23) * v16) - (float)(v24 * v17);
  v28[5] = (float)(v24 * v16) + (float)((float)(v25 * v23) * v17);
  v28[9] = v25 * v22;
  v28[2] = (float)(v23 * (float)(v24 * v16)) + (float)(v25 * v17);
  v28[6] = (float)(v23 * (float)(v24 * v17)) - (float)(v25 * v16);
  v28[10] = v24 * v22;
  v28[3] = v18 + 0.0;
  v28[7] = v19 + 180.0;
  v28[11] = v20 + 75.0;
  v26 = *((_DWORD **)v1 + 1525);
  v1 += 1525;
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)*v26 + 60))(*v26, v28);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)v1 + 68))(**(_DWORD **)v1, v1 - 1489);
  sub_604218E0(*(_DWORD **)v1);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)v1 + 52))(**(_DWORD **)v1);
  return (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)v1 + 56))(**(_DWORD **)v1);
}
