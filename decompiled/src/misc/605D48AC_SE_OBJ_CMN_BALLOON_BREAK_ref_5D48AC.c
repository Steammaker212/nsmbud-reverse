/* SE_OBJ_CMN_BALLOON_BREAK_ref_5D48AC
 * address: 0x605D48AC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_BALLOON_BREAK_ref_5D48AC(Vec3 *a1)
{
  float y; // r1
  int v3; // r5
  Vec2 v5; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  EffectData_create(443, a1 + 9, 0, (int)&a1[12]);
  y = FIELD_F32(a1 + (9) * 12, 0x4);
  v3 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1 + (9) * 12, 0x0);
  position.y = y;
  mapPositionToScreen(&v5, &position);
  return BasicSoundActor2_play(v3, "SE_OBJ_CMN_BALLOON_BREAK", &v5.x, 0);
}
