/* FinalBowser__isOnGround
 * address: 0x600726D8   size: 120   group: misc
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
int __fastcall FinalBowser__isOnGround(int a1)
{
  ActiveColliderMgr *v2; // r6

  if ( (FIELD_U8(a1, 7144) & 2) == 0
    && FIELD_S32(a1, 6300) >= 1
    && ((v2 = ActiveColliderMgr_instance,
         ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 10660)))
     || ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 10660)) == 1) )
  {
    return BossBase__isOnGround((BossBase *)a1);
  }
  else
  {
    return 0;
  }
}
