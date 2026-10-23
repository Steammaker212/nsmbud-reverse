/* skl_root_ref_1F2968
 * address: 0x601F2968   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall skl_root_ref_1F2968(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, _DWORD *); // r2
  int v4; // r0
  Vec3 v6; // [sp+8h] [bp-48h] BYREF
  _DWORD v7[14]; // [sp+18h] [bp-38h] BYREF

  v6.z = 0.0;
  v6.y = 0.0;
  v6.x = 0.0;
  v2 = **(_DWORD **)(a1 + 304);
  v3 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v2 + 84);
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "skl_root";
  v4 = v3(v2, v7);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 304) + 108))(**(_DWORD **)(a1 + 304), v4, v7);
  LODWORD(v6.x) = v7[3];
  LODWORD(v6.y) = v7[7];
  LODWORD(v6.z) = v7[11];
  return EffectWrapper_update((EffectWrapper *)(a1 + 440), 897, &v6, 0, (Vec3 *)(a1 + 544));
}
