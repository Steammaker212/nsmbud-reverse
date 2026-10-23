/* SE_EMY_CMN_TOUCH_DISAPPEAR_ref_142D80
 * address: 0x60142D80   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_CMN_TOUCH_DISAPPEAR_ref_142D80(int a1)
{
  float v2; // r1
  int v3; // r5
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  SE_OBJ_PNGN_ICEBALL_DISAPP_ref(a1);
  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&out, &position);
  return sub_60813BDC(v3, "SE_EMY_CMN_TOUCH_DISAPPEAR", &out, 1, 0);
}
