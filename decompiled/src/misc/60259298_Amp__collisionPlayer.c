/* Amp__collisionPlayer
 * address: 0x60259298   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A2D54
// 
// Overridden by: None
int __fastcall Amp__collisionPlayer(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  StateMgr *p_manager; // r7
  StateBase *CurrentState; // r0
  int v8; // r6
  StateBase *v9; // r0
  int v10; // r6
  int result; // r0
  StageActor *owner; // r7
  StageActor *v13; // r1
  Vec2 v14; // [sp+0h] [bp-20h] BYREF

  p_manager = &FIELD_U32(a1, 0x17C4);
  CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v8 == (*(int (**)(void))(dword_60C8E080 + 8))()
    && (*(int (__fastcall **)(StageActor *, Enemy *, int))(FIELD_U32(a3, 0x40) + 1168))(FIELD_U32(a3, 0x40), a1, 13) == 1 )
  {
    (*(void (__fastcall **)(Enemy *, void *))(FIELD_U32(a1, 0x0) + 192))(a1, &unk_60C8E0A0);
  }
  v9 = StateMgr__getCurrentState(p_manager);
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
  result = (*(int (**)(void))(dword_60C8E0C0 + 8))();
  if ( v10 == result )
  {
    owner = FIELD_U32(a3, 0x40);
    result = Enemy__processCollision(a1, a2, a3, 0);
    switch ( result )
    {
      case 3:
        return Enemy_killSpin(a1, owner);
      case 1:
        v13 = FIELD_U32(a3, 0x40);
        v14.x = 0.0;
        v14.y = 0.0;
        return Enemy_killWithState(a1, v13, &v14, (int)&stru_60C906EC);
      case 0:
        return Enemy__collisionPlayer((int)a1, (int)a2, (int)a3);
    }
  }
  return result;
}
