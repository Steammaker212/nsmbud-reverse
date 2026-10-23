/* KoopalingBase__isOnGround
 * address: 0x600B1B64   size: 164   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60025AB4
// 
// Overridden by:
//   - 0x6009E3CC : Iggy
bool __fastcall KoopalingBase__isOnGround(BossBase *a1)
{
  int v2; // r4
  ActiveColliderMgr *v3; // r6
  StateBase *CurrentState; // r0
  int v5; // r5

  v2 = 0;
  if ( BossBase__isOnGround(a1) == 1 )
  {
    v3 = ActiveColliderMgr_instance;
    if ( (ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, &FIELD_U32(a1, 0xBC))
       || ActiveColliderMgr_isInCreateList(v3, &FIELD_U32(a1, 0xBC)) == 1)
      && (a1[1]._._._._.playerId & 2) == 0 )
    {
      CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4));
      v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      return v5 != (*(int (**)(void))(dword_60C8341C + 8))();
    }
  }
  return v2;
}
