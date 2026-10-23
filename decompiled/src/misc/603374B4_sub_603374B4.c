/* sub_603374B4
 * address: 0x603374B4   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603374B4(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r4
  StateMgr *v4; // r4
  StateBase *CurrentState; // r0
  int v6; // r5
  StateBase *v7; // r0
  int v8; // r5

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C94244 & ~(1613984972 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C94244) )
  {
    dword_60C94240 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C94244);
  }
  if ( v3 )
  {
    if ( (**v3)(v3, &dword_60C94240) == 1 )
    {
      sub_602A3EFC((int)(v3 + 1734), 24, 0.0625);
      v4 = (StateMgr *)(v3 + 1521);
      CurrentState = StateMgr__getCurrentState(v4);
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v6 == (*(int (**)(void))(dword_60C9419C + 8))()
        || (v7 = StateMgr__getCurrentState(v4),
            v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7),
            v8 == (*(int (**)(void))(dword_60C941BC + 8))()) )
      {
        StateMgrExt_changeState(v4, &stru_60C941FC);
      }
    }
  }
  return 1;
}
