/* sub_601420D4
 * address: 0x601420D4   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601420D4(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5
  StateBase *CurrentState; // r0
  int v6; // r6

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C823D4 & ~(1611931884 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C823D4) )
  {
    dword_60C823D0 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C823D4);
  }
  v4 = 0;
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C823D0) == 1 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      v4 = 1;
      if ( v6 != (*(int (**)(void))(dword_60C87DEC + 8))() )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 240))(v3);
    }
  }
  return v4;
}
