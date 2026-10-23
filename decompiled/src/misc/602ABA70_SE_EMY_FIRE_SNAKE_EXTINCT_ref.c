/* SE_EMY_FIRE_SNAKE_EXTINCT_ref
 * address: 0x602ABA70   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_FIRE_SNAKE_EXTINCT_ref(int a1)
{
  float v2; // r1
  int v3; // r5
  Vec3 position; // [sp+4h] [bp-24h] BYREF
  Vec2 out; // [sp+10h] [bp-18h] BYREF

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  sub_60237610((EffectData *)(a1 + 7080), 665, (__int64 *)(a1 + 6928), 0);
  position.x = FIELD_F32(a1, 144);
  position.y = position.x;
  sub_6023636C(a1 + 7080, &position);
  position.x = FIELD_F32(a1, 144);
  position.y = position.x;
  position.z = position.x;
  sub_60236290(a1 + 7080, (int)&position);
  fire_snake_body_model_ref_2(FIELD_U32(a1, 6800));
  fire_snake_body_model_ref_2(FIELD_U32(a1, 6804));
  fire_snake_body_model_ref_2(FIELD_U32(a1, 6808));
  fire_snake_body_model_ref_2(FIELD_U32(a1, 6812));
  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&out, &position);
  BasicSoundActor1_playSound(v3, "SE_EMY_FIRE_SNAKE_EXTINCT", (int)&out, 0);
  FIELD_U16(a1, 6276) = 30;
  return 6276;
}
