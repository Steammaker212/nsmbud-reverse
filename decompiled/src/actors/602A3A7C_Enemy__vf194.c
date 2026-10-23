/* Enemy__vf194
 * address: 0x602A3A7C   size: 100   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall Enemy__vf194(float *a1)
{
  float v1; // s0
  float v2; // s6
  int v3; // r4
  Vec2 v5; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v1 = a1[28];
  v2 = a1[144];
  v3 = Global_BasicSoundActor1;
  position.x = a1[27] + a1[143];
  position.y = v1 + v2;
  mapPositionToScreen(&v5, &position);
  return BasicSoundActor1_playSound(v3, "SE_EMY_MAME_STEP", (int)&v5, 0);
}
