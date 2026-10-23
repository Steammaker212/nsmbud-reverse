/* Iggy__isOnGround
 * address: 0x6009E3CC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600B1B64
// 
// Overridden by: None
int __fastcall Iggy__isOnGround(int a1)
{
  ActiveColliderMgr *v3; // r5
  StateBase *CurrentState; // r0
  int v5; // r5

  if ( FIELD_U8(a1, 6312) )
    return 0;
  if ( FIELD_U8(a1, 6313) )
    return 0;
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 188)) != 1 )
  {
    return 0;
  }
  if ( (FIELD_U8(a1, 7176) & 2) != 0 )
    return 0;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v5 == (*(int (**)(void))(dword_60C8341C + 8))() )
    return 0;
  else
    return FIELD_U32(a1, 2872) & 1 | ((FIELD_U32(a1, 2872) & 0x10400) == 1024);
}
