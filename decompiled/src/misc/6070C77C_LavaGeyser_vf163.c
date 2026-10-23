/* LavaGeyser_vf163
 * address: 0x6070C77C   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall LavaGeyser_vf163(StageActor *a1)
{
  ActiveCollider *p_aCollider; // r5
  ActiveColliderMgr *v3; // r6
  ActiveColliderMgr *v4; // r6
  ActiveCollider *v5; // r5
  ActiveCollider *v6; // r1
  ActiveColliderMgr *v7; // r4
  ActiveColliderMgr *result; // r0

  p_aCollider = &FIELD_U32(a1, 0xBC);
  ActiveCollider__init(&FIELD_U32(a1, 0xBC), a1, (ActiveColliderInfo *)&unk_60C21348, 0);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, p_aCollider)
    && !ActiveColliderMgr_isInCreateList(v3, p_aCollider) )
  {
    ActiveColliderMgr_addToCreateList(v3, p_aCollider);
  }
  ActiveCollider__init((ActiveCollider *)&a1[9].field_260, a1, (ActiveColliderInfo *)&unk_60C21348, 0);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)&a1[9].field_260)
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)&a1[9].field_260) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)&a1[9].field_260);
  }
  v5 = (ActiveCollider *)&a1[10].aCollider.field_50;
  ActiveCollider__init((ActiveCollider *)&a1[10].aCollider.field_50, a1, (ActiveColliderInfo *)&unk_60C21348, 0);
  v6 = (ActiveCollider *)&a1[10].aCollider.field_50;
  v7 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v6);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v7, v5);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v7, v5);
  }
  return result;
}
