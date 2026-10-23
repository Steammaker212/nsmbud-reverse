/* sub_60285E04
 * address: 0x60285E04   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60285E04(int a1)
{
  _DWORD **v1; // r6
  unsigned int v2; // r0
  unsigned int v3; // r1
  unsigned int v4; // r5
  int v5; // s2
  float *v6; // r2
  float *v7; // r4
  float *v8; // r0
  float v9; // s14
  float v10; // s0
  float v11; // s2
  float v12; // s10
  float v13; // s5
  float v14; // s6
  float v15; // s1
  float v16; // s13
  float v17; // s9
  float v19[16]; // [sp+0h] [bp-40h] BYREF

  v1 = (_DWORD **)(a1 + 6300);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  v2 = (unsigned int)*(v1 - 1535);
  v3 = (unsigned int)*(v1 - 1534);
  v4 = (unsigned int)*(v1 - 1536);
  v5 = v2 & 0xFFFFFF;
  v6 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v7 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v8 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v9 = (float)(v4 & 0xFFFFFF);
  v10 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
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
  LODWORD(v19[3]) = *(v1 - 1548);
  LODWORD(v19[7]) = *(v1 - 1547);
  LODWORD(v19[11]) = *(v1 - 1546);
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)**v1 + 60))(**v1, v19);
  return sub_60421880(*v1);
}
