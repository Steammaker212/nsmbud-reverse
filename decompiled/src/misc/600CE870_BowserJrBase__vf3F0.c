/* BowserJrBase__vf3F0
 * address: 0x600CE870   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026BE8
// 
// Overridden by: None
_DWORD *__fastcall BowserJrBase__vf3F0(_DWORD *a1)
{
  _DWORD **v1; // r4
  float v2; // r8
  float v3; // r12
  float v4; // lr
  unsigned int v5; // r3
  unsigned int v6; // r0
  unsigned int v7; // r1
  int v8; // r5
  float *v9; // r2
  float *v10; // r6
  float v11; // s2
  float v12; // s0
  float v13; // s4
  float v14; // s12
  float v15; // s5
  float v16; // s8
  float v17; // s1
  float v18; // s9
  float v19; // s13
  _DWORD *v20; // t1
  _DWORD *result; // r0
  float v22[12]; // [sp+0h] [bp-78h] BYREF
  char v23[12]; // [sp+30h] [bp-48h] BYREF
  _DWORD *v24; // [sp+3Ch] [bp-3Ch]
  _DWORD *v25; // [sp+4Ch] [bp-2Ch]
  _DWORD *v26; // [sp+5Ch] [bp-1Ch]

  v1 = (_DWORD **)a1;
  v2 = *((float *)a1 + 27);
  v3 = *((float *)a1 + 28);
  v4 = *((float *)a1 + 29);
  v5 = a1[39];
  v6 = a1[40];
  v7 = (unsigned int)v1[41];
  v8 = (v7 >> 20) & 0xFF0;
  v9 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v11 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v14 = *(float *)((char *)&sinLutTable[2] + v8) + (float)(v11 * *(float *)((char *)&sinLutTable[3] + v8));
  v15 = v9[2] + (float)(v12 * v9[3]);
  v16 = *(float *)((char *)sinLutTable + v8) + (float)(v11 * *(float *)((char *)&sinLutTable[1] + v8));
  v17 = *v9 + (float)(v12 * v9[1]);
  v18 = *v10 + (float)(v13 * v10[1]);
  v19 = v10[2] + (float)(v13 * v10[3]);
  v22[0] = (float)(v15 * v14) + (float)(v18 * (float)(v17 * v16));
  v22[4] = v19 * v16;
  v22[8] = (float)(v18 * (float)(v15 * v16)) - (float)(v17 * v14);
  v22[1] = (float)(v18 * (float)(v17 * v14)) - (float)(v15 * v16);
  v22[5] = v19 * v14;
  v22[9] = (float)(v17 * v16) + (float)(v18 * (float)(v15 * v14));
  v22[2] = v19 * v17;
  v22[6] = -v18;
  v22[10] = v19 * v15;
  v22[3] = v2;
  v22[7] = v3;
  v22[11] = v4;
  v20 = v1[1775];
  v1 += 1775;
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)*v20 + 60))(*v20, v22);
  (*(void (__fastcall **)(_DWORD, _DWORD **))(*(_DWORD *)**v1 + 68))(**v1, v1 - 102);
  j_ModelWrapper_updateAnims(*v1);
  sub_60421880(*v1);
  (*(void (__fastcall **)(_DWORD, int, char *))(*(_DWORD *)**v1 + 108))(**v1, 1, v23);
  v1[20] = v24;
  v1[21] = v25;
  result = v26;
  v1[22] = v26;
  return result;
}
