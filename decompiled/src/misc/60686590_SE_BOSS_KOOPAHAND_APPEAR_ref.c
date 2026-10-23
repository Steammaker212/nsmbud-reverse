/* SE_BOSS_KOOPAHAND_APPEAR_ref
 * address: 0x60686590   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_KOOPAHAND_APPEAR_ref(int a1)
{
  int v1; // r4
  float v2; // r1
  Vec2 v4; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  FIELD_U8(a1, 7596) = 0;
  FIELD_U32(a1, 144) = 1090519040;
  FIELD_U32(a1, 148) = 1090519040;
  FIELD_U32(a1, 152) = 1090519040;
  FIELD_U8(a1, 7658) = 1;
  v1 = Global_BasicSoundActor2;
  v2 = FIELD_F32(a1, 7628);
  position.x = FIELD_F32(a1, 7624);
  position.y = v2;
  mapPositionToScreen(&v4, &position);
  return BasicSoundActor2_play(v1, "SE_BOSS_KOOPAHAND_APPEAR", &v4.x, 0);
}
