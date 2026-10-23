/* SE_OBJ_DOKAN_APPEAR_ref
 * address: 0x605EE7C0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_DOKAN_APPEAR_ref(int a1)
{
  int v1; // r4
  float v2; // s0
  Vec2 v4; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v1 = Global_BasicSoundActor2;
  v2 = FIELD_F32(dword_60CC6484, 124);
  position.x = FIELD_F32(a1, 108);
  position.y = v2 + -16.0;
  mapPositionToScreen(&v4, &position);
  return BasicSoundActor2_play(v1, "SE_OBJ_DOKAN_APPEAR", &v4.x, 0);
}
