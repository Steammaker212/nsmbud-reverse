/* sub_602A3520
 * address: 0x602A3520   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A3520(float *a1, const char *a2, int a3)
{
  float v4; // s0
  float v5; // s6
  int v7; // r6
  Vec2 v9; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v4 = a1[28];
  v5 = a1[144];
  v7 = Global_BasicSoundActor1;
  position.x = a1[27] + a1[143];
  position.y = v4 + v5;
  mapPositionToScreen(&v9, &position);
  return BasicSoundActor1_playSound(v7, a2, (int)&v9, a3);
}
