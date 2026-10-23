/* sub_605F2244
 * address: 0x605F2244   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F2244(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  StateBase *v9; // r0
  int v10; // r5

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60CAE2F8 + 8))() )
  {
    v5 = StateMgr__getCurrentState(v2);
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
    if ( v6 != (*(int (**)(void))(dword_60CB0534 + 8))() )
    {
      v7 = StateMgr__getCurrentState(v2);
      (*((void (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
      (*(void (**)(void))(dword_60CB0558 + 8))();
    }
  }
  StateMgr__execute(v2);
  sub_60003B2C(a1, a1 + 6120);
  sub_6057A200(a1);
  ShapedCollider_execute((ColliderBase *)(a1 + 6120));
  if ( FIELD_U8(a1, 7482) )
  {
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  else
  {
    v9 = StateMgr__getCurrentState(v2);
    v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
    if ( v10 != (*(int (**)(void))(dword_60CB2140 + 8))() )
      StageActor__cullCheck((StageActor *)a1, 0);
    sub_60579D4C(a1);
    return 1;
  }
}
