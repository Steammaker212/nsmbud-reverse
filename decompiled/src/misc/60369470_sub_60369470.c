/* sub_60369470
 * address: 0x60369470   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60369470(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5
  int v7; // r1
  ActorScaler *v8; // r0
  int v9; // s2

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60C95CF8 + 8))() )
  {
    v5 = StateMgr__getCurrentState(v2);
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
    v7 = (*(int (**)(void))(dword_60C95D98 + 8))();
    v8 = (ActorScaler *)(a1 + 6536);
    if ( v6 == v7 )
    {
      FIELD_U32(a1, 6560) = 0;
      FIELD_F64(a1, 6540) = ((double (__fastcall *)(ActorScaler *))*(_DWORD *)FIELD_U32(v8, 0x0))(v8);
      FIELD_U32(a1, 6548) = v9;
    }
    else
    {
      ActorScaler_execute(v8);
    }
    sub_60369198(a1);
    skl_root_ref_36958C(a1);
    skl_root_ref_36968C(a1);
    if ( sub_60003AE0((StageActor *)a1) == 1 )
      SE_EMY_DOWN_ref_2A7624(a1);
    StageActor__cullCheck((StageActor *)a1, 0);
  }
  return 1;
}
