/* wing_root_ref_3657C8
 * address: 0x603657C8   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall wing_root_ref_3657C8(int a1, int a2, int a3)
{
  int *v6; // r4
  int v7; // r1
  int v8; // r7
  int (__fastcall *v9)(int, _DWORD *); // r2
  int v10; // r0
  Vec3 v12; // [sp+4h] [bp-54h] BYREF
  _DWORD v13[18]; // [sp+10h] [bp-48h] BYREF

  v6 = (int *)(a1 + 6352);
  if ( FIELD_U32(a1, 6352) == 2 )
  {
    FIELD_U32(a1, 7524) = 2;
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 68))(a1, -1);
    v7 = *v6;
    if ( *v6 == 2 )
    {
      v8 = **(_DWORD **)(a1 + 7504);
      v9 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v8 + 84);
      v13[0] = &sead__SafeStringBase__vtable;
      v13[1] = "wing_root";
      v10 = v9(v8, v13);
      (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v8 + 108))(v8, v10, v13);
      LODWORD(v12.x) = v13[3];
      LODWORD(v12.y) = v13[7];
      v12.z = 4500.0;
      EffectData_create(302, &v12, 0, 0);
      v7 = *v6;
    }
    if ( v7 != 1 )
    {
      FIELD_U32(a1, 6356) = v7;
      *v6 = 1;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
    }
  }
  return CarryableEnemy__collisionIceball(a1, a2, a3);
}
