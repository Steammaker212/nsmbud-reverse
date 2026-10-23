/* sub_6031EC0C
 * address: 0x6031EC0C   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031EC0C(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  StageActor *owner; // r5
  StateBase *CurrentState; // r0
  int v8; // r6
  int result; // r0
  int v10; // r0
  Vec2 v11; // [sp+0h] [bp-20h] BYREF

  owner = FIELD_U32(a3, 0x40);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v8 == (*(int (**)(void))(dword_60C93880 + 8))() && FIELD_U8(a1, 12604) )
  {
    result = (*(int (__fastcall **)(StageActor *))(FIELD_U32(owner, 0x0) + 1156))(owner);
    if ( !result )
    {
      if ( sub_6075EDF8(owner) == 1 )
        return (*(int (__fastcall **)(StageActor *, ActiveCollider *, _DWORD))(FIELD_U32(owner, 0x0) + 1164))(owner, a2, 0);
      else
        return (*(int (__fastcall **)(int, ActiveCollider *, ActiveCollider *))(*(_DWORD *)a1 + 200))(a1, a2, a3);
    }
  }
  else
  {
    v10 = Enemy__processCollision((Enemy *)a1, a2, a3, 0);
    if ( v10 )
    {
      result = v10 | 2;
      if ( result == 3 )
      {
        v11 = *(Vec2 *)(a1 + 120);
        return Enemy_killWithState((Enemy *)a1, owner, &v11, (int)&stru_60C906EC);
      }
    }
    else
    {
      return Enemy__collisionPlayer(a1, (int)a2, (int)a3);
    }
  }
  return result;
}
