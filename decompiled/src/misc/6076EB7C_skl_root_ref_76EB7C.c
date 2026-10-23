/* skl_root_ref_76EB7C
 * address: 0x6076EB7C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall skl_root_ref_76EB7C(int a1)
{
  signed int result; // r0
  int v3; // r0
  _BOOL4 v4; // r0
  bool v5; // zf
  unsigned int v6; // r5
  int v7; // r0
  _DWORD v8[2]; // [sp+Ch] [bp-24h] BYREF
  Vec3 v9[2]; // [sp+14h] [bp-1Ch] BYREF

  result = FIELD_U32(a1, 7004);
  if ( result != 5 )
  {
    v3 = FIELD_U32(a1, 648);
    v8[0] = &sead__SafeStringBase__vtable;
    v8[1] = "skl_root";
    sub_60793F04(FIELD_U32(v3, 4), v9, v8);
    v4 = sub_6075EE0C(a1);
    v5 = v4;
    if ( v4 )
      v5 = FIELD_U32(a1, 1320) == 9;
    if ( v5 )
    {
      sub_60793F40(*(_DWORD *)(FIELD_U32(a1, 648) + 4), v9, 0);
      v9[0].y = v9[0].y + 3.0;
    }
    v9[0].z = sub_600024C4(a1);
    v6 = FIELD_S8(a1, 84);
    v7 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1236))(a1);
    return sub_60236EC4(v6, (EffectWrapper *)(a1 + 10144), v7, v9, 0, 0);
  }
  return result;
}
