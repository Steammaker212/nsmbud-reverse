/* SE_OBJ_DOKAN_APPEAR_ref_5F0EBC
 * address: 0x605F0EBC   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_DOKAN_APPEAR_ref_5F0EBC(int a1)
{
  int v1; // r4
  float v2; // s0
  float v3; // s2
  Vec2 v5; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v1 = Global_BasicSoundActor2;
  v2 = FIELD_F32(dword_60CC6484, 108);
  v3 = FIELD_F32(dword_60CC6484, 124);
  position.x = FIELD_F32(a1, 108);
  position.y = (float)(v3 - v2) + 16.0;
  mapPositionToScreen(&v5, &position);
  return BasicSoundActor2_play(v1, "SE_OBJ_DOKAN_APPEAR", &v5.x, 0);
}
