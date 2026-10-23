/* sub_6008A9F8
 * address: 0x6008A9F8   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6008A9F8(BossBase *a1)
{
  StateBase *CurrentState; // r0
  int v3; // r7

  CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0)._.states.manager);
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C81D4C + 8))() )
  {
    (*(void (__fastcall **)(BossBase *, int *))(FIELD_U32(a1, 0x0)._._._._.vtable + 192))(a1, &dword_60C81D6C);
    FIELD_U32(a1, 0x0)._._._.playerId = -1;
  }
  return BossBase__collisionIceball(a1);
}
