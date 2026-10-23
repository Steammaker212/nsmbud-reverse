/* sub_6057EB88
 * address: 0x6057EB88   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057EB88(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r5
  int v5; // r1

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60CAED48 + 8))() )
  {
    v5 = dword_60CC6484;
    FIELD_F32(a1, 108) = FIELD_F32(a1, 7484) + FIELD_F32(dword_60CC6484, 112);
    FIELD_F32(a1, 112) = (float)(FIELD_F32(a1, 7488) + FIELD_F32(v5, 124)) + FIELD_F32(a1, 6796);
  }
  FIELD_U32(a1, 6364) = FIELD_U32(a1, 164);
  ShapedCollider_execute((ColliderBase *)(a1 + 6120));
  sub_605B2D70(a1);
  FIELD_U32(a1, 7372) = 2;
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
