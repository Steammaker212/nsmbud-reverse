/* sub_6027D0D4
 * address: 0x6027D0D4   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6027D0D4(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  StateBase *CurrentState; // r0
  int v5; // r5

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)dword_60C83108 & ~(1613222124 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C83108) )
  {
    dword_60C83104 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C83108);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C83104) == 1 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v5 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
      sub_602A3EFC(v3 + 9288, 24);
    sub_6027D1CC(v3);
  }
  return 1;
}
