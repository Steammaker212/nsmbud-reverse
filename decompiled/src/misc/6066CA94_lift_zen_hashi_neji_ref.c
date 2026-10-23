/* lift_zen_hashi_neji_ref
 * address: 0x6066CA94   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lift_zen_hashi_neji_ref(int a1)
{
  _DWORD **v1; // r4
  int *v2; // t1
  int v3; // r0
  int (__fastcall *v4)(int, float *); // r2
  int v5; // r9
  unsigned int v6; // r5
  unsigned int v7; // r0
  unsigned int v8; // r6
  int v9; // r7
  float *v10; // r2
  float *v11; // r1
  float v12; // s14
  float v13; // s2
  float v14; // s0
  float v15; // s10
  float v16; // s5
  float v17; // s6
  float v18; // s13
  float v19; // s1
  float v20; // s9
  _DWORD v22[3]; // [sp+0h] [bp-68h] BYREF
  _DWORD v23[3]; // [sp+Ch] [bp-5Ch] BYREF
  float v24; // [sp+18h] [bp-50h] BYREF
  float v25; // [sp+1Ch] [bp-4Ch]
  float v26; // [sp+20h] [bp-48h]
  float v27; // [sp+28h] [bp-40h]
  float v28; // [sp+2Ch] [bp-3Ch]
  float v29; // [sp+30h] [bp-38h]
  float v30; // [sp+38h] [bp-30h]
  float v31; // [sp+3Ch] [bp-2Ch]
  float v32; // [sp+40h] [bp-28h]

  memset(v23, 0, sizeof(v23));
  v22[0] = 1065353216;
  v22[1] = 1065353216;
  v22[2] = 1065353216;
  v2 = *(int **)(a1 + 6100);
  v1 = (_DWORD **)(a1 + 6100);
  v3 = *v2;
  v4 = *(int (__fastcall **)(int, float *))(*(_DWORD *)*v2 + 84);
  v24 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v25 = COERCE_FLOAT("lift_zen_hashi_neji");
  v5 = v4(v3, &v24);
  (*(void (__fastcall **)(_DWORD, int, float *, _DWORD *))(*(_DWORD *)**v1 + 100))(**v1, v5, &v24, v23);
  v6 = (unsigned int)v1[3];
  v7 = (unsigned int)*(v1 - 1485);
  v8 = (unsigned int)*(v1 - 1486);
  v9 = (v8 >> 20) & 0xFF0;
  v10 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v11 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v12 = (float)(v8 & 0xFFFFFF);
  v13 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v14 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v15 = v11[2] + (float)(v13 * v11[3]);
  v16 = v10[2] + (float)(v14 * v10[3]);
  v17 = *v11 + (float)(v13 * v11[1]);
  v18 = *(float *)((char *)&sinLutTable[2] + v9)
      + (float)((float)(v12 * 0.000000059605) * *(float *)((char *)&sinLutTable[3] + v9));
  v19 = *v10 + (float)(v14 * v10[1]);
  v20 = *(float *)((char *)sinLutTable + v9)
      + (float)(*(float *)((char *)&sinLutTable[1] + v9) * (float)(v12 * 0.000000059605));
  v24 = v16 * v15;
  v27 = v16 * v17;
  v30 = -v19;
  v25 = (float)((float)(v20 * v19) * v15) - (float)(v18 * v17);
  v28 = (float)(v18 * v15) + (float)((float)(v20 * v19) * v17);
  v31 = v20 * v16;
  v26 = (float)(v19 * (float)(v18 * v15)) + (float)(v20 * v17);
  v29 = (float)(v19 * (float)(v18 * v17)) - (float)(v20 * v15);
  v32 = v18 * v16;
  (*(void (__fastcall **)(_DWORD, int, float *, _DWORD *))(*(_DWORD *)**v1 + 96))(**v1, v5, &v24, v22);
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v1 + 56))(**v1);
}
