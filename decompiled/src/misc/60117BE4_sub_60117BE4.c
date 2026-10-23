/* sub_60117BE4
 * address: 0x60117BE4   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_60117BE4(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r6
  ActiveColliderMgr *v6; // r5

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    ActiveColliderMgr_addToCreateList(v3, v2);
  }
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7824))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 7824)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 7824));
  }
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7348))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 7348)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 7348));
  }
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8128))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 8128)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 8128));
  }
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6336));
  return ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 8432));
}
