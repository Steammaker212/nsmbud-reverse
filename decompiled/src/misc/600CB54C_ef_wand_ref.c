/* ef_wand_ref
 * address: 0x600CB54C   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ef_wand_ref(int a1)
{
  int **v1; // r4
  int v2; // r0
  int (__fastcall *v3)(int, _DWORD *); // r2
  int v4; // r0
  _DWORD v6[16]; // [sp+0h] [bp-40h] BYREF

  v1 = (int **)(a1 + 6300);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  v2 = **v1;
  v3 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v2 + 84);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "ef_wand";
  v4 = v3(v2, v6);
  (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v1 + 108))(**v1, v4, v6);
  return sub_602372C0(v1 + 2, 801, v6, 1);
}
