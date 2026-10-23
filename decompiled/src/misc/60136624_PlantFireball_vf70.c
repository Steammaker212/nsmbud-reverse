/* PlantFireball_vf70
 * address: 0x60136624   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlantFireball_vf70(int a1)
{
  float v2; // r1
  int v3; // r5
  float v4; // r2
  Vec2 v6; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&v6, &position);
  BasicSoundActor2_play(v3, "SE_OBJ_CMN_SPLASH_LAVA", &v6.x, 0);
  v4 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  TileMgr_splashRelated(TileMgr_instance, &position, 18);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 296))(a1);
  FIELD_U8(a1, 6240) = 1;
  return 6240;
}
