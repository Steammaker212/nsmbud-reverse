/* SE_EMY_FIRE_BROS_FIRE_ref
 * address: 0x601376E0   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_FIRE_BROS_FIRE_ref(int a1)
{
  float v2; // r1
  Vec2 v4; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  FireballBase__vfC0();
  v2 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&v4, &position);
  return sub_60813570(a1 + 6760, "SE_EMY_FIRE_BROS_FIRE", &v4, 0);
}
