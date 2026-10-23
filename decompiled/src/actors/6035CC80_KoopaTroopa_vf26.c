/* KoopaTroopa_vf26
 * address: 0x6035CC80   size: 236   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KoopaTroopa_vf26(int a1)
{
  int v2; // r5
  int (__fastcall *v3)(int, _DWORD *); // r2
  int v4; // r0
  int v5; // r5
  float v6; // r1
  float v7; // r2
  _DWORD v9[12]; // [sp+0h] [bp-50h] BYREF
  Vec3 v10; // [sp+30h] [bp-20h] BYREF

  if ( FIELD_U32(a1, 6352) )
  {
    v2 = **(_DWORD **)(a1 + 6820);
    v3 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v2 + 84);
    v9[0] = &sead__SafeStringBase__vtable;
    v9[1] = "skl_root";
    v4 = v3(v2, v9);
    (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v2 + 108))(v2, v4, v9);
    v5 = 300;
    LODWORD(v10.x) = v9[3];
    LODWORD(v10.y) = v9[7];
    LODWORD(v10.z) = v9[11];
    if ( FIELD_U32(a1, 7476) == 1 )
      v5 = 509;
  }
  else
  {
    v5 = 301;
    v6 = FIELD_F32(a1, 112);
    v7 = FIELD_F32(a1, 116);
    v10.x = FIELD_F32(a1, 108);
    v10.y = v6;
    v10.z = v7;
    if ( FIELD_U32(a1, 7476) == 1 )
      v5 = 510;
  }
  v10.z = sub_600024C4(a1);
  return EffectData_create(v5, &v10, 0, 0);
}
