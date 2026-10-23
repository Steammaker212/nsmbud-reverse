/* sub_6062E40C
 * address: 0x6062E40C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062E40C(int a1)
{
  int result; // r0
  int v3; // r5
  float v4; // r1
  const char *v5; // r1
  float v6; // r1
  int v7; // r0
  Vec3 v8; // [sp+0h] [bp-30h] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  result = FIELD_U8(a1, 19);
  if ( !result )
  {
    if ( !FIELD_U8(a1, 6264) )
    {
      v3 = Global_BasicSoundActor2;
      v4 = FIELD_F32(a1, 112);
      if ( FIELD_S32(a1, 6240) < 3 )
      {
        v8.x = FIELD_F32(a1, 108);
        v8.y = v4;
        mapPositionToScreen(&out, &v8);
        v5 = "SE_BOSS_KOOPA_FIRE_DISAPP2";
      }
      else
      {
        v8.x = FIELD_F32(a1, 108);
        v8.y = v4;
        mapPositionToScreen(&out, &v8);
        v5 = "SE_BOSS_KOOPA_L_FIRE_DISAPP2";
      }
      BasicSoundActor2_play(v3, v5, &out.x, 0);
      v6 = FIELD_F32(a1, 112);
      v8.x = FIELD_F32(a1, 108);
      v8.y = v6;
      v8.z = 4500.0;
      if ( FIELD_S32(a1, 6240) >= 3 )
        v7 = 959;
      else
        v7 = 957;
      EffectData_create(v7, &v8, 0, a1 + 144);
    }
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
