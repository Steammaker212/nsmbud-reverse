/* sub_60103B98
 * address: 0x60103B98   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60103B98(Actor *a1)
{
  Actor *v2; // r0

  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor(&a1[8].id);
  v2 = StageActor__dtor(a1);
  operator_delete(v2);
}
