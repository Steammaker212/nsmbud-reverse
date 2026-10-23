/* ef_sandpillar_ref
 * address: 0x60626928   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall ef_sandpillar_ref(int a1)
{
  float v2; // r8
  float v3; // r12
  float v4; // lr
  unsigned int v5; // r3
  unsigned int v6; // r5
  unsigned int v7; // r0
  int v8; // s2
  float *v9; // r2
  float *v10; // r0
  float *v11; // r6
  float v12; // s2
  float v13; // s0
  float v14; // s4
  float v15; // s12
  float v16; // s5
  float v17; // s8
  float v18; // s1
  float v19; // s9
  float v20; // s13
  _DWORD **v21; // r5
  int v22; // r0
  int (__fastcall *v23)(int, _DWORD *); // r2
  int v24; // r0
  float v25; // r0
  float result; // s0
  float v27[12]; // [sp+0h] [bp-78h] BYREF
  _DWORD v28[7]; // [sp+30h] [bp-48h] BYREF
  float v29; // [sp+4Ch] [bp-2Ch]
  int v30; // [sp+5Ch] [bp-1Ch]

  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 116);
  v5 = FIELD_U32(a1, 156);
  v6 = FIELD_U32(a1, 160);
  v7 = FIELD_U32(a1, 164);
  v8 = v7 & 0xFFFFFF;
  v9 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v11 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v12 = (float)(unsigned int)v8 * 0.000000059605;
  v13 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v14 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v15 = v10[2] + (float)(v12 * v10[3]);
  v16 = v9[2] + (float)(v13 * v9[3]);
  v17 = *v10 + (float)(v12 * v10[1]);
  v18 = *v9 + (float)(v13 * v9[1]);
  v19 = *v11 + (float)(v14 * v11[1]);
  v20 = v11[2] + (float)(v14 * v11[3]);
  v27[0] = (float)(v16 * v15) + (float)(v19 * (float)(v18 * v17));
  v27[4] = v20 * v17;
  v27[8] = (float)(v19 * (float)(v16 * v17)) - (float)(v18 * v15);
  v27[1] = (float)(v19 * (float)(v18 * v15)) - (float)(v16 * v17);
  v27[5] = v20 * v15;
  v27[9] = (float)(v18 * v17) + (float)(v19 * (float)(v16 * v15));
  v27[2] = v20 * v18;
  v27[6] = -v19;
  v27[10] = v20 * v16;
  v27[3] = v2;
  v27[7] = v3;
  v27[11] = v4;
  v21 = (_DWORD **)(a1 + 6132);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6132) + 60))(**(_DWORD **)(a1 + 6132), v27);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v21 + 68))(**v21, a1 + 144);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6132));
  v22 = **(_DWORD **)(a1 + 6132);
  v23 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v22 + 84);
  v28[0] = &sead__SafeStringBase__vtable;
  v28[1] = "ef_sandpillar";
  v24 = v23(v22, v28);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)**v21 + 108))(**v21, v24, v28);
  FIELD_U32(a1, 7288) = v28[3];
  v25 = v29;
  FIELD_F32(a1, 7292) = v29;
  FIELD_U32(a1, 7296) = v30;
  result = v25 - FIELD_F32(a1, 112);
  FIELD_F32(a1, 6120) = result;
  return result;
}
