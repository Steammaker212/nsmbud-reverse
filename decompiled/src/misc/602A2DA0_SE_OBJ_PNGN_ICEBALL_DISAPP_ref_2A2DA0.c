/* SE_OBJ_PNGN_ICEBALL_DISAPP_ref_2A2DA0
 * address: 0x602A2DA0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_PNGN_ICEBALL_DISAPP_ref_2A2DA0(int a1)
{
  int v1; // r6
  int v2; // r4
  float v3; // r1
  float v4; // r1
  Vec3 position; // [sp+4h] [bp-24h] BYREF
  Vec2 out; // [sp+10h] [bp-18h] BYREF

  v1 = FIELD_U32(a1, 64);
  v2 = Global_BasicSoundActor2;
  v3 = FIELD_F32(v1, 112);
  position.x = FIELD_F32(v1, 108);
  position.y = v3;
  mapPositionToScreen(&out, &position);
  BasicSoundActor2_play(v2, "SE_OBJ_PNGN_ICEBALL_DISAPP", &out.x, 0);
  v4 = FIELD_F32(v1, 112);
  position.x = FIELD_F32(v1, 108);
  position.y = v4;
  position.z = 4500.0;
  return EffectData_create(9, &position, 0, 0);
}
