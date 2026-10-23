/* sub_60213750
 * address: 0x60213750   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60213750(int a1)
{
  float v2; // r1
  float v3; // r2
  _DWORD v5[2]; // [sp+8h] [bp-28h] BYREF
  Vec3 v6; // [sp+10h] [bp-20h] BYREF

  FIELD_U8(a1, 424) = 0;
  FIELD_F32(a1, 84) = FIELD_F32(a1, 392) + 80.0;
  if ( FIELD_U8(a1, 477) )
  {
    FIELD_U8(a1, 425) = 0;
  }
  else
  {
    FIELD_U8(a1, 425) = 1;
    v2 = FIELD_F32(a1, 84);
    v3 = FIELD_F32(a1, 88);
    v6.x = FIELD_F32(a1, 80);
    v6.y = v2;
    v6.z = v3;
    EffectData_create(1135, &v6, 0, 0);
    if ( sub_601E4F7C(dword_60C8B13C, 199) == 1 )
    {
      v5[0] = &sead__SafeStringBase__vtable;
      v5[1] = "K276";
      sub_601A02B0(dword_60C89E00, &v6, 6, 0, (int)v5);
      sub_601E4C88((_DWORD *)dword_60C8B13C, 199, &v6);
    }
    FIELD_U32(a1, 452) = 25;
    FIELD_U32(a1, 456) = 1065353216;
    FIELD_U32(a1, 460) = 1032805417;
    FIELD_U32(a1, 128) = 0;
    FIELD_U32(a1, 132) = 0;
    FIELD_U32(a1, 136) = 0;
    FIELD_U32(a1, 436) = 0;
    FIELD_U32(a1, 440) = 0;
    FIELD_U32(a1, 444) = 0;
  }
  FIELD_U32(a1, 464) = 210;
  return 210;
}
