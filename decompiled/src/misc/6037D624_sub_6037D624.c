/* sub_6037D624
 * address: 0x6037D624   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037D624(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *v4; // r6

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    ActiveColliderMgr_addToCreateList(v3, v2);
  }
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6860))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 6860)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 6860));
  }
  FIELD_U32(a1, 6664) = 32;
  FIELD_U32(a1, 160) = dword_60C967CC;
  CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U8(a1, 7556) = 0;
  return 7556;
}
