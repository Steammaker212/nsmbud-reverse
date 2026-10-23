/* SE_EMY_BUBBLE_EXTINCT_ref_269DF8
 * address: 0x60269DF8   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_EMY_BUBBLE_EXTINCT_ref_269DF8(int a1, float *a2)
{
  float v4; // r1
  int v5; // r6
  float v6; // r0
  Vec2 v8; // [sp+8h] [bp+0h] BYREF
  Vec3 position; // [sp+10h] [bp+8h] BYREF

  v4 = FIELD_F32(a1, 112);
  v5 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  mapPositionToScreen(&v8, &position);
  sub_60813810(v5, (int)"SE_EMY_BUBBLE_EXTINCT", (int)&v8, 1, 0);
  v6 = FIELD_F32(a1, 108);
  position.y = FIELD_F32(a1, 112);
  position.x = v6;
  position.z = 4500.0;
  EffectData_create(656, &position, 0, 0);
  return Enemy__vfA8(a1, a2);
}
