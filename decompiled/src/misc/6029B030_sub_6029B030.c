/* sub_6029B030
 * address: 0x6029B030   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_6029B030(int a1, float a2, float a3)
{
  ActiveCollider *v6; // r5
  ActiveColliderMgr *v7; // r6
  ActiveColliderMgr *v8; // r6
  ActiveColliderMgr *v9; // r7
  ActiveCollider *v10; // r6
  ActiveCollider *v11; // r1
  ActiveColliderMgr *v12; // r4
  ActiveColliderMgr *result; // r0

  v6 = (ActiveCollider *)(a1 + 188);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE1090, 0);
  v7 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v6) && !ActiveColliderMgr_isInCreateList(v7, v6) )
    ActiveColliderMgr_addToCreateList(v7, v6);
  ActiveCollider__init((ActiveCollider *)(a1 + 6360), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE1090, 0);
  FIELD_F32(a1, 6476) = a2 + 0.0;
  FIELD_F32(a1, 6480) = a3 + 16.0;
  v8 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6360))
    && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 6360)) )
  {
    ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(a1 + 6360));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 6860), (StageActor *)a1, &stru_60AFE180, a1 + 6844);
  v9 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6860))
    && !ActiveColliderMgr_isInCreateList(v9, (ActiveCollider *)(a1 + 6860)) )
  {
    ActiveColliderMgr_addToCreateList(v9, (ActiveCollider *)(a1 + 6860));
  }
  v10 = (ActiveCollider *)(a1 + 7164);
  ActiveCollider__init((ActiveCollider *)(a1 + 7164), (StageActor *)a1, &stru_60AFE180, a1 + 6844);
  v11 = (ActiveCollider *)(a1 + 7164);
  v12 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v11);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v12, v10);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v12, v10);
  }
  return result;
}
