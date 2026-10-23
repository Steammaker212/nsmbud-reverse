/* sub_605D56D4
 * address: 0x605D56D4   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D56D4(int a1, int a2, int a3, int a4)
{
  StateMgr *v8; // r4
  StateBase *CurrentState; // r0
  int v10; // r5
  int v11; // r1
  int result; // r0
  int v13; // r7
  char v14; // r12
  _DWORD *v15; // r7

  v8 = (StateMgr *)(a1 + 940);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 940));
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v11 = (*(int (**)(void))(dword_60CB12A8 + 8))();
  result = 0;
  if ( v10 != v11 && !FIELD_U8(a1, 19) )
  {
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 68))(a1, a3);
    v13 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 748));
    if ( ((unsigned int)&dword_60C7B364 & ~(1616729976 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v13 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v13)(v13, &StageActor_RTTI) == 1 )
      {
        v15 = *(_DWORD **)(v13 + 640);
        if ( v15 )
        {
          (*(void (__fastcall **)(_DWORD *, int))(*v15 + 12))(v15, a1);
          v15[2] = 0;
          v15[4] = 0;
        }
      }
    }
    FIELD_U32(a1, 748) = 0;
    if ( FIELD_U8(a1, 752) )
      ((void (__fastcall *)(int, int))loc_605D4BF4)(a1, a2);
    SE_OBJ_CMN_BALLOON_BREAK_ref_5D47E0((Vec3 *)a1, a4);
    StateMgr__changeState(v8, (StateBase *)&dword_60CB12A8);
    return 1;
  }
  return result;
}
