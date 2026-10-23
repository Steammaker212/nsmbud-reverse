/* SE_BOSS_KOOPAHAND_APPEAR_ref_2
 * address: 0x60686968   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_KOOPAHAND_APPEAR_ref_2(int a1)
{
  int v2; // r5
  float v3; // r0
  Vec2 v5; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  FIELD_U32(a1, 144) = 1090519040;
  FIELD_U32(a1, 148) = 1090519040;
  FIELD_U32(a1, 152) = 1090519040;
  FIELD_U8(a1, 7596) = 0;
  PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, FIELD_U32(a1, 7608) + 6644);
  PlayerLookTargetList_add(PlayerLookTargetList_instance, a1 + 7688);
  v2 = Global_BasicSoundActor2;
  v3 = FIELD_F32(a1, 7628);
  position.x = FIELD_F32(a1, 7624);
  position.y = v3;
  mapPositionToScreen(&v5, &position);
  return BasicSoundActor2_play(v2, "SE_BOSS_KOOPAHAND_APPEAR", &v5.x, 0);
}
