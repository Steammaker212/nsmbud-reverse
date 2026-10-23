/* sub_607CFED4
 * address: 0x607CFED4   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CFED4(int a1, int a2)
{
  StateMgr *v4; // r4
  StateBase *CurrentState; // r0
  int v6; // r7
  int v7; // r6
  unsigned int v8; // r1
  int (__fastcall ***v9)(_DWORD, int *); // r7
  char v10; // r12
  int v11; // r0

  v4 = (StateMgr *)(a1 + 11404);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 11404));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v7 = 0;
  if ( v6 == (*(int (**)(void))(dword_60CC5398 + 8))() )
  {
    v8 = FIELD_U32(a1, 11356);
    if ( v8 )
    {
      v9 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v8);
      if ( ((unsigned int)&dword_60C7B364 & ~(1618804572 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      v7 = 0;
      v11 = 0;
      if ( v9 )
      {
        v11 = (**v9)(v9, &StageActor_RTTI);
        if ( v11 )
          v11 = (int)v9;
      }
      if ( v11 == a2 )
      {
        FIELD_U32(a1, 11428) = 0;
        StateMgr__changeState(v4, (StateBase *)&dword_60CC53D8);
        return 1;
      }
    }
  }
  return v7;
}
