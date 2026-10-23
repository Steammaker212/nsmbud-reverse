/* sub_605F59EC
 * address: 0x605F59EC   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F59EC(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r5
  int v5; // r0

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60CB21E0 + 8))() )
  {
    sub_6000F338(a1 + 6188);
    StateMgr__execute((StateMgr *)(a1 + 6208));
    v5 = FIELD_U32(a1, 6292);
    FIELD_U32(a1, 108) = FIELD_U32(a1, 6288);
    FIELD_U32(a1, 112) = v5;
  }
  StarCoinBase_updateModel((ModelWrapper **)a1);
  if ( Actor__getProfileId((Actor *)a1) != 428 )
    StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
