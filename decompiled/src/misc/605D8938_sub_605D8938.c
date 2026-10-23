/* sub_605D8938
 * address: 0x605D8938   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D8938(int a1, const char *a2, int a3)
{
  int v5; // r6
  float v6; // r1
  float v7; // r0
  Vec2 v9; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v5 = Global_BasicSoundActor2;
  v6 = FIELD_F32(a1, 108);
  v7 = FIELD_F32(a1, 112);
  position.x = v6;
  position.y = v7;
  mapPositionToScreen(&v9, &position);
  return BasicSoundActor2_play(v5, a2, &v9.x, a3);
}
