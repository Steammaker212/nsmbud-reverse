/* sub_6024A160
 * address: 0x6024A160   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024A160(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5
  StateBase *CurrentState; // r0
  int v6; // r6

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C8DCF4 & ~(1613013368 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DCF4) )
  {
    dword_60C8DCF0 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C8DCF4);
  }
  v4 = 0;
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C8DCF0) == 1 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      v4 = 1;
      if ( v6 == (*(int (**)(void))(dword_60C8DC8C + 8))() )
      {
        v4 = 1;
        FIELD_U8(v3, 6338) = 1;
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)v3 + 192))(v3, &dword_60C8DCAC);
      }
    }
  }
  return v4;
}
