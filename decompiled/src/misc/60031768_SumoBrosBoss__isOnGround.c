/* SumoBrosBoss__isOnGround
 * address: 0x60031768   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60025AB4
// 
// Overridden by: None
int __fastcall SumoBrosBoss__isOnGround(int a1)
{
  int v2; // r4
  ActiveColliderMgr *v4; // r6
  StateBase *CurrentState; // r0
  int v6; // r7
  StateBase *v7; // r0
  int v8; // r6

  v2 = 0;
  if ( FIELD_U8(a1, 6312) )
    return 0;
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) != 1 )
  {
    return 0;
  }
  if ( FIELD_S32(a1, 6300) < 1 )
    return 0;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 == (*(int (**)(void))(dword_60C7F908 + 8))() )
    return 0;
  v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
  if ( v8 != (*(int (**)(void))(dword_60C7F928 + 8))() )
    return FIELD_U8(a1, 2872) & 1;
  return v2;
}
