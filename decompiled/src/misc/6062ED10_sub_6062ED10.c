/* sub_6062ED10
 * address: 0x6062ED10   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062ED10(int a1)
{
  int result; // r0
  float v3; // r1
  int v4; // r5
  float v5; // r1
  const char *v6; // r1
  Vec3 v7; // [sp+0h] [bp-30h] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  result = FIELD_U8(dword_60CC6D8C, 17);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    v3 = FIELD_F32(a1, 112);
    v7.x = FIELD_F32(a1, 108);
    v7.y = v3;
    v7.z = 4500.0;
    EffectData_create(1168, &v7, 0, 0);
    v4 = Global_BasicSoundActor2;
    v5 = FIELD_F32(a1, 112);
    if ( FIELD_S32(a1, 6240) < 3 )
    {
      position.x = FIELD_F32(a1, 108);
      position.y = v5;
      mapPositionToScreen(&out, &position);
      v6 = "SE_BOSS_KOOPA_FIRE_DISAPP2";
    }
    else
    {
      position.x = FIELD_F32(a1, 108);
      position.y = v5;
      mapPositionToScreen(&out, &position);
      v6 = "SE_BOSS_KOOPA_L_FIRE_DISAPP2";
    }
    return BasicSoundActor2_play(v4, v6, &out.x, 0);
  }
  return result;
}
