/* SumoBrosBoss__vf380
 * address: 0x600320C8   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600268F8
// 
// Overridden by: None
bool __fastcall SumoBrosBoss__vf380(int a1)
{
  StateMgr *v2; // r6
  StateBase *CurrentState; // r0
  int v4; // r7
  int v5; // r5
  StateBase *v6; // r0
  int v7; // r6

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v5 = 1;
  if ( v4 != (*(int (**)(void))(dword_60C7F908 + 8))() )
  {
    v6 = StateMgr__getCurrentState(v2);
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    if ( v7 == (*(int (**)(void))(dword_60C7F928 + 8))() )
      return FIELD_U8(a1, 7427) == 0;
    return 0;
  }
  return v5;
}
