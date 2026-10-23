/* sub_602138C4
 * address: 0x602138C4   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602138C4(int a1)
{
  _DWORD *v2; // r6
  float v3; // r0
  float v4; // r0
  int result; // r0
  _DWORD v6[2]; // [sp+8h] [bp-30h] BYREF
  Vec3 v7[3]; // [sp+10h] [bp-28h] BYREF

  FIELD_U16(a1, 424) = 257;
  if ( sub_601EABD0(dword_60C8B144) )
  {
    v2 = (_DWORD *)(a1 + 80);
    v3 = FIELD_F32(a1, 392) + 80.0;
    FIELD_F32(a1, 84) = v3;
  }
  else
  {
    v2 = (_DWORD *)(a1 + 80);
    v7[0].x = FIELD_F32(a1, 80);
    v4 = FIELD_F32(a1, 84);
    v7[0].z = FIELD_F32(a1, 88);
    v7[0].y = v4;
    EffectData_create(1135, v7, 0, 0);
    if ( sub_601E4F7C(dword_60C8B13C, 199) == 1 )
    {
      v6[0] = &sead__SafeStringBase__vtable;
      v6[1] = "K276";
      sub_601A02B0(dword_60C89E00, v7, 6, 0, (int)v6);
      sub_601E4C88((_DWORD *)dword_60C8B13C, 199, v7);
    }
    FIELD_U32(a1, 452) = 40;
    FIELD_U32(a1, 456) = 1065353216;
    FIELD_U32(a1, 460) = 1032805417;
    FIELD_U32(a1, 128) = 0;
    FIELD_U32(a1, 132) = 0;
    FIELD_U32(a1, 136) = 0;
    FIELD_U32(a1, 444) = 0;
    FIELD_U32(a1, 440) = 0;
    FIELD_U32(a1, 436) = 0;
    FIELD_U32(a1, 432) = 0;
    FIELD_U32(a1, 428) = 0;
    v3 = FIELD_F32(a1, 84);
  }
  FIELD_U32(a1, 400) = *v2;
  FIELD_F32(a1, 404) = v3;
  result = FIELD_U32(a1, 88);
  FIELD_U32(a1, 408) = result;
  return result;
}
