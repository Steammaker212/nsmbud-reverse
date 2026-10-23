/* sub_602AEF18
 * address: 0x602AEF18   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_602AEF18(int a1, int a2, int a3)
{
  ActiveCollider *v3; // r4
  ActiveColliderMgr *v4; // r5
  ActiveColliderMgr *result; // r0

  FIELD_U32(a1, 332) = a2;
  FIELD_U32(a1, 336) = a3;
  v3 = (ActiveCollider *)(a1 + 28);
  FIELD_U32(a1, 4) = FIELD_U32(a2, 108);
  FIELD_U32(a1, 8) = FIELD_U32(a2, 112);
  FIELD_F32(a1, 12) = FIELD_F32(a2, 116) + (float)((float)(a3 + 1) * -16.0);
  FIELD_U32(a1, 16) = 1065353216;
  FIELD_U32(a1, 20) = 1065353216;
  FIELD_U32(a1, 24) = 1065353216;
  ActiveCollider__init((ActiveCollider *)(a1 + 28), (StageActor *)a2, (ActiveColliderInfo *)&unk_60BE3554, 0);
  v4 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v3);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v4, v3);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v4, v3);
  }
  return result;
}
