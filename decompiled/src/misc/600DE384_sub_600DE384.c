/* sub_600DE384
 * address: 0x600DE384   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DE384(int a1)
{
  int result; // r0
  float *v3; // r4
  int *v4; // t1
  int v5; // r0
  int (__fastcall *v6)(int, _DWORD *); // r2
  int v7; // r0
  float v8; // s2
  int v9; // r1
  _DWORD v10[14]; // [sp+0h] [bp-38h] BYREF

  result = FIELD_U32(a1, 320);
  if ( !result )
  {
    v4 = *(int **)(a1 + 7096);
    v3 = (float *)(a1 + 7096);
    v5 = *v4;
    v6 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v4 + 84);
    v10[0] = &sead__SafeStringBase__vtable;
    v10[1] = "spine";
    v7 = v6(v5, v10);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)v3 + 108))(**(_DWORD **)v3, v7, v10);
    v8 = (float)(*(float *)&v10[7] + *(float *)&dword_60C84B7C) - *(v3 - 1746);
    *(v3 - 1698) = (float)(*(float *)&v10[3] + *(float *)&dword_60C84B78) - *(v3 - 1747);
    *(v3 - 1697) = v8;
    v9 = dword_60C84B84;
    *((_DWORD *)v3 - 1696) = dword_60C84B80;
    *((_DWORD *)v3 - 1695) = v9;
    return -6780;
  }
  return result;
}
