/* SumoBrosBoss__vf374
 * address: 0x6003205C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600268E0
// 
// Overridden by: None
bool __fastcall SumoBrosBoss__vf374(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  return v3 != (*(int (**)(void))(dword_60C7F8C8 + 8))() || (unsigned __int8)(FIELD_U8(a1, 7427) - 1) > 1u;
}
