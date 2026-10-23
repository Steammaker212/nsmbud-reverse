/* SE_BOSS_KOOPA_FIRE_DISAPP_ref
 * address: 0x600CBDC8   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_KOOPA_FIRE_DISAPP_ref(int a1, int a2)
{
  int v3; // r6
  StateBase *CurrentState; // r0
  int v5; // r7
  int v6; // r1
  int result; // r0
  StateBase *v8; // r0
  int v9; // r7
  float v10; // r8
  float v11; // r1
  int v12; // r7
  Vec3 v13; // [sp+4h] [bp-34h] BYREF
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  v3 = FIELD_U32(a2, 64);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v6 = (*(int (**)(void))(dword_60C8403C + 8))();
  result = 0;
  if ( v5 != v6 )
  {
    v8 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
    if ( v9 != (*(int (**)(void))(dword_60C8403C + 8))() )
    {
      v10 = FIELD_F32(v3, 112);
      v13.x = FIELD_F32(v3, 108);
      v13.y = v10;
      v13.z = sub_600024C4(v3);
      EffectData_create(957, &v13, 0, (int)&dword_60C84078);
      v11 = FIELD_F32(v3, 112);
      v12 = Global_BasicSoundActor2;
      position.x = FIELD_F32(v3, 108);
      position.y = v11;
      mapPositionToScreen(&out, &position);
      sub_60813BDC(v12, "SE_BOSS_KOOPA_FIRE_DISAPP", &out, 1, 0);
      StateMgr__changeState((StateMgr *)(v3 + 6084), (StateBase *)&dword_60C8403C);
    }
    FIELD_U8(a2, 110) |= 2u;
    return 1;
  }
  return result;
}
