/* SE_OBJ_CMN_SPLASH_ref_6E6F14
 * address: 0x606E6F14   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_ref_6E6F14(int a1, float *a2)
{
  float v3; // r2
  int v4; // r5
  float v5; // r1
  Vec2 v7; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v3 = a2[1];
  position.x = *a2;
  position.y = v3;
  TileMgr_splashRelated(TileMgr_instance, &position, 6);
  v4 = Global_BasicSoundActor1;
  v5 = a2[1];
  position.x = *a2;
  position.y = v5;
  mapPositionToScreen(&v7, &position);
  return BasicSoundActor1_playSound(v4, "SE_OBJ_CMN_SPLASH", (int)&v7, 0);
}
