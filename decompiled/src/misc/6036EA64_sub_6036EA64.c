/* sub_6036EA64
 * address: 0x6036EA64   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6036EA64(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  StateBase *v4; // r0
  int v5; // r6
  StateBase *v6; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r6
  StateBase *v10; // r0
  int v11; // r5

  sub_602A3EFC(a1 + 6980, 24, 0.04);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C95F20 + 8))() )
    goto LABEL_6;
  v4 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4);
  if ( v5 == (*(int (**)(void))(dword_60C95F60 + 8))()
    || (v6 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6),
        v7 == (*(int (**)(void))(dword_60C95F80 + 8))())
    || (v8 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8),
        v9 == (*(int (**)(void))(dword_60C95FA0 + 8))())
    || (v10 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10),
        v11 == (*(int (**)(void))(dword_60C95FC0 + 8))()) )
  {
LABEL_6:
    SE_OBJ_POLTERGEIST_CRASH_ref(a1, 1);
  }
  return 1;
}
