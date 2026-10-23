/* sub_600D6B60
 * address: 0x600D6B60   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_600D6B60(Actor *a1)
{
  ColliderBase *p_settigns2; // r5

  FIELD_U32(a1, 0x0) = (int)off_60BCBB48;
  p_settigns2 = (ColliderBase *)&a1[8].settigns2;
  CollisionMgr_dtor(&a1[16].childCount);
  ShapedCollider_dtor(p_settigns2);
  return StageActor__dtor(a1);
}
