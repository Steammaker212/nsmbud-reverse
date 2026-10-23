/* sub_605F814C
 * address: 0x605F814C   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F814C(_DWORD *a1)
{
  _DWORD **v1; // r4
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
  float v16; // s14
  float v17; // s10
  float v18; // s6
  float v19; // s5
  float v20; // s1
  float v21; // s13
  float v22; // s9
  _DWORD *v23; // t1
  float v25[14]; // [sp+0h] [bp-38h] BYREF

  v1 = (_DWORD **)a1;
  v2 = a1[40];
  v3 = a1[41];
  v4 = a1[39];
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
  v16 = (float)(unsigned int)v6;
  v17 = v13 + (float)(v8 * v14);
  v18 = v11 + (float)(v8 * v12);
  v19 = v15[2] + (float)(v9 * v15[3]);
  v20 = *v15 + (float)(v9 * v15[1]);
  v21 = v10[2] + (float)((float)(v16 * 0.000000059605) * v10[3]);
  v22 = *v10 + (float)((float)(v16 * 0.000000059605) * v10[1]);
  v25[0] = v19 * v17;
  v25[4] = v19 * v18;
  v25[8] = -v20;
  v25[1] = (float)((float)(v22 * v20) * v17) - (float)(v21 * v18);
  v25[5] = (float)(v21 * v17) + (float)((float)(v22 * v20) * v18);
  v25[9] = v22 * v19;
  v25[2] = (float)(v20 * (float)(v21 * v17)) + (float)(v22 * v18);
  v25[6] = (float)(v20 * (float)(v21 * v18)) - (float)(v22 * v17);
  v25[10] = v21 * v19;
  LODWORD(v25[3]) = v1[27];
  LODWORD(v25[7]) = v1[28];
  LODWORD(v25[11]) = v1[29];
  v23 = v1[1575];
  v1 += 1575;
  (*(void (__fastcall **)(_DWORD, _DWORD **))(*(_DWORD *)*v23 + 68))(*v23, v1 - 1539);
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)**v1 + 60))(**v1, v25);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v1 + 52))(**v1);
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v1 + 56))(**v1);
}
