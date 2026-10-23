/* SE_OBJ_KINOKO_YOKO_LONGER_ref
 * address: 0x6065FC24   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_KINOKO_YOKO_LONGER_ref(float *a1)
{
  float v1; // s0
  float v2; // s2
  int v3; // r4
  Vec2 v5; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v1 = a1[28];
  v2 = a1[1759];
  position.x = a1[27];
  v3 = Global_BasicSoundActor2;
  position.y = v1 + v2;
  mapPositionToScreen(&v5, &position);
  return BasicSoundActor2_play(v3, "SE_OBJ_KINOKO_YOKO_LONGER", &v5.x, 0);
}
