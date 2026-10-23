/* sub_606E2674
 * address: 0x606E2674   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606E2674(int (__fastcall ***a1)(_DWORD, int *), int a2)
{
  char v2; // r12
  int v4; // r0
  StateBase *CurrentState; // r0
  int v7; // r4

  if ( FIELD_U8(a2, 533) != 1 )
    return 0;
  if ( ((unsigned int)&dword_60C83FB4 & ~(1617831576 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C83FB4) )
  {
    dword_60C83FB0 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C83FB4);
  }
  if ( a1 )
  {
    v4 = (**a1)(a1, &dword_60C83FB0);
    if ( v4 )
      v4 = (int)a1;
  }
  else
  {
    v4 = 0;
  }
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  return v7 == (*(int (**)(void))(dword_60CBBDD4 + 8))();
}
