/* SE_EMY_SHELL_CLOSE_ref
 * address: 0x60592348   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_SHELL_CLOSE_ref(int a1)
{
  float v2; // r1
  int v3; // r5
  Vec2 v5; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  sub_605943EC(a1, 1);
  FIELD_U8(a1, 8161) = 0;
  FIELD_U8(a1, 8209) = 0;
  FIELD_U32(a1, 6116) = 0;
  FIELD_U32(a1, 6124) = 0;
  FIELD_U32(a1, 6132) = 0;
  FIELD_U32(a1, 6140) = 0;
  FIELD_U32(a1, 6148) = 0;
  FIELD_U32(a1, 6152) = 0;
  FIELD_U32(a1, 6160) = 0;
  FIELD_U32(a1, 6164) = 0;
  FIELD_U32(a1, 6172) = 0;
  FIELD_U32(a1, 6176) = 0;
  FIELD_U32(a1, 6184) = 0;
  FIELD_U32(a1, 6188) = 0;
  FIELD_U32(a1, 6196) = 0;
  FIELD_U32(a1, 6200) = 0;
  FIELD_U32(a1, 6208) = 0;
  FIELD_U32(a1, 6212) = 0;
  FIELD_U32(a1, 6220) = 0;
  FIELD_U32(a1, 6224) = 0;
  FIELD_U32(a1, 6232) = 0;
  FIELD_U32(a1, 6236) = 0;
  FIELD_U32(a1, 6244) = 0;
  FIELD_U32(a1, 6248) = 0;
  FIELD_U32(a1, 6256) = 0;
  FIELD_U32(a1, 6260) = 0;
  FIELD_U32(a1, 6268) = 0;
  FIELD_U32(a1, 6272) = 0;
  FIELD_U32(a1, 6280) = 0;
  FIELD_U32(a1, 6284) = 0;
  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&v5, &position);
  return BasicSoundActor1_playSound(v3, "SE_EMY_SHELL_CLOSE", (int)&v5, 0);
}
