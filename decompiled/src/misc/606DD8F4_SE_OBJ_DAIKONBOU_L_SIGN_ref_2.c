/* SE_OBJ_DAIKONBOU_L_SIGN_ref_2
 * address: 0x606DD8F4   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_DAIKONBOU_L_SIGN_ref_2(int a1)
{
  float v2; // r1
  int v3; // r5
  int result; // r0
  Vec2 v5; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&v5, &position);
  result = BasicSoundActor2_play(v3, "SE_OBJ_DAIKONBOU_L_SIGN", &v5.x, 0);
  FIELD_U32(a1, 88) = 0;
  return result;
}
