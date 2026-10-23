/* sub_600C8100
 * address: 0x600C8100   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600C8100(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r5
  char v5; // r12
  StateBase *v6; // r0
  int v7; // r5

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6244));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C83EE0 + 8))() )
  {
    v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6172));
    if ( ((unsigned int)&dword_60C80FD8 & ~(1611432308 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C80FD8) )
    {
      dword_60C80FD4 = (int)&off_60BC2CB4;
      _cxa_guard_release(&dword_60C80FD8);
    }
    if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C80FD4) == 1 )
    {
      v6 = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
      v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
      if ( v7 == (*(int (**)(void))(dword_60C80FB4 + 8))() )
        StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C83E80);
    }
  }
}
