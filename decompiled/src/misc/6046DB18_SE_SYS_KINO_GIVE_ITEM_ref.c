/* SE_SYS_KINO_GIVE_ITEM_ref
 * address: 0x6046DB18   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_KINO_GIVE_ITEM_ref(float *a1)
{
  int v1; // r4
  float v2; // r1
  float v3; // r0
  Vec2 v5; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  a1[30] = 0.0;
  a1[31] = 2.8;
  a1[32] = 0.0;
  a1[1527] = NAN;
  v1 = Global_BasicSoundActor2;
  v2 = a1[27];
  v3 = a1[28];
  position.x = v2;
  position.y = v3;
  mapPositionToScreen(&v5, &position);
  return BasicSoundActor2_play(v1, "SE_SYS_KINO_GIVE_ITEM", &v5.x, 0);
}
