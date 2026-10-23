/* sub_60351954
 * address: 0x60351954   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60351954(unsigned int a1)
{
  int v1; // r4
  char v2; // r12
  StateBase *CurrentState; // r0
  int v4; // r5

  if ( !a1 )
    return 0;
  v1 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1);
  if ( ((unsigned int)&dword_60C7B364 & ~(1614092688 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( !v1
    || (**(int (__fastcall ***)(int, int *))v1)(v1, &StageActor_RTTI) != 1
    || Actor__getProfileId((Actor *)v1) != 652 )
  {
    return 0;
  }
  if ( sub_6035288C(v1) )
    return v1;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60C94F7C + 8))() )
    return 0;
  return v1;
}
