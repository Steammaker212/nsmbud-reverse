/* skl_root_ref_1F2A28
 * address: 0x601F2A28   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall skl_root_ref_1F2A28(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, _DWORD *); // r2
  int v4; // r0
  int v6; // [sp+0h] [bp-48h] BYREF
  int v7; // [sp+4h] [bp-44h]
  int v8; // [sp+8h] [bp-40h]
  _DWORD v9[14]; // [sp+10h] [bp-38h] BYREF

  v8 = 0;
  v6 = 0;
  v7 = 0;
  v2 = **(_DWORD **)(a1 + 304);
  v3 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v2 + 84);
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "skl_root";
  v4 = v3(v2, v9);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 304) + 108))(**(_DWORD **)(a1 + 304), v4, v9);
  v6 = v9[3];
  v7 = v9[7];
  v8 = v9[11];
  return sub_60237208(a1 + 440, (int)&v6, 0, a1 + 544);
}
