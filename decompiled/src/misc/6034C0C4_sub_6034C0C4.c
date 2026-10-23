/* sub_6034C0C4
 * address: 0x6034C0C4   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034C0C4(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  StateBase *CurrentState; // r0
  int v7; // r7
  char v8; // r12
  int v9; // r0
  int v10; // r1
  int result; // r0
  int v12; // r0
  bool v13; // zf
  StageActor *owner; // r8
  StateBase *v15; // r0
  int v16; // r7

  if ( !FIELD_U32(a1, 6820) )
    return ShellEnemy__collisionPlayer(a1, (int)a2, (int)a3);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v7 == (*(int (**)(void))(dword_60C8EA94 + 8))() && !FIELD_U32(a1, 6352) )
  {
    v12 = FIELD_U32(a3, 0x88);
    v13 = v12 == 15;
    if ( v12 != 15 )
      v13 = v12 == 0;
    if ( v13 )
    {
      owner = FIELD_U32(a3, 0x40);
      if ( ((unsigned int)&dword_60C7B37C & ~(1614070192 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( !owner
        || (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B378) != 1
        || (owner[1].profileFlags & 0x40) == 0 )
      {
        goto LABEL_18;
      }
    }
  }
  v9 = Enemy__processCollision((Enemy *)a1, a2, a3, 0);
  v10 = v9;
  if ( v9 )
  {
    result = v9 | 2;
    if ( (v10 | 2) == 3 )
      return (*(int (__fastcall **)(int, int, ActiveCollider *, ActiveCollider *))(*(_DWORD *)a1 + 704))(
               a1,
               v10,
               a2,
               a3);
  }
  else
  {
LABEL_18:
    result = sub_603A037C(a1, a2, a3);
    if ( !result )
    {
      if ( FIELD_U32(a1, 6352) )
        return (*(int (__fastcall **)(int, ActiveCollider *, ActiveCollider *))(*(_DWORD *)a1 + 200))(a1, a2, a3);
      v15 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
      result = (*(int (**)(void))(dword_60C8EA94 + 8))();
      if ( v16 != result )
        return (*(int (__fastcall **)(int, ActiveCollider *, ActiveCollider *))(*(_DWORD *)a1 + 200))(a1, a2, a3);
    }
  }
  return result;
}
