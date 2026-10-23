/* SE_OBJ_EMY_FIRE_DISAPP_ref_138104
 * address: 0x60138104   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_EMY_FIRE_DISAPP_ref_138104(int a1, Vec3 *a2)
{
  int result; // r0
  int v5; // r6
  float y; // r1
  Vec2 v7; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  result = FIELD_U8(a1, 19);
  if ( !result )
  {
    v5 = Global_BasicSoundActor2;
    y = FIELD_F32(a2, 0x4);
    position.x = FIELD_F32(a2, 0x0);
    position.y = y;
    mapPositionToScreen(&v7, &position);
    BasicSoundActor2_play(v5, "SE_OBJ_EMY_FIRE_DISAPP", &v7.x, 0);
    EffectData_create(4, a2, 0, 0);
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
