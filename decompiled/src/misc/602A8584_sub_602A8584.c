/* sub_602A8584
 * address: 0x602A8584   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A8584(unsigned int *a1)
{
  int v2; // r6
  char v3; // r12
  StateBase *CurrentState; // r0
  int v5; // r7

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1]);
  if ( !v2 )
    return 0;
  if ( ((unsigned int)dword_60C7B430 & ~(1613399496 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
  {
    Enemy_RTTI = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C7B430);
  }
  if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &Enemy_RTTI) != 1 )
    return 0;
  if ( sub_602A588C(v2) )
    return 0;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v2 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v5 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    return 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 72))(v2);
  (*(void (__fastcall **)(int, StateVirtual *))(*(_DWORD *)v2 + 192))(v2, &stru_60C908E4);
  return sub_6000C0F4(a1);
}
