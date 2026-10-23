/* sub_60659B5C
 * address: 0x60659B5C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60659B5C(Actor *a1)
{
  ColliderBase *p_id; // r5
  int *p_settings1; // r6
  Actor *v4; // r0

  FIELD_U32(a1, 0x0) = (int)off_60C14738;
  p_id = (ColliderBase *)&a1[78].id;
  a1[84].settings1 = (int)off_60BF144C;
  p_settings1 = &a1[84].settings1;
  sub_603797F8((int)&a1[84].settings1);
  sead__IDisposer__dtor(p_settings1);
  SolidOnTopCollider_dtor(p_id);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)&a1[8].id);
  v4 = StageActor__dtor(a1);
  operator_delete(v4);
}
