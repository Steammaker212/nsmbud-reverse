/* SE_OBJ_FIREBALL_SPLASH_ref_2
 * address: 0x6013B470   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_FIREBALL_SPLASH_ref_2(int a1, int a2)
{
  int v3; // r5
  float v4; // r1
  float v5; // r0
  int v6; // r0
  _DWORD v8[2]; // [sp+0h] [bp-38h] BYREF
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  int v10; // [sp+10h] [bp-28h]
  Vec3 position; // [sp+14h] [bp-24h] BYREF

  v3 = Global_BasicSoundActor2;
  v4 = FIELD_F32(a1, 108);
  v5 = FIELD_F32(a1, 112);
  position.x = v4;
  position.y = v5;
  mapPositionToScreen(&out, &position);
  BasicSoundActor2_play(v3, "SE_OBJ_FIREBALL_SPLASH", &out.x, 0);
  position.x = FIELD_F32(a2, 4);
  position.y = FIELD_F32(a2, 8);
  position.z = 4500.0;
  v6 = FIELD_U32(a2, 12);
  out.x = 0.0;
  out.y = 0.0;
  v10 = v6;
  EffectData_create(1106, &position, (int)&out, 0);
  v8[0] = LODWORD(position.x);
  v8[1] = LODWORD(position.y);
  return TileMgr_splashRelated(TileMgr_instance, v8, 8);
}
