/* SE_OBJ_CMN_BALLOON_BREAK_ref_5D47E0
 * address: 0x605D47E0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_BALLOON_BREAK_ref_5D47E0(Vec3 *a1, int a2)
{
  int v4; // r4
  float y; // r1
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  EffectData_create(443, a1 + 9, 0, (int)&a1[12]);
  v4 = Global_BasicSoundActor2;
  y = a1[9].y;
  position.x = a1[9].x;
  position.y = y;
  mapPositionToScreen(&out, &position);
  if ( a2 == 1 )
    return sub_60813BDC(v4, "SE_OBJ_CMN_BALLOON_BREAK", &out, 1, 0);
  else
    return BasicSoundActor2_play(v4, "SE_OBJ_CMN_BALLOON_BREAK", &out.x, 0);
}
