/* SE_BOSS_WOOGAN_YOKAN_ref
 * address: 0x6012F374   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_WOOGAN_YOKAN_ref(int a1)
{
  float *v1; // r4
  float v2; // t1
  float v3; // r1
  int v4; // r5
  float v5; // r0
  Vec2 v7; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  FIELD_U32(a1, 6216) = 60;
  v2 = FIELD_F32(a1, 6224);
  v1 = (float *)(a1 + 6224);
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  TileMgr_splashRelated(TileMgr_instance, &position, 31);
  v3 = *v1;
  position.x = *(v1 - 1529);
  position.y = v3;
  TileMgr_splashRelated(TileMgr_instance, &position, 14);
  v4 = Global_BasicSoundActor1;
  v5 = *(v1 - 1528);
  position.x = *(v1 - 1529);
  position.y = v5;
  mapPositionToScreen(&v7, &position);
  BasicSoundActor1_playSound(v4, "SE_BOSS_WOOGAN_YOKAN", (int)&v7, 0);
  *(v1 - 1525) = 1.0;
  *(v1 - 1531) = -0.03;
  return -6124;
}
