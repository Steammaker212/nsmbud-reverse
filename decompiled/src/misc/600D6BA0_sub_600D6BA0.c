/* sub_600D6BA0
 * address: 0x600D6BA0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600D6BA0(Actor *a1)
{
  ColliderBase *p_settigns2; // r5
  Actor *v3; // r0

  FIELD_U32(a1, 0x0) = (int)off_60BCBB48;
  p_settigns2 = (ColliderBase *)&FIELD_U32(a1 + (8) * 80, 0x18);
  CollisionMgr_dtor(&a1[16].childCount);
  ShapedCollider_dtor(p_settigns2);
  v3 = StageActor__dtor(a1);
  operator_delete(v3);
}
