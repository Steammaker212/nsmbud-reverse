/* sub_60174FBC
 * address: 0x60174FBC   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60174FBC(int a1)
{
  _DWORD *v2; // r6
  float v3; // r0
  float v4; // r0
  int result; // r0
  _DWORD v6[2]; // [sp+8h] [bp-30h] BYREF
  Vec3 v7[3]; // [sp+10h] [bp-28h] BYREF

  FIELD_U8(a1, 586) = 1;
  FIELD_U8(a1, 587) = 1;
  if ( sub_601EABD0(dword_60C8B144) )
  {
    v2 = (_DWORD *)(a1 + 80);
    v3 = FIELD_F32(a1, 496) + 80.0;
    FIELD_F32(a1, 84) = v3;
  }
  else
  {
    v2 = (_DWORD *)(a1 + 80);
    v7[0].x = FIELD_F32(a1, 80);
    v4 = FIELD_F32(a1, 84);
    v7[0].z = FIELD_F32(a1, 88);
    v7[0].y = v4;
    EffectData_create(1137, v7, 0, 0);
    if ( sub_601E4F7C(dword_60C8B13C, 199) == 1 )
    {
      v6[0] = &sead__SafeStringBase__vtable;
      v6[1] = "K276";
      sub_601A02B0(dword_60C89E00, v7, 6, 0, v6);
      sub_601E4C88(dword_60C8B13C, 199, v7, 1);
    }
    FIELD_U32(a1, 608) = 40;
    FIELD_U32(a1, 612) = 1065353216;
    FIELD_U32(a1, 616) = 1032805417;
    FIELD_U32(a1, 128) = 0;
    FIELD_U32(a1, 132) = 0;
    FIELD_U32(a1, 136) = 0;
    FIELD_U32(a1, 596) = 0;
    FIELD_U32(a1, 600) = 0;
    FIELD_U32(a1, 604) = 0;
    v3 = FIELD_F32(a1, 84);
  }
  FIELD_U32(a1, 588) = 0;
  FIELD_U32(a1, 592) = 0;
  FIELD_U32(a1, 504) = *v2;
  FIELD_F32(a1, 508) = v3;
  result = FIELD_U32(a1, 88);
  FIELD_U32(a1, 512) = result;
  return result;
}
