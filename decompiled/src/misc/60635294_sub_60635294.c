/* sub_60635294
 * address: 0x60635294   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void sub_60635294()
{
  int (__fastcall ****i)(_DWORD, int *); // r6
  char v1; // r12
  int (__fastcall ***v2)(_DWORD, int *); // r4
  StateMgr *v3; // r4
  StateBase *CurrentState; // r0
  int v5; // r8

  for ( i = (int (__fastcall ****)(_DWORD, int *))sub_60008598(
                                                    ActorMgr__instance,
                                                    372,
                                                    FIELD_U32(ActorMgr__instance, 27172));
        ;
        i = (int (__fastcall ****)(_DWORD, int *))sub_60008598(ActorMgr__instance, 372, (int)(i + 1)) )
  {
    v2 = *i;
    if ( ((unsigned int)dword_60C80420 & ~(1617122124 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C80420) )
    {
      dword_60C8041C = (int)&off_60BC00E0;
      _cxa_guard_release(dword_60C80420);
    }
    if ( !v2 || (**v2)(v2, &dword_60C8041C) != 1 )
      break;
    v3 = (StateMgr *)(v2 + 1521);
    CurrentState = StateMgr__getCurrentState(v3);
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v5 != (*(int (__fastcall **)(int *))(dword_60CB4444 + 8))(&dword_60CB4444) )
      StateMgr__changeState(v3, (StateBase *)&dword_60CB4444);
  }
}
