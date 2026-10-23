/* sub_6034C3B0
 * address: 0x6034C3B0   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6034C3B0(int a1)
{
  int v2; // r2
  _BOOL4 result; // r0
  StateBase *CurrentState; // r0
  int v5; // r4

  v2 = FIELD_U32(a1, 6820);
  result = 0;
  if ( v2 != 1 && !FIELD_U8(a1, 6392) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    return v5 == (*(int (**)(void))(dword_60C8EA94 + 8))();
  }
  return result;
}
