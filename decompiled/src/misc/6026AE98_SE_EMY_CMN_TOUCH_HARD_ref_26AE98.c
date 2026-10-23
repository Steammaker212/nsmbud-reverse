/* SE_EMY_CMN_TOUCH_HARD_ref_26AE98
 * address: 0x6026AE98   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_CMN_TOUCH_HARD_ref_26AE98(int a1, int a2)
{
  int result; // r0
  int v3; // r4
  float v4; // r1
  float v5; // r0
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  result = FIELD_U32(a2, 64);
  if ( result )
  {
    v3 = Global_BasicSoundActor1;
    v4 = FIELD_F32(result, 108);
    v5 = FIELD_F32(result, 112);
    position.x = v4;
    position.y = v5;
    mapPositionToScreen(&out, &position);
    return sub_60813810(v3, (int)"SE_EMY_CMN_TOUCH_HARD", (int)&out, 1, 0);
  }
  return result;
}
