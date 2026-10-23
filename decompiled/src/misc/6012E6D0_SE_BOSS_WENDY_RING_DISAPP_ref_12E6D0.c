/* SE_BOSS_WENDY_RING_DISAPP_ref_12E6D0
 * address: 0x6012E6D0   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_WENDY_RING_DISAPP_ref_12E6D0(int a1)
{
  float v2; // r1
  float v3; // s0
  int v4; // r5
  Vec3 v6; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  v2 = FIELD_F32(a1, 112);
  v6.x = FIELD_F32(a1, 108);
  v6.y = v2;
  v6.z = 4500.0;
  EffectData_create(794, &v6, 0, 0);
  v3 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  v4 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  position.y = v3;
  mapPositionToScreen(&out, &position);
  BasicSoundActor2_play(v4, "SE_BOSS_WENDY_RING_DISAPP", &out.x, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  FIELD_U8(a1, 19) = 1;
  return 1;
}
