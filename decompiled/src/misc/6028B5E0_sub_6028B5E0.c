/* sub_6028B5E0
 * address: 0x6028B5E0   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6028B5E0(Actor *a1)
{
  int *v2; // r5
  Actor *v3; // r0

  FIELD_U32(a1, 0x0) = (int)off_60BDE058;
  a1[80].field_34 = (int)EffectWrapper_vtable;
  v2 = &a1[80].field_34;
  sub_60237560((int)&a1[80].field_34);
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 0x0) = (int)&Enemy__vtable;
  sub_602F36E0(&a1[76].field_48);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)&a1[8].id);
  v3 = StageActor__dtor(a1);
  operator_delete(v3);
}
