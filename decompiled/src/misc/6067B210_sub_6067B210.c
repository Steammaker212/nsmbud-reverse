/* sub_6067B210
 * address: 0x6067B210   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067B210(int a1, int a2)
{
  int v2; // r0
  StateMgr *v3; // r4
  StateBase *CurrentState; // r0
  int v5; // r5

  v2 = FIELD_U32(a2, 144);
  if ( !FIELD_U16(v2, 8124) )
  {
    FIELD_U16(v2, 8124) = 24;
    v3 = (StateMgr *)(v2 + 6084);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v2 + 6084));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v5 == (*(int (**)(void))(dword_60CB7E58 + 8))() )
      StateMgr__changeState(v3, (StateBase *)&dword_60CB7E78);
  }
  return 1;
}
