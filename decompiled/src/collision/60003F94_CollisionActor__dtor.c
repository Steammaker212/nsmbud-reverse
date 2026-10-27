/* CollisionActor__dtor
 * address: 0x60003F94   size: 44   group: collision
 * sym: CollisionActor::~CollisionActor() as D2
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x60000500
// 
// Overridden by:
//   - 0x60009688 : MultiStateActor
Actor *__fastcall CollisionActor__dtor(Actor *a1)
{
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor(&FIELD_U32(a1 + (8) * 80, 0x8));
  return StageActor__dtor(a1);
}
