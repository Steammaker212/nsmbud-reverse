/* SE_EMY_BUBBLE_EXTINCT_ref_269D58
 * address: 0x60269D58   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_BUBBLE_EXTINCT_ref_269D58(int a1)
{
  float v2; // r1
  float v3; // r1
  int v4; // r7
  Vec3 v6; // [sp+0h] [bp-30h] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  v2 = FIELD_F32(a1, 112);
  v6.x = FIELD_F32(a1, 108);
  v6.y = v2;
  v6.z = 4500.0;
  EffectData_create(656, &v6, 0, 0);
  v3 = FIELD_F32(a1, 112);
  v4 = Global_BasicSoundActor1;
  v6.x = FIELD_F32(a1, 108);
  v6.y = v3;
  mapPositionToScreen(&out, &v6);
  BasicSoundActor1_playSound(v4, "SE_EMY_BUBBLE_EXTINCT", (int)&out, 0);
  return Enemy__collisionStar(a1);
}
