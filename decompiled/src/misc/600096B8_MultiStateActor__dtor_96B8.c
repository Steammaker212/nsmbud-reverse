/* MultiStateActor__dtor_96B8
 * address: 0x600096B8   size: 48   group: misc
 * sym: MultiStateActor::~MultiStateActor() as D0
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x60003FC4
// 
// Overridden by:
//   - 0x602A3EA8 : Enemy
//   - 0x60604490 : FlagSwitchBase
//   - 0x605B6DA0 : BlockCoinBase
void __fastcall MultiStateActor__dtor_96B8(Actor *a1)
{
  Actor *v2; // r0

  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor(&FIELD_U32(a1 + (8) * 80, 0x8));
  v2 = StageActor__dtor(a1);
  operator_delete(v2);
}
