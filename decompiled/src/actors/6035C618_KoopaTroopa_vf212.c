/* KoopaTroopa_vf212
 * address: 0x6035C618   size: 240   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall KoopaTroopa_vf212(int a1)
{
  StateMgr *v1; // r4
  StateBase *CurrentState; // r0
  int v3; // r5
  StateBase *v4; // r0
  int v5; // r5
  StateBase *v6; // r0
  int v7; // r5
  StateBase *v9; // r0
  int v10; // r4

  v1 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*((int (**)(void))KoopaTroopa_StateID_Walk._.vtable + 2))() )
    return 1;
  v4 = StateMgr__getCurrentState(v1);
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4);
  if ( v5 == (*((int (**)(void))KoopaTroopa_StateID_Turn._.vtable + 2))() )
    return 1;
  v6 = StateMgr__getCurrentState(v1);
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
  if ( v7 == (*((int (**)(void))KoopaTroopa_StateID_BgmDance._.vtable + 2))() )
    return 1;
  v9 = StateMgr__getCurrentState(v1);
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
  return v10 == (*(int (**)(void))(dword_60C953A8 + 8))();
}
