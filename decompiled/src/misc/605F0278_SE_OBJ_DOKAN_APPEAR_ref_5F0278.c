/* SE_OBJ_DOKAN_APPEAR_ref_5F0278
 * address: 0x605F0278   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_DOKAN_APPEAR_ref_5F0278(int a1)
{
  float v1; // r0
  int v2; // r4
  Vec2 v4; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v1 = FIELD_F32(a1, 112);
  v2 = Global_BasicSoundActor2;
  position.x = FIELD_F32(dword_60CC6484, 112) + 16.0;
  position.y = v1;
  mapPositionToScreen(&v4, &position);
  return BasicSoundActor2_play(v2, "SE_OBJ_DOKAN_APPEAR", &v4.x, 0);
}
