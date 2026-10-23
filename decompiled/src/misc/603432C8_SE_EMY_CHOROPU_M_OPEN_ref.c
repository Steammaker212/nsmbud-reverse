/* SE_EMY_CHOROPU_M_OPEN_ref
 * address: 0x603432C8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_CHOROPU_M_OPEN_ref(int a1)
{
  float v2; // r1
  int v3; // r5
  Vec2 v5; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  sub_60345A00(a1, 0);
  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&v5, &position);
  BasicSoundActor1_playSound(v3, "SE_EMY_CHOROPU_M_OPEN", (int)&v5, 0);
  FIELD_U32(a1, 7068) = 1061158912;
  FIELD_U32(a1, 7092) = 0;
  return 7092;
}
