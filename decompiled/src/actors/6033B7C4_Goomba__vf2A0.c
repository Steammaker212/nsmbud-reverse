/* Goomba__vf2A0
 * address: 0x6033B7C4   size: 72   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033E5C8
// 
// Overridden by: None
bool __fastcall Goomba__vf2A0(int a1)
{
  StateBase *CurrentState; // r0
  int v2; // r4

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v2 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  return v2 == (*(int (**)(void))(dword_60C943BC + 8))();
}
