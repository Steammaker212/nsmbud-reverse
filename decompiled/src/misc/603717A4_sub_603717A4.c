/* sub_603717A4
 * address: 0x603717A4   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603717A4(int a1, int a2)
{
  int v4; // r6
  int (__fastcall *v5)(int, _DWORD *); // r2
  void (__fastcall *v6)(int, int, __int64 *); // r7
  int v7; // r0
  _DWORD v9[2]; // [sp+0h] [bp-50h] BYREF
  __int64 v10[9]; // [sp+8h] [bp-48h] BYREF

  if ( a2 == 2
    && FIELD_U32(a1, 11960) == 1
    && FIELD_U32(a1, 11788) == 1
    && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1) == 1 )
  {
    v4 = **(_DWORD **)(a1 + 6300);
    v5 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v4 + 84);
    v6 = *(void (__fastcall **)(int, int, __int64 *))(*(_DWORD *)v4 + 108);
    v9[0] = &sead__SafeStringBase__vtable;
    v9[1] = &unk_60AC54B2;
    v7 = v5(v4, v9);
    v6(v4, v7, v10);
    sub_602372C0(a1 + 11972, 1151, v10, 1);
  }
  return sub_60373664(a1, a2);
}
