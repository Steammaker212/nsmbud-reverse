/* sub_601436DC
 * address: 0x601436DC   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601436DC(Actor *a1)
{
  ActiveCollider *p_movementId; // r5
  Actor *v3; // r0

  FIELD_U32(a1, 0x0) = (int)off_60BD3758;
  p_movementId = (ActiveCollider *)&a1[80].movementId;
  sub_60026BFC(&a1[84].settings1);
  FIELD_U32(a1, 0x0) = (int)off_60BD3600;
  ActiveCollider_dtor(p_movementId);
  LightSource__dtor(&a1[79].field_20.next);
  a1[78].profile = (Profile *)EffectWrapper_vtable;
  sub_60237560((int)&a1[78].profile);
  sead__IDisposer__dtor(&a1[78].profile);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor(&FIELD_U32(a1 + (8) * 80, 0x8));
  v3 = StageActor__dtor(a1);
  operator_delete(v3);
}
