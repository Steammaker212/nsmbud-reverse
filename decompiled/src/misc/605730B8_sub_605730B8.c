/* sub_605730B8
 * address: 0x605730B8   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605730B8(int a1)
{
  StateMgr *v1; // r4
  StateBase *CurrentState; // r0
  int v3; // r5
  StateBase *v5; // r0
  int v6; // r4

  v1 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60CB111C + 8))() )
    return 1;
  v5 = StateMgr__getCurrentState(v1);
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
  return v6 == (*(int (**)(void))(dword_60CAE2F8 + 8))();
}
