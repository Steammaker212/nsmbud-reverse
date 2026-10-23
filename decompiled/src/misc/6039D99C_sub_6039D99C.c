/* sub_6039D99C
 * address: 0x6039D99C   size: 584   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039D99C(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r6
  StateBase *v9; // r0
  int v10; // r6
  StateBase *v11; // r0
  int v12; // r6
  StateBase *v13; // r0
  int v14; // r6
  StateBase *v15; // r0
  int v16; // r6
  StateBase *v17; // r0
  int v18; // r6
  StateBase *v19; // r0
  int v20; // r6
  StateBase *v21; // r0
  int v22; // r5
  int result; // r0

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C971A0 + 8))() )
    goto LABEL_11;
  v5 = StateMgr__getCurrentState(v2);
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
  if ( v6 == (*(int (**)(void))(dword_60C97600 + 8))() )
    goto LABEL_11;
  v7 = StateMgr__getCurrentState(v2);
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
  if ( v8 == (*(int (**)(void))(dword_60C971C0 + 8))() )
    goto LABEL_11;
  v9 = StateMgr__getCurrentState(v2);
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
  if ( v10 == (*(int (**)(void))(dword_60C971E0 + 8))() )
    goto LABEL_11;
  v11 = StateMgr__getCurrentState(v2);
  v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
  if ( v12 == (*(int (**)(void))(dword_60C97200 + 8))() )
    goto LABEL_11;
  v13 = StateMgr__getCurrentState(v2);
  v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
  if ( v14 == (*(int (**)(void))(dword_60C97620 + 8))() )
    goto LABEL_11;
  v15 = StateMgr__getCurrentState(v2);
  v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
  if ( v16 == (*(int (**)(void))(dword_60C97640 + 8))()
    || (v17 = StateMgr__getCurrentState(v2),
        v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17),
        v18 == (*(int (**)(void))(dword_60C975A0 + 8))())
    || (v19 = StateMgr__getCurrentState(v2),
        v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v19, 0x0) + 2))(v19),
        v20 == (*(int (**)(void))(dword_60C975C0 + 8))())
    || (v21 = StateMgr__getCurrentState(v2),
        v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v21, 0x0) + 2))(v21),
        result = (*(int (**)(void))(dword_60C975E0 + 8))(),
        v22 == result) )
  {
LABEL_11:
    StateMgr__changeState((StateMgr *)(a1 + 6496), (StateBase *)&dword_60C96570);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C97460);
  }
  return result;
}
