/* sub_6031DA28
 * address: 0x6031DA28   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031DA28(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  StageActor *owner; // r7
  StateBase *CurrentState; // r0
  int v8; // r6
  int result; // r0
  Vec2 v10; // [sp+0h] [bp-20h] BYREF

  owner = FIELD_U32(a3, 0x40);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v8 == (*(int (**)(void))(dword_60C93710 + 8))() )
  {
    result = (*(int (__fastcall **)(StageActor *))(FIELD_U32(owner, 0x0).vtable + 1156))(owner);
    if ( !result )
      return (*(int (__fastcall **)(int, ActiveCollider *, ActiveCollider *))(*(_DWORD *)a1 + 200))(a1, a2, a3);
  }
  else
  {
    result = Enemy__processCollision((Enemy *)a1, a2, a3, 0);
    if ( result == 1 )
    {
      v10 = *(Vec2 *)(a1 + 120);
      return Enemy_killWithState((Enemy *)a1, owner, &v10, (int)&stru_60C906EC);
    }
    else if ( !result )
    {
      return Enemy__collisionYoshi(a1, (int)a2, (int)a3);
    }
  }
  return result;
}
