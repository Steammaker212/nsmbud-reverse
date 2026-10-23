/* sub_603E133C
 * address: 0x603E133C   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E133C(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r6
  ActiveColliderMgr *v6; // r5
  ActiveColliderMgr *v7; // r5
  ActiveColliderMgr *v8; // r5

  v2 = (ActiveCollider *)(a1 + 188);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BF8C94, 0);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v2) && !ActiveColliderMgr_isInCreateList(v3, v2) )
    ActiveColliderMgr_addToCreateList(v3, v2);
  ActiveCollider__init((ActiveCollider *)(a1 + 7568), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BF8C94, 0);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7568))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 7568)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 7568));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 7872), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BF8C94, 0);
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7872))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 7872)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 7872));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 8352), (StageActor *)a1, &stru_60B01458, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 8656), (StageActor *)a1, &stru_60B01458, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 8960), (StageActor *)a1, &stru_60B01458, 0);
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8352))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 8352)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 8352));
  }
  v7 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8656))
    && !ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 8656)) )
  {
    ActiveColliderMgr_addToCreateList(v7, (ActiveCollider *)(a1 + 8656));
  }
  v8 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8960))
    && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 8960)) )
  {
    ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(a1 + 8960));
  }
  FIELD_U32(a1, 8464) = a1 + 9296;
  FIELD_U32(a1, 8768) = a1 + 9296;
  FIELD_U32(a1, 9072) = a1 + 9296;
  return a1 + 9296;
}
