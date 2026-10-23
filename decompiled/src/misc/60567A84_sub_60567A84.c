/* sub_60567A84
 * address: 0x60567A84   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60567A84(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r5

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  FIELD_F32(a1, 112) = FIELD_F32(a1, 6984) + FIELD_F32(a1, 6796);
  ShapedCollider_execute((ColliderBase *)(a1 + 6120));
  block_cloud_model_ref(a1);
  sub_605B2D70(a1);
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60CAE484 + 8))() )
    StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
