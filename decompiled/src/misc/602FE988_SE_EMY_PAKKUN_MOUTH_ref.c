/* SE_EMY_PAKKUN_MOUTH_ref
 * address: 0x602FE988   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_PAKKUN_MOUTH_ref(int a1)
{
  int v1; // r4
  float v2; // r1
  float v3; // r0
  Vec2 v5; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v1 = Global_BasicSoundActor1;
  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  position.x = v2;
  position.y = v3;
  mapPositionToScreen(&v5, &position);
  return BasicSoundActor1_playSound(v1, "SE_EMY_PAKKUN_MOUTH", (int)&v5, 0);
}
