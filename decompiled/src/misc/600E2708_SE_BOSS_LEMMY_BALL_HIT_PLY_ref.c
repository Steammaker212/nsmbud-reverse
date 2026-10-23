/* SE_BOSS_LEMMY_BALL_HIT_PLY_ref
 * address: 0x600E2708   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_LEMMY_BALL_HIT_PLY_ref(int result)
{
  _DWORD *v1; // r6
  int v2; // r4
  float v3; // r1
  float v4; // r0
  Vec2 v5; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v1 = (_DWORD *)(result + 6548);
  if ( !FIELD_U32(result, 6548) )
  {
    v2 = Global_BasicSoundActor2;
    v3 = FIELD_F32(result, 108);
    v4 = FIELD_F32(result, 112);
    position.x = v3;
    position.y = v4;
    mapPositionToScreen(&v5, &position);
    BasicSoundActor2_play(v2, "SE_BOSS_LEMMY_BALL_HIT_PLY", &v5.x, 0);
    *v1 = 24;
    return 24;
  }
  return result;
}
