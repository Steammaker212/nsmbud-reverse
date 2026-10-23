/* SE_BOSS_KOOPA_FIRE_DISAPP_ref_CC8AC
 * address: 0x600CC8AC   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_KOOPA_FIRE_DISAPP_ref_CC8AC(int a1, int a2, int a3, int a4)
{
  int v7; // r7
  float v8; // r6
  int v9; // r7
  float v10; // r1
  int result; // r0
  float v12; // r1
  Vec3 v13; // [sp+4h] [bp-3Ch] BYREF
  Vec2 out; // [sp+10h] [bp-30h] BYREF
  Vec3 position; // [sp+18h] [bp-28h] BYREF

  if ( a3 )
  {
    v7 = 957;
    if ( FIELD_U32(a3, 140) == 2 )
      v7 = 1094;
  }
  else
  {
    v7 = 957;
  }
  v8 = FIELD_F32(a1, 112);
  v13.x = FIELD_F32(a1, 108);
  v13.y = v8;
  v13.z = sub_600024C4(a1);
  EffectData_create(v7, &v13, 0, (int)&dword_60C84078);
  v9 = Global_BasicSoundActor2;
  if ( a4 != 1 )
  {
    v12 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v12;
    mapPositionToScreen(&out, &position);
    result = BasicSoundActor2_play(v9, "SE_BOSS_KOOPA_FIRE_DISAPP", &out.x, 0);
    if ( a2 != 1 )
      return result;
    return AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 8, 1, 0, 0);
  }
  v10 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v10;
  mapPositionToScreen(&out, &position);
  result = sub_60813BDC(v9, "SE_BOSS_KOOPA_FIRE_DISAPP", &out, 1, 0);
  if ( a2 == 1 )
    return AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 8, 1, 0, 0);
  return result;
}
