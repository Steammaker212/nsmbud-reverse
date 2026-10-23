/* sub_600758EC
 * address: 0x600758EC   size: 956   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600758EC(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r6
  ActiveColliderMgr *v6; // r6
  ActiveColliderMgr *v7; // r6
  ActiveColliderMgr *v8; // r6
  ActiveColliderMgr *v9; // r6
  ActiveColliderMgr *v10; // r6
  ActiveColliderMgr *v11; // r6
  ActiveColliderMgr *v12; // r6
  ActiveColliderMgr *v13; // r6
  ActiveColliderMgr *v14; // r5

  v2 = (ActiveCollider *)(a1 + 7620);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7620))
    && !ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    ActiveColliderMgr_addToCreateList(v3, v2);
  }
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7924))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 7924)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 7924));
  }
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8228))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 8228)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 8228));
  }
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8532))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 8532)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 8532));
  }
  v7 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8836))
    && !ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 8836)) )
  {
    ActiveColliderMgr_addToCreateList(v7, (ActiveCollider *)(a1 + 8836));
  }
  v8 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 9140))
    && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 9140)) )
  {
    ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(a1 + 9140));
  }
  v9 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 9444))
    && !ActiveColliderMgr_isInCreateList(v9, (ActiveCollider *)(a1 + 9444)) )
  {
    ActiveColliderMgr_addToCreateList(v9, (ActiveCollider *)(a1 + 9444));
  }
  v10 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 9748))
    && !ActiveColliderMgr_isInCreateList(v10, (ActiveCollider *)(a1 + 9748)) )
  {
    ActiveColliderMgr_addToCreateList(v10, (ActiveCollider *)(a1 + 9748));
  }
  v11 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 10052))
    && !ActiveColliderMgr_isInCreateList(v11, (ActiveCollider *)(a1 + 10052)) )
  {
    ActiveColliderMgr_addToCreateList(v11, (ActiveCollider *)(a1 + 10052));
  }
  v12 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 10356))
    && !ActiveColliderMgr_isInCreateList(v12, (ActiveCollider *)(a1 + 10356)) )
  {
    ActiveColliderMgr_addToCreateList(v12, (ActiveCollider *)(a1 + 10356));
  }
  v13 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 10660))
    && !ActiveColliderMgr_isInCreateList(v13, (ActiveCollider *)(a1 + 10660)) )
  {
    ActiveColliderMgr_addToCreateList(v13, (ActiveCollider *)(a1 + 10660));
  }
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 23896));
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 24296));
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 24696));
  v14 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v14, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromList3(v14, a1 + 188);
  FIELD_U32(a1, 6844) = 1125122048;
  FIELD_U32(a1, 6848) = 1125122048;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF53F8, 2);
}
