/* sub_6028CFF4
 * address: 0x6028CFF4   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6028CFF4(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( !FIELD_U8(a1, 536) )
  {
    CurrentState = StateMgr__getCurrentState(v2);
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      v5 = StateMgr__getCurrentState(v2);
      (*((void (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
      (*((void (**)(void))stru_60C908E4._._.vtable + 2))();
    }
  }
  skl_root_ref_28CEA4((unsigned int *)a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
