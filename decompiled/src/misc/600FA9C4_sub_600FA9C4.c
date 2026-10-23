/* sub_600FA9C4
 * address: 0x600FA9C4   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600FA9C4(int a1)
{
  unsigned int v1; // r1
  int (__fastcall ***v2)(_DWORD, int *); // r4
  char v3; // r12
  StateMgr *v4; // r4
  StateBase *CurrentState; // r0
  int v6; // r5

  v1 = FIELD_U32(a1, 6100);
  if ( v1 )
  {
    v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v1);
    if ( ((unsigned int)&dword_60C85C84 & ~(1611639300 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C85C84) )
    {
      dword_60C85C80 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C85C84);
    }
    if ( v2 && (**v2)(v2, &dword_60C85C80) == 1 )
    {
      v4 = (StateMgr *)(v2 + 1521);
      CurrentState = StateMgr__getCurrentState(v4);
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v6 == (*(int (**)(void))(dword_60C95C10 + 8))() )
        StateMgr__changeState(v4, &stru_60C95C30);
    }
  }
}
