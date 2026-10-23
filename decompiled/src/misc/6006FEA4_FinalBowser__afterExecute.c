/* FinalBowser__afterExecute
 * address: 0x6006FEA4   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60024D88
// 
// Overridden by: None
int __fastcall FinalBowser__afterExecute(int a1, int a2)
{
  StateBase *CurrentState; // r0
  int v5; // r6
  int v6; // r1

  sub_607FC9EC(dword_60CC6484, FIELD_F32(a1, 108));
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v5 == (*(int (**)(void))(dword_60C814EC + 8))() )
    sub_607FC9F4(dword_60CC6484, FIELD_F32(a1, 7400));
  sub_6006FF54(a1);
  v6 = FIELD_U32(a1, 25380);
  if ( v6 >= 1 )
    FIELD_U32(a1, 25380) = v6 - 1;
  return BossBase__afterExecute((BossBase *)a1, a2);
}
