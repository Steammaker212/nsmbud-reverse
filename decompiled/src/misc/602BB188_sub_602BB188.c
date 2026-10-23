/* sub_602BB188
 * address: 0x602BB188   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_602BB188(int a1)
{
  float *v1; // r4
  int *v2; // t1
  int v3; // r0
  int (__fastcall *v4)(int, _DWORD *); // r2
  int v5; // r0
  int v6; // r0
  int (__fastcall *v7)(int, int (***)()); // r2
  int v8; // r0
  int v9; // r0
  int (__fastcall *v10)(int, int (***)()); // r2
  int v11; // r0
  float result; // s0
  int (**v13)(); // [sp+0h] [bp-58h] BYREF
  const char *v14; // [sp+4h] [bp-54h]
  _DWORD v15[3]; // [sp+8h] [bp-50h] BYREF
  _DWORD *v16; // [sp+14h] [bp-44h]
  float v17; // [sp+24h] [bp-34h]

  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    v2 = *(int **)(a1 + 6300);
    v1 = (float *)(a1 + 6300);
    v3 = *v2;
    v4 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v2 + 84);
    v15[0] = &sead__SafeStringBase__vtable;
    v15[1] = "skl_root";
    v5 = v4(v3, v15);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, v5, v15);
    *((_DWORD *)v1 + 3) = v16;
    v1[4] = *(v1 - 1547);
    v1[5] = 4500.0;
    v6 = **(_DWORD **)v1;
    v7 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v6 + 84);
    v13 = &sead__SafeStringBase__vtable;
    v14 = "ankle_r1";
    v8 = v7(v6, &v13);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, v8, v15);
    *((_DWORD *)v1 + 6) = v16;
    v1[7] = v17 + -2.0;
    v1[8] = 4500.0;
    v9 = **(_DWORD **)v1;
    v10 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v9 + 84);
    v13 = &sead__SafeStringBase__vtable;
    v14 = "ankle_l1";
    v11 = v10(v9, &v13);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, v11, v15);
    *((_DWORD *)v1 + 9) = v16;
    result = v17 + -2.0;
    v1[10] = v17 + -2.0;
    v1[11] = 4500.0;
  }
  return result;
}
