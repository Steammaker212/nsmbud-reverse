/* SE_OBJ_DAIKONBOU_L_SIGN_ref
 * address: 0x605ADB00   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_DAIKONBOU_L_SIGN_ref(int a1)
{
  float v2; // r1
  int v3; // r5
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  sub_605AE9AC();
  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&out, &position);
  sub_60813BDC(v3, "SE_OBJ_DAIKONBOU_L_SIGN", &out, 1, 0);
  FIELD_U32(a1, 6832) = 110;
  FIELD_U32(a1, 6836) = 1;
  return 6836;
}
