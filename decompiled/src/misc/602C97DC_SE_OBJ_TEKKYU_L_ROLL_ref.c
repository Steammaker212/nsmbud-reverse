/* SE_OBJ_TEKKYU_L_ROLL_ref
 * address: 0x602C97DC   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_TEKKYU_L_ROLL_ref(int a1)
{
  int v2; // r5
  int v3; // r6
  float v4; // r1
  int v5; // r7
  float v6; // s0
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v2 = FIELD_U32(a1, 8);
  v3 = ((int (*)(void))loc_606E74C4)();
  v4 = FIELD_F32(a1, 112);
  v5 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  mapPositionToScreen(&out, &position);
  return sub_60813CA0(v5, "SE_OBJ_TEKKYU_L_ROLL", v2, &out, v6, v3, 0);
}
