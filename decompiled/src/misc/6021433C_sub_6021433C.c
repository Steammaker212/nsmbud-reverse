/* sub_6021433C
 * address: 0x6021433C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021433C(int result)
{
  bool v1; // zf
  float v2; // r1
  float v3; // r2
  _DWORD v4[2]; // [sp+8h] [bp-20h] BYREF
  Vec3 v5[2]; // [sp+10h] [bp-18h] BYREF

  v1 = FIELD_U8(result, 477) == 0;
  if ( FIELD_U8(result, 477) )
    v1 = FIELD_U8(result, 424) == 1;
  if ( v1 )
  {
    v2 = FIELD_F32(result, 80);
    v3 = FIELD_F32(result, 84);
    v5[0].z = FIELD_F32(result, 88);
    v5[0].y = v3;
    v5[0].x = v2;
    EffectData_create(1135, v5, 0, 0);
    result = sub_601E4F7C(dword_60C8B13C, 145);
    if ( result == 1 )
    {
      v4[0] = &sead__SafeStringBase__vtable;
      v4[1] = "K276";
      sub_601A02B0(dword_60C89E00, v5, 6, 0, (int)v4);
      return sub_601E4C88((_DWORD *)dword_60C8B13C, 145, v5);
    }
  }
  return result;
}
