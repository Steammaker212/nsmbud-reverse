/* sub_6057A244
 * address: 0x6057A244   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_6057A244(int a1, int a2)
{
  ColliderBase *v3; // r4
  ColliderListNode *result; // r0

  FIELD_U32(a1, 6776) = -1056964608;
  FIELD_U32(a1, 6780) = 1090519040;
  FIELD_U32(a1, 6784) = 1090519040;
  FIELD_U32(a1, 6788) = -1059061760;
  v3 = (ColliderBase *)(a1 + 6120);
  ShapedCollider_init((ShapedCollider *)(a1 + 6120), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CAEDDC);
  result = (ColliderListNode *)ColliderBase_setType(v3, 1);
  if ( a2 == 1 )
    return ColliderMgr_add(ColliderMgr_instance, v3);
  return result;
}
