/* skl_root_ref_2CE7FC
 * address: 0x602CE7FC   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_2CE7FC(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, _DWORD *); // r2
  int v4; // r0
  _DWORD v6[12]; // [sp+4h] [bp-44h] BYREF
  Vec3 v7; // [sp+34h] [bp-14h] BYREF

  v2 = **(_DWORD **)(a1 + 4);
  v3 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v2 + 84);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "skl_root";
  v4 = v3(v2, v6);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 4) + 108))(**(_DWORD **)(a1 + 4), v4, v6);
  LODWORD(v7.x) = v6[3];
  LODWORD(v7.y) = v6[7];
  LODWORD(v7.z) = v6[11];
  return EffectData_create(1170, &v7, 0, 0);
}
