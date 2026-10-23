/* BoomBoomBase__vf46C
 * address: 0x600523C4   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
signed int __fastcall BoomBoomBase__vf46C(int a1)
{
  EffectData *v2; // r4
  signed int result; // r0
  int *v4; // t1
  int v5; // r0
  int (__fastcall *v6)(int, _DWORD *); // r2
  int v7; // r0
  Vec3 v8; // [sp+4h] [bp-4Ch] BYREF
  _DWORD v9[16]; // [sp+10h] [bp-40h] BYREF

  v2 = (EffectData *)(a1 + 7460);
  result = sub_60235E50(a1 + 7460);
  if ( result == 1 )
  {
    v4 = *(int **)(a1 + 7204);
    v5 = *v4;
    v6 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v4 + 84);
    v9[0] = &sead__SafeStringBase__vtable;
    v9[1] = "face_1";
    v7 = v6(v5, v9);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 7204) + 108))(**(_DWORD **)(a1 + 7204), v7, v9);
    LODWORD(v8.x) = v9[3];
    LODWORD(v8.y) = v9[7];
    v8.z = 4500.0;
    return EffectData_update(v2, &v8, 0, 0);
  }
  return result;
}
