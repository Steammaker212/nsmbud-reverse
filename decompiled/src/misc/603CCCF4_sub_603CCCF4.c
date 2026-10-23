/* sub_603CCCF4
 * address: 0x603CCCF4   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603CCCF4(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  int v5; // r4
  StateBase *v6; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r6
  StateBase *v10; // r0
  int v11; // r6
  StateBase *v12; // r0
  int v13; // r5

  if ( FIELD_U32(a1, 6300) )
    return 0;
  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v5 = 1;
  if ( v4 != (*(int (**)(void))(dword_60C9894C + 8))() )
  {
    v6 = StateMgr__getCurrentState(v2);
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    if ( v7 != (*(int (**)(void))(dword_60C9896C + 8))() )
    {
      v8 = StateMgr__getCurrentState(v2);
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
      if ( v9 != (*(int (**)(void))(dword_60C9898C + 8))() )
      {
        v10 = StateMgr__getCurrentState(v2);
        v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
        if ( v11 != (*(int (**)(void))(dword_60C989AC + 8))() )
        {
          v12 = StateMgr__getCurrentState(v2);
          v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
          return v13 == (*(int (**)(void))(dword_60C989CC + 8))();
        }
      }
    }
  }
  return v5;
}
