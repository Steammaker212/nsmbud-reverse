/* sub_602B46E4
 * address: 0x602B46E4   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602B46E4(int a1)
{
  StateMgr *v1; // r4
  StateBase *CurrentState; // r0
  int v3; // r6
  int v4; // r5
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r6
  StateBase *v9; // r0
  int v10; // r6
  StateBase *v11; // r0
  int v12; // r4

  v1 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v4 = 1;
  if ( v3 != (*(int (**)(void))(dword_60C90D70 + 8))() )
  {
    v5 = StateMgr__getCurrentState(v1);
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
    if ( v6 != (*(int (**)(void))(dword_60C90D90 + 8))() )
    {
      v7 = StateMgr__getCurrentState(v1);
      v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
      if ( v8 != (*(int (**)(void))(dword_60C90DB0 + 8))() )
      {
        v9 = StateMgr__getCurrentState(v1);
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
        if ( v10 != (*(int (**)(void))(dword_60C90DF0 + 8))() )
        {
          v11 = StateMgr__getCurrentState(v1);
          v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
          return v12 == (*(int (**)(void))(dword_60C90DD0 + 8))();
        }
      }
    }
  }
  return v4;
}
