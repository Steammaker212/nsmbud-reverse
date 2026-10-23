/* sub_60213B9C
 * address: 0x60213B9C   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60213B9C(int a1)
{
  float v2; // r1
  float v3; // r1
  Vec3 v5; // [sp+0h] [bp-20h] BYREF

  FIELD_U8(a1, 424) = 0;
  if ( FIELD_U8(a1, 477) )
  {
    FIELD_U8(a1, 425) = 0;
    v5.x = FIELD_F32(a1, 80);
    v2 = FIELD_F32(a1, 88);
    v5.y = FIELD_F32(a1, 84);
    v5.z = v2;
    EffectData_create(1135, &v5, 0, 0);
    sub_601E4C88((_DWORD *)dword_60C8B13C, 145, (_DWORD *)(a1 + 80));
  }
  else
  {
    FIELD_U8(a1, 425) = 1;
    v5.x = FIELD_F32(a1, 80);
    v3 = FIELD_F32(a1, 88);
    v5.y = FIELD_F32(a1, 84);
    v5.z = v3;
    EffectData_create(1135, &v5, 0, 0);
    sub_601E4C88((_DWORD *)dword_60C8B13C, 145, (_DWORD *)(a1 + 80));
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
