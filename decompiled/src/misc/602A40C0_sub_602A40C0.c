/* sub_602A40C0
 * address: 0x602A40C0   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602A40C0(int a1)
{
  int v1; // r4
  char v2; // r12
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5

  v1 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( !v1 )
    return 0;
  if ( ((unsigned int)dword_60C7B430 & ~(1613381888 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
  {
    Enemy_RTTI = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C7B430);
  }
  if ( (**(int (__fastcall ***)(int, int *))v1)(v1, &Enemy_RTTI) == 1
    && (CurrentState = StateMgr__getCurrentState((StateMgr *)(v1 + 6084)),
        v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
        v4 != (*((int (**)(void))stru_60C909BC._._.vtable + 2))())
    && (v5 = StateMgr__getCurrentState((StateMgr *)(v1 + 6084)),
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
        v6 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))()) )
  {
    return sub_602A588C(v1) != 1;
  }
  else
  {
    return 0;
  }
}
