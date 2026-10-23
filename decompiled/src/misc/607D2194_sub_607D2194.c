/* sub_607D2194
 * address: 0x607D2194   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D2194(int a1, int a2)
{
  int (__fastcall ***v5)(_DWORD, int *); // r7
  char v6; // r12
  StateBase *CurrentState; // r0
  int v8; // r7
  int v9; // r0
  int v10; // r0

  if ( FIELD_U32(a1, 11456) )
    return 0;
  v5 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11356));
  if ( ((unsigned int)&dword_60C7B364 & ~(1618813428 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v5 && (**v5)(v5, &StageActor_RTTI) )
    return 0;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 11404));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v9 = (*(int (**)(void))(dword_60CC5398 + 8))();
  if ( !a2 )
    return 0;
  if ( v8 != v9 )
    return 0;
  v10 = FIELD_U32(a2, 620);
  if ( !v10 || FIELD_U32(v10, 12) || !FIELD_U32(v10, 16) )
    return 0;
  FIELD_U32(a1, 11356) = FIELD_U32(a2, 8);
  FIELD_U32(a1, 11428) = 0;
  StateMgr__changeState((StateMgr *)(a1 + 11404), (StateBase *)&dword_60CC53F8);
  return 1;
}
