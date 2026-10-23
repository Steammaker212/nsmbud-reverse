/* sub_602ADE50
 * address: 0x602ADE50   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602ADE50(int a1)
{
  int (__fastcall ***v1)(_DWORD, int *); // r6
  char v2; // r12
  int v3; // r4
  int v4; // r5
  StateBase *CurrentState; // r0
  int v6; // r6

  v1 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( ((unsigned int)dword_60C90B98 & ~(1613422216 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C90B98) )
  {
    dword_60C90B94 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C90B98);
  }
  v3 = 0;
  v4 = 0;
  if ( v1 )
  {
    v4 = (**v1)(v1, &dword_60C90B94);
    if ( v4 )
      v4 = (int)v1;
  }
  if ( !sub_602A588C(v4) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v6 != (*(int (**)(void))(dword_60C90B30 + 8))() )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 72))(v4);
      (*(void (__fastcall **)(int, StateVirtual *))(*(_DWORD *)v4 + 192))(v4, &stru_60C908E4);
      return 1;
    }
  }
  return v3;
}
