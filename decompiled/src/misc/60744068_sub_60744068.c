/* sub_60744068
 * address: 0x60744068   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60744068(Actor *a1)
{
  int *v2; // r5
  Actor *v3; // r0

  FIELD_U32(a1, 0x0) = (int)off_60C23174;
  v2 = &a1[78].field_2C;
  sub_607440CC(&a1[83].field_30);
  sub_607442CC(v2);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)&FIELD_U32(a1 + (8) * 80, 0x8));
  v3 = StageActor__dtor(a1);
  operator_delete(v3);
}
