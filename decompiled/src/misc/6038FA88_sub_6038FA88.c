/* sub_6038FA88
 * address: 0x6038FA88   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_6038FA88(int a1)
{
  float *v1; // r4
  int *v2; // t1
  int v3; // r0
  int (__fastcall *v4)(int, _DWORD *); // r2
  int v5; // r0
  float v6; // s18
  float v7; // s20
  float v8; // s22
  int v9; // r0
  int (__fastcall *v10)(int, int (***)()); // r2
  int v11; // r0
  float v12; // s2
  float v13; // s4
  int v14; // r0
  int (__fastcall *v15)(int, int (***)()); // r2
  int v16; // r0
  float v17; // s2
  float v18; // s4
  int v19; // r0
  int (__fastcall *v20)(int, int (***)()); // r2
  int v21; // r0
  float v22; // s18
  float v23; // s20
  float v24; // s22
  int v25; // r0
  int (__fastcall *v26)(int, int (***)()); // r2
  int v27; // r0
  __n128 result; // q0
  float v29; // s4
  int (**v30)(); // [sp+0h] [bp-68h] BYREF
  const char *v31; // [sp+4h] [bp-64h]
  _DWORD v32[3]; // [sp+8h] [bp-60h] BYREF
  float v33; // [sp+14h] [bp-54h]
  float v34; // [sp+24h] [bp-44h]
  float v35; // [sp+34h] [bp-34h]

  v2 = *(int **)(a1 + 6300);
  v1 = (float *)(a1 + 6300);
  v3 = *v2;
  v4 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v2 + 84);
  v32[0] = &sead__SafeStringBase__vtable;
  v32[1] = "hand_r_01";
  v5 = v4(v3, v32);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, v5, v32);
  v6 = v33;
  v7 = v34;
  v8 = v35;
  v9 = **(_DWORD **)v1;
  v10 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v9 + 84);
  v30 = &sead__SafeStringBase__vtable;
  v31 = "hand_l_01";
  v11 = v10(v9, &v30);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, v11, v32);
  v12 = (float)(v7 + v34) * 0.5;
  v13 = (float)(v8 + v35) * 0.5;
  v1[7] = (float)(v6 + v33) * 0.5;
  v1[8] = v12;
  v1[9] = v13;
  v14 = **(_DWORD **)v1;
  v15 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v14 + 84);
  v30 = &sead__SafeStringBase__vtable;
  v31 = "tail_01";
  v16 = v15(v14, &v30);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, v16, v32);
  v17 = (float)(v34 + v1[8]) * 0.5;
  v18 = (float)(v35 + v1[9]) * 0.5;
  v1[7] = (float)(v33 + v1[7]) * 0.5;
  v1[8] = v17;
  v1[9] = v18;
  v19 = **(_DWORD **)v1;
  v20 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v19 + 84);
  v30 = &sead__SafeStringBase__vtable;
  v31 = (const char *)&unk_60ABF3B9;
  v21 = v20(v19, &v30);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, v21, v32);
  v22 = v33;
  v23 = v34;
  v24 = v35;
  v25 = **(_DWORD **)v1;
  v26 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v25 + 84);
  v30 = &sead__SafeStringBase__vtable;
  v31 = "head";
  v27 = v26(v25, &v30);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, v27, v32);
  result.n128_f32[0] = (float)(v22 + v33) * 0.5;
  result.n128_f32[2] = (float)(v23 + v34) * 0.5;
  v29 = (float)(v24 + v35) * 0.5;
  v1[10] = result.n128_f32[0];
  v1[11] = result.n128_f32[2];
  v1[12] = v29;
  return result;
}
