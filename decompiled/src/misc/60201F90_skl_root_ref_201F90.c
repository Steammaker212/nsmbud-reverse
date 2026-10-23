/* skl_root_ref_201F90
 * address: 0x60201F90   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_201F90(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, _DWORD *); // r2
  int v4; // r0
  _DWORD v6[16]; // [sp+0h] [bp-40h] BYREF

  FIELD_U32(a1, 120) = 0;
  v2 = **(_DWORD **)(a1 + 372);
  v3 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v2 + 84);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "skl_root";
  v4 = v3(v2, v6);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 372) + 108))(**(_DWORD **)(a1 + 372), v4, v6);
  return sub_602372C0(a1 + 380, 906, v6, 1);
}
