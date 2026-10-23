/* sub_60144CFC
 * address: 0x60144CFC   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60144CFC(int a1)
{
  int result; // r0
  unsigned int v3; // r1
  int v4; // r5
  char v5; // r12
  int v6; // r0
  bool v7; // zf
  StateBase *CurrentState; // r0
  int v9; // r5

  result = 6476;
  v3 = FIELD_U32(a1, 6476);
  if ( v3 )
  {
    v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
    if ( ((unsigned int)dword_60C7B430 & ~(1611943232 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
    if ( !v4 )
      goto LABEL_9;
    v6 = (**(int (__fastcall ***)(int, int *))v4)(v4, &Enemy_RTTI);
    v7 = v6 == 1;
    if ( v6 == 1 )
      v7 = FIELD_U8(v4, 536) == 0;
    if ( v7
      && (CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084)),
          v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
          v9 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))()) )
    {
      result = FIELD_U8(a1, 6480);
      if ( FIELD_U8(a1, 6480) )
        return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C87FEC);
    }
    else
    {
LABEL_9:
      result = 1;
      FIELD_U8(a1, 19) = 1;
    }
  }
  return result;
}
