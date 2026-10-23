/* JointRoot_ref_131874
 * address: 0x60131874   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall JointRoot_ref_131874(int a1)
{
  _DWORD **v1; // r4
  int *v2; // t1
  int v3; // r0
  int (__fastcall *v4)(int, _DWORD *); // r2
  int v5; // r0
  _DWORD v7[12]; // [sp+4h] [bp-44h] BYREF
  Vec3 v8; // [sp+34h] [bp-14h] BYREF

  v2 = *(int **)(a1 + 6104);
  v1 = (_DWORD **)(a1 + 6104);
  v3 = *v2;
  v4 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v2 + 84);
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "JointRoot";
  v5 = v4(v3, v7);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)**v1 + 108))(**v1, v5, v7);
  LODWORD(v8.x) = v7[3];
  LODWORD(v8.y) = v7[7];
  LODWORD(v8.z) = v7[11];
  return EffectData_create(1164, &v8, 0, (int)(v1 - 1490));
}
