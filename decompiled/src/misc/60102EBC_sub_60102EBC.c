/* sub_60102EBC
 * address: 0x60102EBC   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60102EBC(int a1)
{
  StateMgr *v1; // r4
  StateBase *CurrentState; // r0
  int v3; // r6
  int v4; // r5
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r4

  v1 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v4 = 0;
  if ( v3 != (*(int (**)(void))(dword_60C85FB4 + 8))() )
  {
    v5 = StateMgr__getCurrentState(v1);
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
    if ( v6 != (*(int (**)(void))(dword_60C85FD8 + 8))() )
    {
      v7 = StateMgr__getCurrentState(v1);
      v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
      return v8 != (*(int (**)(void))(dword_60C84274 + 8))();
    }
  }
  return v4;
}
