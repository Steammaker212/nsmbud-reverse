/* SE_BOSS_LEMMY_ref_6
 * address: 0x600E5B1C   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_LEMMY_ref_6(int result)
{
  _DWORD *v1; // r6
  int v2; // r4
  float v3; // r1
  float v4; // r0
  const char *v5; // r1
  float v6; // r0
  Vec2 v7; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v1 = (_DWORD *)(result + 6548);
  if ( !FIELD_U32(result, 6548) )
  {
    v2 = Global_BasicSoundActor2;
    v3 = FIELD_F32(result, 108);
    if ( FIELD_F32(result, 6576) >= 4.25 )
    {
      v6 = FIELD_F32(result, 112);
      position.x = v3;
      position.y = v6;
      mapPositionToScreen(&v7, &position);
      v5 = "SE_BOSS_LEMMY_BOMB_HIT_PLY";
    }
    else
    {
      v4 = FIELD_F32(result, 112);
      position.x = v3;
      position.y = v4;
      mapPositionToScreen(&v7, &position);
      v5 = "SE_BOSS_LEMMY_BALL_HIT_PLY";
    }
    BasicSoundActor2_play(v2, v5, &v7.x, 0);
    *v1 = 24;
    return 24;
  }
  return result;
}
