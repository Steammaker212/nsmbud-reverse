/* sub_602BB2F8
 * address: 0x602BB2F8   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602BB2F8(int a1)
{
  int v1; // r4
  char v2; // r12
  StateBase *CurrentState; // r0
  int v4; // r5

  v1 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6356));
  if ( ((unsigned int)dword_60C87BD0 & ~(1613476656 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C87BD0) )
  {
    dword_60C87BCC = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C87BD0);
  }
  if ( v1 && (**(int (__fastcall ***)(int, int *))v1)(v1, &dword_60C87BCC) == 1 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 == (*(int (**)(void))(dword_60C87C00 + 8))() )
      (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 628))(v1);
  }
}
