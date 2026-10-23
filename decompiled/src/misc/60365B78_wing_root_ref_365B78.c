/* wing_root_ref_365B78
 * address: 0x60365B78   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall wing_root_ref_365B78(int a1)
{
  int v2; // r5
  int (__fastcall *v3)(int, _DWORD *); // r2
  int v4; // r0
  Vec3 v6; // [sp+4h] [bp-4Ch] BYREF
  _DWORD v7[16]; // [sp+10h] [bp-40h] BYREF

  if ( FIELD_U32(a1, 6352) == 2 )
  {
    v2 = **(_DWORD **)(a1 + 7504);
    v3 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v2 + 84);
    v7[0] = &sead__SafeStringBase__vtable;
    v7[1] = "wing_root";
    v4 = v3(v2, v7);
    (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v2 + 108))(v2, v4, v7);
    LODWORD(v6.x) = v7[3];
    LODWORD(v6.y) = v7[7];
    v6.z = 4500.0;
    EffectData_create(302, &v6, 0, 0);
  }
  return KoopaTroopa_vf26(a1);
}
