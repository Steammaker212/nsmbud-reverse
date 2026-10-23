/* block_cloud_model_ref
 * address: 0x6056782C   size: 584   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall block_cloud_model_ref(int a1)
{
  float *v1; // r4
  float v2; // s0
  unsigned int v3; // r6
  unsigned int v4; // r5
  float v5; // lr
  float v6; // r12
  unsigned int v7; // r2
  int v8; // r7
  float *v9; // r0
  float *v10; // r3
  float v11; // s1
  float v12; // s4
  float v13; // s2
  float v14; // s12
  float v15; // s7
  float v16; // s8
  float v17; // s15
  float v18; // s3
  float v19; // s11
  int v20; // r0
  int (__fastcall *v21)(int, _DWORD *); // r2
  int v22; // r0
  _DWORD v24[12]; // [sp+0h] [bp-80h] BYREF
  float v25[20]; // [sp+30h] [bp-50h] BYREF

  v1 = (float *)(a1 + 7388);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7388));
  v2 = *(v1 - 1819);
  v3 = *((_DWORD *)v1 - 1808);
  v4 = *((_DWORD *)v1 - 1806);
  v5 = *(v1 - 1820);
  v6 = *(v1 - 1818);
  v7 = *((_DWORD *)v1 - 1807);
  v8 = (v3 >> 20) & 0xFF0;
  v9 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v11 = (float)(v3 & 0xFFFFFF);
  v12 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v14 = v10[2] + (float)(v12 * v10[3]);
  v15 = v9[2] + (float)(v13 * v9[3]);
  v16 = *v10 + (float)(v12 * v10[1]);
  v17 = *(float *)((char *)&sinLutTable[2] + v8)
      + (float)((float)(v11 * 0.000000059605) * *(float *)((char *)&sinLutTable[3] + v8));
  v18 = *v9 + (float)(v13 * v9[1]);
  v19 = *(float *)((char *)sinLutTable + v8)
      + (float)((float)(v11 * 0.000000059605) * *(float *)((char *)&sinLutTable[1] + v8));
  v25[0] = v15 * v14;
  v25[4] = v15 * v16;
  v25[8] = -v18;
  v25[1] = (float)((float)(v19 * v18) * v14) - (float)(v17 * v16);
  v25[5] = (float)(v17 * v14) + (float)((float)(v19 * v18) * v16);
  v25[9] = v19 * v15;
  v25[2] = (float)(v18 * (float)(v17 * v14)) + (float)(v19 * v16);
  v25[6] = (float)(v18 * (float)(v17 * v16)) - (float)(v19 * v14);
  v25[10] = v17 * v15;
  v25[3] = v5;
  v25[7] = v2 + 12.0;
  v25[11] = v6;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)v1 + 60))(**(_DWORD **)v1, v25);
  (*(void (__fastcall **)(_DWORD, _DWORD **))(***(_DWORD ***)v1 + 68))(**(_DWORD **)v1, (_DWORD **)v1 - 1811);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)v1 + 52))(**(_DWORD **)v1);
  v20 = **(_DWORD **)v1;
  v21 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v20 + 84);
  v24[0] = &sead__SafeStringBase__vtable;
  v24[1] = "block_cloud_model";
  v22 = v21(v20, v24);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, v22, v24);
  v1[1] = *(float *)&v24[3];
  v1[2] = *(float *)&v24[7];
  v1[3] = *(float *)&v24[11];
  return (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)v1 + 56))(**(_DWORD **)v1);
}
