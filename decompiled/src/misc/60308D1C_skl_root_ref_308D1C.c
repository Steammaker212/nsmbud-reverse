/* skl_root_ref_308D1C
 * address: 0x60308D1C   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall skl_root_ref_308D1C(int a1)
{
  int **v1; // r4
  int v2; // r2
  unsigned int v3; // r0
  unsigned int v4; // r1
  int v5; // lr
  unsigned int v6; // r3
  int v7; // r5
  float *v8; // r2
  float *v9; // r1
  float v10; // s0
  float v11; // s2
  float v12; // s14
  float v13; // s10
  float v14; // s5
  float v15; // s6
  float v16; // s1
  float v17; // s13
  float v18; // s9
  int *v19; // t1
  int v20; // r0
  int (__fastcall *v21)(int, _DWORD *); // r2
  int v22; // r0
  _DWORD *result; // r0
  _DWORD v24[11]; // [sp+0h] [bp-70h] BYREF
  _DWORD *v25; // [sp+2Ch] [bp-44h]
  float v26[16]; // [sp+30h] [bp-40h] BYREF

  v1 = (int **)a1;
  v2 = a1 + 156;
  v3 = FIELD_U32(a1, 156);
  v4 = FIELD_U32(v2, 4);
  v5 = (v3 >> 20) & 0xFF0;
  v6 = FIELD_U32(v2, 8);
  v7 = v4 & 0xFFFFFF;
  v8 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v10 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v11 = (float)(unsigned int)v7 * 0.000000059605;
  v12 = (float)(v3 & 0xFFFFFF);
  v13 = v8[2] + (float)(v10 * v8[3]);
  v14 = v9[2] + (float)(v11 * v9[3]);
  v15 = *v8 + (float)(v10 * v8[1]);
  v16 = *v9 + (float)(v11 * v9[1]);
  v17 = *(float *)((char *)&sinLutTable[2] + v5)
      + (float)((float)(v12 * 0.000000059605) * *(float *)((char *)&sinLutTable[3] + v5));
  v18 = *(float *)((char *)sinLutTable + v5)
      + (float)((float)(v12 * 0.000000059605) * *(float *)((char *)&sinLutTable[1] + v5));
  v26[0] = v14 * v13;
  v26[4] = v14 * v15;
  v26[8] = -v16;
  v26[1] = (float)((float)(v18 * v16) * v13) - (float)(v17 * v15);
  v26[5] = (float)(v17 * v13) + (float)((float)(v18 * v16) * v15);
  v26[9] = v18 * v14;
  v26[2] = (float)(v16 * (float)(v17 * v13)) + (float)(v18 * v15);
  v26[6] = (float)(v16 * (float)(v17 * v15)) - (float)(v18 * v13);
  v26[10] = v17 * v14;
  LODWORD(v26[3]) = v1[27];
  LODWORD(v26[7]) = v1[28];
  LODWORD(v26[11]) = v1[29];
  v19 = v1[1575];
  v1 += 1575;
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)*v19 + 60))(*v19, v26);
  (*(void (__fastcall **)(int, int **))(*(_DWORD *)**v1 + 68))(**v1, v1 + 155);
  Animation_update(*(_DWORD *)(*v1)[3]);
  Animation_update((int)v1[1]);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v1 + 52))(**v1);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v1 + 56))(**v1);
  v20 = **v1;
  v21 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v20 + 84);
  v24[0] = &sead__SafeStringBase__vtable;
  v24[1] = "skl_root";
  v22 = v21(v20, v24);
  (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v1 + 108))(**v1, v22, v24);
  v1[54] = (int *)v24[3];
  v1[55] = (int *)v24[7];
  result = v25;
  v1[56] = v25;
  return result;
}
