/* sub_6060E48C
 * address: 0x6060E48C   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6060E48C(int a1, int a2)
{
  char v2; // r12
  StateBase *CurrentState; // r0
  int v6; // r7
  int ProfileId; // r0
  char v8; // r12
  bool v9; // zf
  bool v10; // zf

  if ( ((unsigned int)&dword_60C958D4 & ~(1616962728 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C958D4) )
  {
    dword_60C958D0 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C958D4);
  }
  if ( a1 )
  {
    if ( (**(int (__fastcall ***)(int, int *))a1)(a1, &dword_60C958D0) == 1 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v6 != (*(int (**)(void))(dword_60CB2F04 + 8))() )
      {
        ProfileId = Actor__getProfileId((Actor *)a2);
        v9 = ProfileId == 476;
        if ( ProfileId != 476 )
          v9 = ProfileId == 763;
        if ( v9 )
          goto LABEL_21;
        v10 = ProfileId == 477;
        if ( ProfileId != 477 )
          v10 = ProfileId == 478;
        if ( v10 || ProfileId == 561 )
          goto LABEL_21;
        if ( ProfileId == 558 )
        {
          if ( ((unsigned int)dword_60C87964 & ~(1616963024 << v8) & 1) == 0 && _cxa_guard_acquire(dword_60C87964) )
          {
            dword_60C87960 = (int)&off_60BC00E0;
            _cxa_guard_release(dword_60C87964);
          }
          if ( a2 && (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C87960) == 1 && FIELD_U8(a2, 6148) )
          {
LABEL_21:
            StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB2F04);
            FIELD_U32(a1, 6784) = 1;
          }
        }
      }
    }
  }
}
