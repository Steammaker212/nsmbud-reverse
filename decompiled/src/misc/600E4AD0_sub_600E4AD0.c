/* sub_600E4AD0
 * address: 0x600E4AD0   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E4AD0(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r4
  int v4; // r5
  StateMgr *v5; // r4
  StateBase *CurrentState; // r0
  int v7; // r6

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C84B5C & ~(1611549416 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B5C) )
  {
    dword_60C84B58 = (int)&off_60BCCA60;
    _cxa_guard_release(&dword_60C84B5C);
  }
  v4 = 0;
  if ( v3 )
  {
    if ( (**v3)(v3, &dword_60C84B58) == 1 )
    {
      v5 = (StateMgr *)(v3 + 1521);
      CurrentState = StateMgr__getCurrentState(v5);
      v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      v4 = 1;
      if ( v7 != (*(int (**)(void))(dword_60C84F48 + 8))() )
        StateMgr__changeState(v5, (StateBase *)&dword_60C84F48);
    }
  }
  return v4;
}
