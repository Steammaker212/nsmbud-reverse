/* sub_6034891C
 * address: 0x6034891C   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6034891C(int a1)
{
  StateMgr *v1; // r4
  StateBase *CurrentState; // r0
  int v3; // r5
  StateBase *v4; // r0
  int v5; // r5
  StateBase *v6; // r0
  int v7; // r5
  StateBase *v8; // r0
  int v9; // r5
  StateBase *v10; // r0
  int v11; // r5
  StateBase *v13; // r0
  int v14; // r4

  v1 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C94948 + 8))() )
    return 1;
  v4 = StateMgr__getCurrentState(v1);
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4);
  if ( v5 == (*(int (**)(void))(dword_60C94968 + 8))() )
    return 1;
  v6 = StateMgr__getCurrentState(v1);
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
  if ( v7 == (*(int (**)(void))(dword_60C949AC + 8))() )
    return 1;
  v8 = StateMgr__getCurrentState(v1);
  v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
  if ( v9 == (*(int (**)(void))(dword_60C94988 + 8))() )
    return 1;
  v10 = StateMgr__getCurrentState(v1);
  v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
  if ( v11 == (*(int (**)(void))(dword_60C949D0 + 8))() )
    return 1;
  v13 = StateMgr__getCurrentState(v1);
  v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
  return v14 == (*(int (**)(void))(dword_60C949F0 + 8))();
}
