/* sub_603736AC
 * address: 0x603736AC   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603736AC(int a1)
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
  StateBase *v11; // r0
  int v12; // r4

  v1 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C96200 + 8))() )
    return 1;
  v4 = StateMgr__getCurrentState(v1);
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4);
  if ( v5 == (*(int (**)(void))(dword_60C96248 + 8))() )
    return 1;
  v6 = StateMgr__getCurrentState(v1);
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
  if ( v7 == (*(int (**)(void))(dword_60C9626C + 8))() )
    return 1;
  v8 = StateMgr__getCurrentState(v1);
  v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
  if ( v9 == (*(int (**)(void))(dword_60C96290 + 8))() )
    return 1;
  v11 = StateMgr__getCurrentState(v1);
  v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
  return v12 == (*(int (**)(void))(dword_60C96224 + 8))();
}
