/* BanzaiBill_vf79
 * address: 0x60320D28   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BanzaiBill_vf79(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r0
  float v5; // r1
  float v6; // r0
  Vec2 v8; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v3 = Global_BasicSoundActor2;
  v4 = FIELD_U32(a3, 64);
  v5 = FIELD_F32(v4, 108);
  v6 = FIELD_F32(v4, 112);
  position.x = v5;
  position.y = v6;
  mapPositionToScreen(&v8, &position);
  BasicSoundActor2_play(v3, "SE_OBJ_FIREBALL_DISAPP", &v8.x, 0);
  return 1;
}
