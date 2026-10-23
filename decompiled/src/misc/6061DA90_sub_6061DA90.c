/* sub_6061DA90
 * address: 0x6061DA90   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6061DA90(int (__fastcall ***a1)(_DWORD, int *), int a2)
{
  char v2; // r12
  StateMgr *v5; // r5
  StateBase *CurrentState; // r0
  int v7; // r6
  int ProfileId; // r0
  char v9; // r12
  bool v10; // zf
  bool v11; // zf

  if ( ((unsigned int)&dword_60CB3680 & ~(1617025708 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3680) )
  {
    dword_60CB367C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB3680);
  }
  if ( a1 )
  {
    if ( (**a1)(a1, &dword_60CB367C) == 1 )
    {
      v5 = (StateMgr *)(a1 + 1521);
      CurrentState = StateMgr__getCurrentState(v5);
      v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v7 != (*(int (**)(void))(dword_60CB3644 + 8))() )
      {
        ProfileId = Actor__getProfileId((Actor *)a2);
        v10 = ProfileId == 476;
        if ( ProfileId != 476 )
          v10 = ProfileId == 763;
        if ( v10 )
          goto LABEL_23;
        v11 = ProfileId == 477;
        if ( ProfileId != 477 )
          v11 = ProfileId == 478;
        if ( v11 || ProfileId == 561 )
          goto LABEL_23;
        if ( ProfileId == 558 )
        {
          if ( ((unsigned int)dword_60C87964 & ~(1617026004 << v9) & 1) == 0 && _cxa_guard_acquire(dword_60C87964) )
          {
            dword_60C87960 = (int)&off_60BC00E0;
            _cxa_guard_release(dword_60C87964);
          }
          if ( a2 && (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C87960) == 1 && FIELD_U8(a2, 6148) )
LABEL_23:
            StateMgr__changeState(v5, (StateBase *)&dword_60CB3644);
        }
      }
    }
  }
}
