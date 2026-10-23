/* sub_600777F4
 * address: 0x600777F4   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_600777F4()
{
  int v0; // r4
  char v1; // r12
  int v2; // r5
  StateMgr *v3; // r4
  StateBase *CurrentState; // r0
  int v5; // r6
  StateBase *v6; // r0
  int v7; // r4

  v0 = *(_DWORD *)sub_60008598(ActorMgr__instance, 373, FIELD_U32(ActorMgr__instance, 27172));
  if ( ((unsigned int)&dword_60C81104 & ~(1611102256 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
  {
    dword_60C81100 = (int)&off_60BC66E8;
    _cxa_guard_release(&dword_60C81104);
  }
  v2 = 0;
  if ( v0 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v0)(v0, &dword_60C81100) == 1 && FIELD_U32(v0, 15240) >= 4u )
    {
      v3 = (StateMgr *)(v0 + 6084);
      CurrentState = StateMgr__getCurrentState(v3);
      v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      v2 = 1;
      if ( v5 != (*(int (**)(void))(dword_60C82060 + 8))() )
      {
        v6 = StateMgr__getCurrentState(v3);
        v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
        return v7 == (*(int (**)(void))(dword_60C82080 + 8))();
      }
    }
  }
  return v2;
}
