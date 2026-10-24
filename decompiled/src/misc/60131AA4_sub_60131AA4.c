/* sub_60131AA4
 * address: 0x60131AA4   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60131AA4(Actor *a1)
{
  ActiveCollider *v2; // r5
  Actor *v3; // r0

  FIELD_U32(a1, 0x0) = (int)off_60BD1D60;
  v2 = (ActiveCollider *)&a1[78].field_2C;
  LightSource__dtor(&a1[82].field_20.next);
  ActiveCollider_dtor(v2);
  a1[76].field_20.previous = (sead_ListNode *)EffectWrapper_vtable;
  sub_60237560((int)&a1[76].field_20);
  sead__IDisposer__dtor(&a1[76].field_20.previous);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor(&FIELD_U32(a1 + (8) * 80, 0x8));
  v3 = StageActor__dtor(a1);
  operator_delete(v3);
}
