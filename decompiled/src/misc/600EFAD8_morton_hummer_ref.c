/* morton_hummer_ref
 * address: 0x600EFAD8   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall morton_hummer_ref(int a1)
{
  float *v1; // r4
  int *v2; // t1
  int v3; // r0
  int (__fastcall *v4)(int, _DWORD *); // r2
  int v5; // r5
  __n128 result; // q0
  _BYTE v7[12]; // [sp+4h] [bp-BCh] BYREF
  float v8[3]; // [sp+10h] [bp-B0h] BYREF
  float v9; // [sp+1Ch] [bp-A4h]
  float v10; // [sp+20h] [bp-A0h]
  float v11; // [sp+24h] [bp-9Ch]
  float v12; // [sp+28h] [bp-98h]
  float v13; // [sp+2Ch] [bp-94h]
  float v14; // [sp+30h] [bp-90h]
  float v15; // [sp+34h] [bp-8Ch]
  float v16; // [sp+38h] [bp-88h]
  float v17; // [sp+3Ch] [bp-84h]
  _BYTE v18[12]; // [sp+40h] [bp-80h] BYREF
  float v19; // [sp+4Ch] [bp-74h]
  float v20; // [sp+5Ch] [bp-64h]
  _DWORD v21[20]; // [sp+70h] [bp-50h] BYREF

  v2 = *(int **)(a1 + 7096);
  v1 = (float *)(a1 + 7096);
  v3 = *v2;
  v4 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v2 + 84);
  v21[0] = &sead__SafeStringBase__vtable;
  v21[1] = "morton_hummer";
  v5 = v4(v3, v21);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, v5, v21);
  (*(void (__fastcall **)(_DWORD, int, float *, _BYTE *))(***(_DWORD ***)v1 + 100))(**(_DWORD **)v1, v5, v8, v7);
  v9 = v9 + (float)((float)((float)(v8[1] * 0.0) - (float)(v8[0] * 8.0)) - (float)(v8[2] * 20.0));
  v13 = v13 + (float)((float)((float)(v11 * 0.0) - (float)(v10 * 8.0)) - (float)(v12 * 20.0));
  v17 = v17 + (float)((float)((float)(v15 * 0.0) - (float)(v14 * 8.0)) - (float)(v16 * 20.0));
  (*(void (__fastcall **)(_DWORD, int, float *, _BYTE *))(***(_DWORD ***)v1 + 96))(**(_DWORD **)v1, v5, v8, v7);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)v1 + 56))(**(_DWORD **)v1);
  (*(void (__fastcall **)(_DWORD, int, _BYTE *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, v5, v18);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)v1 + 104))(**(_DWORD **)v1, v5, v21);
  sub_60421880(*(_DWORD *)v1);
  result.n128_f32[0] = v19 - *(v1 - 1747);
  result.n128_f32[2] = v20 - *(v1 - 1746);
  v1[285] = result.n128_f32[0];
  v1[286] = result.n128_f32[2];
  return result;
}
