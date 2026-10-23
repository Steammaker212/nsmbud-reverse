/* BobOmb_vf94
 * address: 0x6025E91C   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_vf94(int a1, int a2)
{
  StateMgr *v4; // r6
  StateBase *CurrentState; // r0
  int v6; // r7
  int result; // r0
  StateBase *v8; // r0
  int v9; // r7
  StateBase *v10; // r0
  int v11; // r6

  v4 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C8E274 + 8))();
  if ( v6 != result )
  {
    v8 = StateMgr__getCurrentState(v4);
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
    result = (*(int (**)(void))(dword_60C8E2E0 + 8))();
    if ( v9 != result )
    {
      v10 = StateMgr__getCurrentState(v4);
      v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
      result = (*((int (**)(void))BobOmb_StateID_Kicked._._.vtable + 2))();
      if ( v11 != result )
        return Enemy__vf178(a1, a2);
    }
  }
  return result;
}
