/* sub_606D875C
 * address: 0x606D875C   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D875C(int a1)
{
  float v1; // r1
  float v2; // r2
  float v3; // s0
  _DWORD **v4; // r4
  unsigned int v5; // r0
  unsigned int v6; // r1
  unsigned int v7; // r5
  int v8; // s2
  float *v9; // r2
  float *v10; // r3
  float *v11; // r0
  float v12; // s14
  float v13; // s0
  float v14; // s2
  float v15; // s10
  float v16; // s5
  float v17; // s6
  float v18; // s1
  float v19; // s13
  float v20; // s9
  float v22[12]; // [sp+0h] [bp-50h] BYREF
  float v23; // [sp+30h] [bp-20h] BYREF
  float v24; // [sp+34h] [bp-1Ch]
  float v25; // [sp+38h] [bp-18h]

  v1 = FIELD_F32(a1, 148);
  v2 = FIELD_F32(a1, 152);
  v23 = FIELD_F32(a1, 144);
  v24 = v1;
  v25 = v2;
  v3 = FIELD_F32(a1, 6756);
  v23 = v3 * v23;
  v24 = v3 * v1;
  v25 = v3 * v2;
  v4 = (_DWORD **)(a1 + 6304);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6304) + 68))(**(_DWORD **)(a1 + 6304), &v23);
  v5 = (unsigned int)*(v4 - 1536);
  v6 = (unsigned int)*(v4 - 1535);
  v7 = (unsigned int)*(v4 - 1537);
  v8 = v5 & 0xFFFFFF;
  v9 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v11 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v12 = (float)(v7 & 0xFFFFFF);
  v13 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v14 = (float)(unsigned int)v8 * 0.000000059605;
  v15 = v10[2] + (float)(v13 * v10[3]);
  v16 = v9[2] + (float)(v14 * v9[3]);
  v17 = *v10 + (float)(v13 * v10[1]);
  v18 = *v9 + (float)(v14 * v9[1]);
  v19 = v11[2] + (float)((float)(v12 * 0.000000059605) * v11[3]);
  v20 = *v11 + (float)((float)(v12 * 0.000000059605) * v11[1]);
  v22[0] = v16 * v15;
  v22[4] = v16 * v17;
  v22[8] = -v18;
  v22[1] = (float)((float)(v20 * v18) * v15) - (float)(v19 * v17);
  v22[5] = (float)(v19 * v15) + (float)((float)(v20 * v18) * v17);
  v22[9] = v20 * v16;
  v22[2] = (float)(v18 * (float)(v19 * v15)) + (float)(v20 * v17);
  v22[6] = (float)(v18 * (float)(v19 * v17)) - (float)(v20 * v15);
  v22[10] = v19 * v16;
  LODWORD(v22[3]) = *(v4 - 1549);
  LODWORD(v22[7]) = *(v4 - 1548);
  LODWORD(v22[11]) = *(v4 - 1547);
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)**v4 + 60))(**v4, v22);
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v4 + 56))(**v4);
}
