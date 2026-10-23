/* sub_600FAAE0
 * address: 0x600FAAE0   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600FAAE0(int a1)
{
  int v1; // r4
  unsigned int v2; // r1
  int v3; // r5
  char v4; // r12
  StateBase *CurrentState; // r0
  int v6; // r5

  v1 = 1;
  v2 = FIELD_U32(a1, 6100);
  if ( v2 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( ((unsigned int)&dword_60C85C84 & ~(1611639588 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C85C84) )
    {
      dword_60C85C80 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C85C84);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C85C80) == 1 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      return v6 == (*(int (**)(void))(dword_60C95CB0 + 8))();
    }
  }
  return v1;
}
