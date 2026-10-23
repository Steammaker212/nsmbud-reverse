/* sub_603D8874
 * address: 0x603D8874   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D8874(int a1)
{
  float *v1; // r7
  int v2; // r4
  int v3; // r6
  unsigned int v4; // r3
  unsigned int v5; // r9
  float v6; // r0
  float v7; // r2
  float v8; // r12
  float v9; // lr
  float *v10; // r1
  float v11; // s0
  float v12; // s2
  float v13; // s4
  float v14; // s6
  float v15; // s10
  float *v16; // r0
  float *v17; // r1
  float v18; // s10
  float v19; // s8
  float v20; // s4
  float v21; // s3
  float v22; // s0
  float v23; // s14
  float v24; // s6
  float v25; // s11
  float v26; // s7
  int result; // r0
  float v28[12]; // [sp+4h] [bp-6Ch] BYREF
  _DWORD v29[15]; // [sp+34h] [bp-3Ch] BYREF

  v1 = (float *)(a1 + 12288);
  v2 = 0;
  v3 = a1 + 6308;
  do
  {
    v4 = *((_DWORD *)v1 - 2);
    v5 = *((_DWORD *)v1 - 1);
    v6 = *v1;
    v7 = *(v1 - 104);
    v8 = *(v1 - 103);
    v9 = *(v1 - 102);
    v29[0] = 1065353216;
    v29[1] = 1065353216;
    v29[2] = 1065353216;
    v10 = (float *)((char *)sinLutTable + ((LODWORD(v6) >> 20) & 0xFF0));
    v11 = *v10;
    v12 = v10[1];
    v13 = v10[2];
    v14 = v10[3];
    v15 = (float)(LODWORD(v6) & 0xFFFFFF);
    v16 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
    v17 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
    v18 = v15 * 0.000000059605;
    v19 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
    v20 = v13 + (float)(v18 * v14);
    v21 = v17[2] + (float)(v19 * v17[3]);
    v22 = v11 + (float)(v18 * v12);
    v23 = *v17 + (float)(v19 * v17[1]);
    v24 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
    v25 = v16[2] + (float)(v24 * v16[3]);
    v26 = *v16 + (float)(v24 * v16[1]);
    v28[0] = v21 * v20;
    v28[4] = v21 * v22;
    v28[8] = -v23;
    v28[1] = (float)((float)(v26 * v23) * v20) - (float)(v25 * v22);
    v28[5] = (float)(v25 * v20) + (float)((float)(v26 * v23) * v22);
    v28[9] = v26 * v21;
    v28[2] = (float)(v23 * (float)(v25 * v20)) + (float)(v26 * v22);
    v28[6] = (float)(v23 * (float)(v25 * v22)) - (float)(v26 * v20);
    v28[10] = v25 * v21;
    v28[3] = v7;
    v28[7] = v8;
    v28[11] = v9;
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(v3 + 4 * v2) + 60))(**(_DWORD **)(v3 + 4 * v2), v28);
    (*(void (__fastcall **)(_DWORD, _DWORD *))(***(_DWORD ***)(v3 + 4 * v2) + 68))(**(_DWORD **)(v3 + 4 * v2), v29);
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(v3 + 4 * v2) + 52))(**(_DWORD **)(v3 + 4 * v2));
    result = (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(v3 + 4 * v2) + 56))(**(_DWORD **)(v3 + 4 * v2));
    ++v2;
    v1 += 3;
  }
  while ( v2 != 17 );
  return result;
}
