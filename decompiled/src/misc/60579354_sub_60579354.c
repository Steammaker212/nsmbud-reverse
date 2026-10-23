/* sub_60579354
 * address: 0x60579354   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60579354(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r5

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_605791F0(a1);
  FIELD_U32(a1, 6364) = FIELD_U32(a1, 164);
  ShapedCollider_execute((ColliderBase *)(a1 + 6120));
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60CAECDC + 8))() )
    StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
