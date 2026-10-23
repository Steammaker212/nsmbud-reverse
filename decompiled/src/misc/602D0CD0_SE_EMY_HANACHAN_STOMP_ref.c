/* SE_EMY_HANACHAN_STOMP_ref
 * address: 0x602D0CD0   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_HANACHAN_STOMP_ref(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  const char *v5; // r5
  StateBase *v6; // r0
  int v7; // r6
  float v8; // r1
  int v9; // r6
  Vec2 v11; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C91998 + 8))() )
  {
    v5 = "SE_EMY_HANACHAN_STOMP";
  }
  else
  {
    v6 = StateMgr__getCurrentState(v2);
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    v5 = "SE_EMY_CMN_STEP";
    if ( v7 == (*(int (**)(void))(dword_60C91A18 + 8))() )
      v5 = "SE_EMY_HANACHAN_STOMP";
  }
  v8 = FIELD_F32(a1, 112);
  v9 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v8;
  mapPositionToScreen(&v11, &position);
  return BasicSoundActor1_playSound(v9, v5, (int)&v11, 0);
}
