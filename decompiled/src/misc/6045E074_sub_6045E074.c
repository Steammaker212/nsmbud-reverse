/* sub_6045E074
 * address: 0x6045E074   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6045E074(Actor *a1)
{
  ActiveCollider *p_profile; // r5
  int *v3; // r6
  Actor *v4; // r0

  FIELD_U32(a1, 0x0) = (int)off_60BFB65C;
  p_profile = (ActiveCollider *)&a1[79].profile;
  a1[83].field_2C = (int)EffectWrapper_vtable;
  v3 = &a1[83].field_2C;
  sub_60237560((int)&a1[83].field_2C);
  sead__IDisposer__dtor(v3);
  ActiveCollider_dtor(p_profile);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)&FIELD_U32(a1 + (8) * 80, 0x8));
  v4 = StageActor__dtor(a1);
  operator_delete(v4);
}
