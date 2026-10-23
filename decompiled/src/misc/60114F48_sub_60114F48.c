/* sub_60114F48
 * address: 0x60114F48   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60114F48(int a1)
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
  int v16; // r5

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C84148 + 8))() )
    goto LABEL_13;
  v5 = StateMgr__getCurrentState(v2);
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
  if ( v6 == (*(int (**)(void))(dword_60C869C4 + 8))() )
    goto LABEL_13;
  v7 = StateMgr__getCurrentState(v2);
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
  if ( v8 == (*(int (**)(void))(dword_60C86AA4 + 8))()
    || (v9 = StateMgr__getCurrentState(v2),
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9),
        v10 == (*(int (**)(void))(dword_60C869E4 + 8))())
    || (v11 = StateMgr__getCurrentState(v2),
        v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11),
        v12 == (*(int (**)(void))(dword_60C86A04 + 8))())
    || (v13 = StateMgr__getCurrentState(v2),
        v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13),
        v14 == (*(int (**)(void))(dword_60C86A24 + 8))()) )
  {
LABEL_13:
    if ( sub_60115118() == 1 )
    {
      v15 = StateMgr__getCurrentState(v2);
      v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
      if ( v16 != (*(int (**)(void))(dword_60C869A4 + 8))() )
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C869A4);
    }
  }
  BowserJrBase__onExecute(a1);
  return 1;
}
