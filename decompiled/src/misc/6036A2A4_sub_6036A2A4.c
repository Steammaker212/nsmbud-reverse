/* sub_6036A2A4
 * address: 0x6036A2A4   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6036A2A4(int a1)
{
  _BOOL4 result; // r0
  StateBase *CurrentState; // r0
  int v4; // r4

  result = 0;
  if ( (FIELD_U8(a1, 2872) & 1) != 0 && (FIELD_U8(a1, 6312) & 0x10) == 0 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    return v4 != (*(int (**)(void))(dword_60C95D98 + 8))();
  }
  return result;
}
