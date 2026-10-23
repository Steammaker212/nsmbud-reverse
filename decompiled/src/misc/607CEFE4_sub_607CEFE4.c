/* sub_607CEFE4
 * address: 0x607CEFE4   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607CEFE4(int a1)
{
  int v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r6

  v2 = 0;
  if ( sub_60769BBC(a1) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 11404));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 == (*(int (**)(void))(dword_60CC5398 + 8))() )
      return 1;
    return sub_607CFB50(a1) == 0;
  }
  return v2;
}
