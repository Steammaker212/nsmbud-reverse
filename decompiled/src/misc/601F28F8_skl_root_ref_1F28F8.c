/* skl_root_ref_1F28F8
 * address: 0x601F28F8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_1F28F8(int a1, int a2)
{
  int v4; // r0
  int (__fastcall *v5)(int, _DWORD *); // r2
  int v6; // r0
  _DWORD v8[6]; // [sp+0h] [bp-18h] BYREF

  v4 = **(_DWORD **)(a1 + 304);
  v5 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v4 + 84);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "skl_root";
  v6 = v5(v4, v8);
  return (*(int (__fastcall **)(_DWORD, int, int))(***(_DWORD ***)(a1 + 304) + 108))(**(_DWORD **)(a1 + 304), v6, a2);
}
