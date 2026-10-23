/* skl_root_ref_36B434
 * address: 0x6036B434   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_36B434(int a1)
{
  int v2; // r5
  int (__fastcall *v3)(int, Vec3 *); // r2
  void (__fastcall *v4)(int, int, _BYTE *); // r6
  int v5; // r0
  Vec3 v7; // [sp+4h] [bp-4Ch] BYREF
  _BYTE v8[12]; // [sp+10h] [bp-40h] BYREF
  float v9; // [sp+1Ch] [bp-34h]
  float v10; // [sp+2Ch] [bp-24h]

  v2 = **(_DWORD **)(a1 + 6300);
  v3 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v2 + 84);
  v4 = *(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v2 + 108);
  LODWORD(v7.x) = &sead__SafeStringBase__vtable;
  LODWORD(v7.y) = "skl_root";
  v5 = v3(v2, &v7);
  v4(v2, v5, v8);
  v7.x = v9;
  v7.y = v10;
  v7.z = sub_600024C4(a1);
  return EffectData_create(866, &v7, 0, 0);
}
