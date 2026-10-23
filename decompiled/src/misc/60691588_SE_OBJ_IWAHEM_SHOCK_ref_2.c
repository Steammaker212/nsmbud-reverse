/* SE_OBJ_IWAHEM_SHOCK_ref_2
 * address: 0x60691588   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_IWAHEM_SHOCK_ref_2(int a1)
{
  int v1; // r4
  float v2; // r1
  float v3; // r0
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  v1 = Global_BasicSoundActor2;
  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  position.x = v2;
  position.y = v3;
  mapPositionToScreen(&out, &position);
  BasicSoundActor2_play(v1, "SE_OBJ_IWAHEM_SHOCK", &out.x, 0);
  return AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 0, 3, 0, 0);
}
