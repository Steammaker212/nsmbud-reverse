/* CollisionActor__dtor_3FC4
 * address: 0x60003FC4   size: 48   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x60000568
// 
// Overridden by:
//   - 0x600096B8 : MultiStateActor
void __fastcall CollisionActor__dtor_3FC4(Actor *a1)
{
  Actor *v2; // r0

  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor(&a1[8].id);
  v2 = StageActor__dtor(a1);
  operator_delete(v2);
}
