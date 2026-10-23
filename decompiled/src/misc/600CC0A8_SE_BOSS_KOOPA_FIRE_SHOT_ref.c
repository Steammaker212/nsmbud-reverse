/* SE_BOSS_KOOPA_FIRE_SHOT_ref
 * address: 0x600CC0A8   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall SE_BOSS_KOOPA_FIRE_SHOT_ref(int a1)
{
  float v2; // r1
  int v3; // r6
  int v4; // r5
  unsigned int result; // r0
  StateBase *CurrentState; // r0
  int v7; // r6
  float v8; // r6
  float v9; // r7
  float v10; // s0
  float v11; // r1
  int v12; // r6
  _DWORD v13[2]; // [sp+8h] [bp-40h] BYREF
  char v14; // [sp+10h] [bp-38h]
  Vec3 position; // [sp+14h] [bp-34h] BYREF
  Vec2 v16; // [sp+20h] [bp-28h] BYREF
  Vec3 out[2]; // [sp+28h] [bp-20h] BYREF

  CollisionActor__handleSpeed((CollisionActor *)a1);
  LODWORD(position.x) = 17;
  v13[0] = 15;
  v13[1] = *(_DWORD *)&a333_0[4];
  v14 = 0;
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 8);
  v4 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen((Vec2 *)out, &position);
  SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v4, "SE_BOSS_KOOPA_FIRE_SHOT", v3, out, v13);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  result = FIELD_U32(a1, 2872);
  if ( (result & 1) != 0
    || (result & 0x10400) == 0x400
    || (result & 0x440000) != 0 && (result & 0x10000000) == 0
    || (result & 0x880000) != 0 && (result &= 0x20000000u) == 0 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*(int (**)(void))(dword_60C8403C + 8))();
    if ( v7 != result )
    {
      v8 = FIELD_F32(a1, 108);
      v9 = FIELD_F32(a1, 112);
      v10 = sub_600024C4(a1);
      position.x = v8;
      position.y = v9;
      position.z = v10;
      EffectData_create(957, &position, 0, (int)&dword_60C84078);
      v11 = FIELD_F32(a1, 112);
      v12 = Global_BasicSoundActor2;
      out[0].x = FIELD_F32(a1, 108);
      out[0].y = v11;
      mapPositionToScreen(&v16, out);
      BasicSoundActor2_play(v12, "SE_BOSS_KOOPA_FIRE_DISAPP", &v16.x, 0);
      AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 8, 1, 0, 0);
      return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C8403C);
    }
  }
  return result;
}
