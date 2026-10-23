/* sub_60149CE0
 * address: 0x60149CE0   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60149CE0(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r4
  int v4; // r5
  StateMgr *v5; // r4
  StateBase *CurrentState; // r0
  int v7; // r6

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C881F4 & ~(1611963640 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C881F4) )
  {
    dword_60C881F0 = (int)&off_60BD20C4;
    _cxa_guard_release(&dword_60C881F4);
  }
  v4 = 0;
  if ( v3 )
  {
    if ( (**v3)(v3, &dword_60C881F0) == 1 )
    {
      v5 = (StateMgr *)(v3 + 1521);
      CurrentState = StateMgr__getCurrentState(v5);
      v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      v4 = 1;
      if ( v7 == (*(int (**)(void))(dword_60C881B0 + 8))() )
        StateMgr__changeState(v5, (StateBase *)&dword_60C881D0);
    }
  }
  return v4;
}
