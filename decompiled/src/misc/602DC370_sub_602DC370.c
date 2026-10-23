/* sub_602DC370
 * address: 0x602DC370   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602DC370(int a1)
{
  StateMgr *v2; // r6
  StateBase *CurrentState; // r0
  int v4; // r7
  int v5; // r5
  StateBase *v6; // r0
  int v7; // r7
  StateBase *v8; // r0
  int v9; // r7
  StateBase *v10; // r0
  int v11; // r6

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v5 = 1;
  if ( v4 != (*(int (**)(void))(dword_60C91C88 + 8))() )
  {
    v6 = StateMgr__getCurrentState(v2);
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    if ( v7 != (*(int (**)(void))(dword_60C91CA8 + 8))() )
    {
      v8 = StateMgr__getCurrentState(v2);
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
      if ( v9 != (*(int (**)(void))(dword_60C91CC8 + 8))() )
      {
        v10 = StateMgr__getCurrentState(v2);
        v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
        if ( v11 == (*(int (**)(void))(dword_60C91D08 + 8))() )
          return FIELD_U8(a1, 6309) != 0;
        return 0;
      }
    }
  }
  return v5;
}
