/* SE_OBJ_BOSS_WARP_CANNON_APP_ref
 * address: 0x600BE7D4   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_BOSS_WARP_CANNON_APP_ref(float *a1)
{
  int v1; // r4
  float v2; // r1
  float v3; // r0
  Vec2 v5; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  *((_DWORD *)a1 + 1854) = 60;
  *((_DWORD *)a1 + 31) = dword_60C8394C;
  *((_DWORD *)a1 + 25) = dword_60C83934;
  v1 = Global_BasicSoundActor2;
  v2 = a1[27];
  v3 = a1[28];
  position.x = v2;
  position.y = v3;
  mapPositionToScreen(&v5, &position);
  return BasicSoundActor2_play(v1, "SE_OBJ_BOSS_WARP_CANNON_APP", &v5.x, 0);
}
