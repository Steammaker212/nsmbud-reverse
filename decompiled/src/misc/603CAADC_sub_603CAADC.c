/* sub_603CAADC
 * address: 0x603CAADC   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603CAADC(int a1)
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
  StateBase *v12; // r0
  int v13; // r5
  StateBase *v14; // r0
  int v15; // r5
  StateBase *v17; // r0
  int v18; // r4

  v1 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C9890C + 8))() )
    return 1;
  v4 = StateMgr__getCurrentState(v1);
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4);
  if ( v5 == (*(int (**)(void))(dword_60C9892C + 8))() )
    return 1;
  v6 = StateMgr__getCurrentState(v1);
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
  if ( v7 == (*(int (**)(void))(dword_60C9894C + 8))() )
    return 1;
  v8 = StateMgr__getCurrentState(v1);
  v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
  if ( v9 == (*(int (**)(void))(dword_60C9896C + 8))() )
    return 1;
  v10 = StateMgr__getCurrentState(v1);
  v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
  if ( v11 == (*(int (**)(void))(dword_60C98A74 + 8))() )
    return 1;
  v12 = StateMgr__getCurrentState(v1);
  v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
  if ( v13 == (*(int (**)(void))(dword_60C9898C + 8))() )
    return 1;
  v14 = StateMgr__getCurrentState(v1);
  v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14);
  if ( v15 == (*(int (**)(void))(dword_60C989AC + 8))() )
    return 1;
  v17 = StateMgr__getCurrentState(v1);
  v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17);
  return v18 == (*(int (**)(void))(dword_60C989CC + 8))();
}
