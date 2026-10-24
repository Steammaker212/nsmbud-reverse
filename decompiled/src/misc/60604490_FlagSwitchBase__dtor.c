/* FlagSwitchBase__dtor
 * address: 0x60604490   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: MultiStateActor : 0x600096B8
// 
// Overridden by:
//   - 0x60606358 : FlagSwitchRandom
void __fastcall FlagSwitchBase__dtor(Actor *a1)
{
  Actor *v2; // r0

  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)&FIELD_U32(a1 + (8) * 80, 0x8));
  v2 = StageActor__dtor(a1);
  operator_delete(v2);
}
