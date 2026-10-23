/* sub_605C0470
 * address: 0x605C0470   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605C0470(float *a1)
{
  float *v1; // r4
  unsigned int v2; // r12
  unsigned int v3; // r1
  unsigned int v4; // r0
  int v5; // s0
  int v6; // r2
  float *v7; // r1
  float v8; // s0
  float v9; // s2
  float v10; // s6
  float v11; // s8
  float v12; // s10
  float v13; // s12
  float *v14; // r1
  float v15; // s10
  float v16; // s6
  float v17; // s0
  float v18; // s8
  float v19; // s12
  float v20; // s4
  float v21; // s5
  float v22; // s1
  float v23; // s13
  float v24; // s9
  ModelWrapper *v25; // t1
  int v26; // r0
  int (__fastcall *v27)(int, _DWORD *); // r2
  int v28; // r0
  _DWORD *result; // r0
  _DWORD v30[11]; // [sp+0h] [bp-68h] BYREF
  _DWORD *v31; // [sp+2Ch] [bp-3Ch]
  float v32[14]; // [sp+30h] [bp-38h] BYREF

  v1 = a1;
  v2 = *((_DWORD *)a1 + 40);
  v3 = *((_DWORD *)a1 + 41);
  v4 = *((_DWORD *)a1 + 39);
  v5 = v3 & 0xFFFFFF;
  v6 = (v4 >> 20) & 0xFF0;
  v7 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v8 = (float)(unsigned int)v5 * 0.000000059605;
  v9 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v10 = *v7;
  v11 = v7[1];
  v12 = v7[2];
  v13 = v7[3];
  v14 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v15 = v12 + (float)(v8 * v13);
  v16 = v10 + (float)(v8 * v11);
  v17 = v1[27];
  v18 = v1[28];
  v19 = v1[29];
  v20 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v21 = v14[2] + (float)(v9 * v14[3]);
  v22 = *v14 + (float)(v9 * v14[1]);
  v23 = *(float *)((char *)&sinLutTable[2] + v6) + (float)(v20 * *(float *)((char *)&sinLutTable[3] + v6));
  v24 = *(float *)((char *)sinLutTable + v6) + (float)(v20 * *(float *)((char *)&sinLutTable[1] + v6));
  v32[0] = v21 * v15;
  v32[4] = v21 * v16;
  v32[8] = -v22;
  v32[1] = (float)((float)(v24 * v22) * v15) - (float)(v23 * v16);
  v32[5] = (float)(v23 * v15) + (float)((float)(v24 * v22) * v16);
  v32[9] = v24 * v21;
  v32[2] = (float)(v22 * (float)(v23 * v15)) + (float)(v24 * v16);
  v32[6] = (float)(v22 * (float)(v23 * v16)) - (float)(v24 * v15);
  v32[10] = v23 * v21;
  v32[3] = v17 + 16.0;
  v32[7] = v18 + -8.0;
  v32[11] = v19 + 0.0;
  v25 = *((ModelWrapper **)v1 + 1526);
  v1 += 1526;
  ModelWrapper_updateAnims(v25);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)v1 + 60))(**(_DWORD **)v1, v32);
  (*(void (__fastcall **)(_DWORD, _DWORD **))(***(_DWORD ***)v1 + 68))(**(_DWORD **)v1, (_DWORD **)v1 - 1490);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)v1 + 52))(**(_DWORD **)v1);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)v1 + 56))(**(_DWORD **)v1);
  v26 = **(_DWORD **)v1;
  v27 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v26 + 84);
  v30[0] = &sead__SafeStringBase__vtable;
  v30[1] = "joint";
  v28 = v27(v26, v30);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, v28, v30);
  v1[166] = *(float *)&v30[3];
  v1[167] = *(float *)&v30[7];
  result = v31;
  *((_DWORD *)v1 + 168) = v31;
  return result;
}
