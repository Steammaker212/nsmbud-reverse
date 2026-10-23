/* sub_603099A0
 * address: 0x603099A0   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603099A0(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5
  StateBase *CurrentState; // r0
  int v6; // r7
  StateBase *v7; // r0
  int v8; // r6

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C92F04 & ~(1613797816 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F04) )
  {
    dword_60C92F00 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C92F04);
  }
  v4 = 0;
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C92F00) == 1 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      v4 = 1;
      if ( v6 != (*(int (**)(void))(dword_60C93008 + 8))() )
      {
        v7 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
        if ( v8 != (*(int (**)(void))(dword_60C93028 + 8))() )
        {
          FIELD_U32(v3, 6580) = 24;
          sub_602A3EFC(v3 + 6916, 24, 0.0625);
        }
      }
    }
  }
  return v4;
}
