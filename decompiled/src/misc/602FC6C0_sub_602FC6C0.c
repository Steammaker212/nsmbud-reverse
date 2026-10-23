/* sub_602FC6C0
 * address: 0x602FC6C0   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FC6C0(int a1)
{
  _DWORD **v1; // r4
  int *v2; // t1
  int v3; // r0
  int (__fastcall *v4)(int, _DWORD *); // r2
  int v5; // r0
  Vec3 v7; // [sp+4h] [bp-44h] BYREF
  _DWORD v8[14]; // [sp+10h] [bp-38h] BYREF

  v2 = *(int **)(a1 + 6300);
  v1 = (_DWORD **)(a1 + 6300);
  v3 = *v2;
  v4 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v2 + 84);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "head";
  v5 = v4(v3, v8);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)**v1 + 108))(**v1, v5, v8);
  LODWORD(v7.x) = v8[3];
  LODWORD(v7.y) = v8[7];
  LODWORD(v7.z) = v8[11];
  return EffectData_create(361, &v7, 0, 0);
}
