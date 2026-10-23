/* sub_60314EA0
 * address: 0x60314EA0   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60314EA0(int a1)
{
  int v1; // r6
  _DWORD *v2; // r7
  int v3; // r11
  int v4; // r10
  int v5; // r12
  int v6; // lr
  unsigned int v7; // r3
  unsigned int v8; // r0
  int v9; // r8
  int v10; // r4
  float *v11; // r2
  float v12; // s2
  float v13; // s0
  float v14; // s4
  float v15; // s10
  float v16; // s3
  float v17; // s6
  float v18; // s14
  float v19; // s7
  float v20; // s11
  int v21; // r0
  int (__fastcall *v22)(int, float *); // r2
  unsigned __int8 v23; // r0
  int *v24; // t1
  int v25; // r0
  int (__fastcall *v26)(int, float *); // r2
  unsigned __int8 v27; // r0
  int result; // r0
  int v30; // [sp+4h] [bp-64h]
  float v31; // [sp+8h] [bp-60h] BYREF
  float v32; // [sp+Ch] [bp-5Ch]
  float v33; // [sp+10h] [bp-58h]
  int v34; // [sp+14h] [bp-54h]
  float v35; // [sp+18h] [bp-50h]
  float v36; // [sp+1Ch] [bp-4Ch]
  float v37; // [sp+20h] [bp-48h]
  int v38; // [sp+24h] [bp-44h]
  float v39; // [sp+28h] [bp-40h]
  float v40; // [sp+2Ch] [bp-3Ch]
  float v41; // [sp+30h] [bp-38h]
  int v42; // [sp+34h] [bp-34h]

  v1 = 0;
  v2 = (_DWORD *)(a1 + 6588);
  v3 = a1 + 6304;
  v30 = a1 + 144;
  do
  {
    v4 = *(v2 - 44);
    v5 = *(v2 - 43);
    v6 = *(v2 - 42);
    v7 = *(v2 - 2);
    v8 = *(v2 - 1);
    v9 = (v7 >> 20) & 0xFF0;
    v10 = (*v2 >> 20) & 0xFF0;
    v11 = (float *)((char *)sinLutTable + ((v8 >> 20) & 0xFF0));
    v12 = (float)(*v2 & 0xFFFFFF) * 0.000000059605;
    v13 = (float)(v8 & 0xFFFFFF) * 0.000000059605;
    v14 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
    v15 = *(float *)((char *)&sinLutTable[2] + v10) + (float)(v12 * *(float *)((char *)&sinLutTable[3] + v10));
    v16 = v11[2] + (float)(v13 * v11[3]);
    v17 = *(float *)((char *)sinLutTable + v10) + (float)(v12 * *(float *)((char *)&sinLutTable[1] + v10));
    v18 = *v11 + (float)(v13 * v11[1]);
    v19 = *(float *)((char *)sinLutTable + v9) + (float)(v14 * *(float *)((char *)&sinLutTable[1] + v9));
    v20 = *(float *)((char *)&sinLutTable[2] + v9) + (float)(v14 * *(float *)((char *)&sinLutTable[3] + v9));
    v31 = (float)(v16 * v15) + (float)(v19 * (float)(v18 * v17));
    v35 = v20 * v17;
    v39 = (float)(v19 * (float)(v16 * v17)) - (float)(v18 * v15);
    v32 = (float)(v19 * (float)(v18 * v15)) - (float)(v16 * v17);
    v36 = v20 * v15;
    v40 = (float)(v18 * v17) + (float)(v19 * (float)(v16 * v15));
    v33 = v20 * v18;
    v37 = -v19;
    v41 = v20 * v16;
    v34 = v4;
    v38 = v5;
    v42 = v6;
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(v3 + 4 * v1) + 60))(**(_DWORD **)(v3 + 4 * v1), &v31);
    (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(v3 + 4 * v1) + 68))(**(_DWORD **)(v3 + 4 * v1), v30);
    j_ModelWrapper_updateAnims(*(_DWORD *)(v3 + 4 * v1));
    sub_60421880(*(_DWORD *)(v3 + 4 * v1++));
    v2 += 3;
  }
  while ( v1 != 6 );
  v21 = **(_DWORD **)(a1 + 6304);
  v22 = *(int (__fastcall **)(int, float *))(*(_DWORD *)v21 + 84);
  v31 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v32 = COERCE_FLOAT("karon_partsA");
  v23 = v22(v21, &v31);
  (*(void (__fastcall **)(_DWORD, _DWORD, float *))(***(_DWORD ***)(a1 + 6304) + 108))(
    **(_DWORD **)(a1 + 6304),
    v23,
    &v31);
  FIELD_U32(a1, 6400) = v34;
  FIELD_U32(a1, 6404) = v38;
  FIELD_U32(a1, 6408) = v42;
  v24 = *(int **)(a1 + 6308);
  v25 = *v24;
  v26 = *(int (__fastcall **)(int, float *))(*(_DWORD *)*v24 + 84);
  v31 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v32 = COERCE_FLOAT("karon_partsB");
  v27 = v26(v25, &v31);
  (*(void (__fastcall **)(_DWORD, _DWORD, float *))(***(_DWORD ***)(a1 + 6308) + 108))(
    **(_DWORD **)(a1 + 6308),
    v27,
    &v31);
  FIELD_U32(a1, 6388) = v34;
  FIELD_U32(a1, 6392) = v38;
  result = v42;
  FIELD_U32(a1, 6396) = v42;
  return result;
}
