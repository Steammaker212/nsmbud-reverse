/* ef_firepillar_ref
 * address: 0x6070C688   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall ef_firepillar_ref(int a1)
{
  float *v1; // r4
  int *v2; // t1
  int v3; // r0
  int (__fastcall *v4)(int, _DWORD *); // r2
  int v5; // r0
  float v6; // r0
  float result; // s0
  _DWORD v8[7]; // [sp+0h] [bp-38h] BYREF
  _DWORD *v9; // [sp+1Ch] [bp-1Ch]

  v2 = *(int **)(a1 + 6300);
  v1 = (float *)(a1 + 6300);
  v3 = *v2;
  v4 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v2 + 84);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "ef_firepillar";
  v5 = v4(v3, v8);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, v5, v8);
  v1[178] = *(float *)&v8[3];
  v6 = *(float *)&v9;
  *((_DWORD *)v1 + 179) = v9;
  v1[180] = 4500.0;
  result = v6 - *(v1 - 1547);
  v1[2] = result;
  return result;
}
