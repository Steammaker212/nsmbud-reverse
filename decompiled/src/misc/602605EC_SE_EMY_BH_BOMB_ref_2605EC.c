/* SE_EMY_BH_BOMB_ref_2605EC
 * address: 0x602605EC   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_BH_BOMB_ref_2605EC(int a1)
{
  float v2; // r5
  float v3; // r1
  int v4; // r5
  Vec3 v6; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  v2 = FIELD_F32(a1, 6476);
  v6.x = FIELD_F32(a1, 6472);
  v6.y = v2;
  v6.z = sub_600024C4(a1);
  EffectData_create(13, &v6, 0, 0);
  v3 = FIELD_F32(a1, 112);
  v4 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v3;
  mapPositionToScreen(&out, &position);
  return BasicSoundActor1_playSound(v4, "SE_EMY_BH_BOMB", (int)&out, 0);
}
