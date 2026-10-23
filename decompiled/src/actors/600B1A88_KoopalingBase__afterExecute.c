/* KoopalingBase__afterExecute
 * address: 0x600B1A88   size: 136   group: actors
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
int __fastcall KoopalingBase__afterExecute(BossBase *a1, int a2)
{
  int v4; // r1
  ActiveColliderMgr *v5; // r7

  if ( a2 == 2 )
  {
    v4 = a1[1]._._._._.aCollider.field_DC;
    if ( v4 >= 1 )
    {
      a1[1]._._._._.aCollider.field_DC = v4 - 1;
      (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0)._._._._.vtable + 1248))(a1);
    }
    v5 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)&a1[1]._._._._.field_5C);
    ActiveColldierMgr_removeFromCreateList(v5, (ActiveCollider *)&a1[1]._._._._.field_5C);
    ActiveColldierMgr_removeFromList3(v5, (int)&a1[1]._._._._.field_5C);
  }
  return BossBase__afterExecute(a1, a2);
}
