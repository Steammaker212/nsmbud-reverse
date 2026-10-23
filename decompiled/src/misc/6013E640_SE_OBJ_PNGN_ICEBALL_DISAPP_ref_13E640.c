/* SE_OBJ_PNGN_ICEBALL_DISAPP_ref_13E640
 * address: 0x6013E640   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_PNGN_ICEBALL_DISAPP_ref_13E640(int a1, int a2)
{
  int v2; // r6
  float v3; // r1
  int v4; // r4
  float v5; // r1
  Vec3 position; // [sp+4h] [bp-24h] BYREF
  Vec2 out; // [sp+10h] [bp-18h] BYREF

  v2 = FIELD_U32(a2, 64);
  v3 = FIELD_F32(v2, 112);
  v4 = Global_BasicSoundActor2;
  position.x = FIELD_F32(v2, 108);
  position.y = v3;
  mapPositionToScreen(&out, &position);
  BasicSoundActor2_play(v4, "SE_OBJ_PNGN_ICEBALL_DISAPP", &out.x, 0);
  v5 = FIELD_F32(v2, 112);
  position.x = FIELD_F32(v2, 108);
  position.y = v5;
  position.z = 4500.0;
  EffectData_create(9, &position, 0, 0);
  return 1;
}
