/* Actor_BowserJr_fire_build
 * address: 0x600D513C   size: 116   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_BowserJr_fire_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r0
  StateActor *result; // r0

  v2 = (StateActor *)operator_new(0x1800u);
  result = StateActor_ctor(v2, a1);
  FIELD_U32(result, 0x0)._._.vtable = (int)off_60BCBA40;
  LOBYTE(result[1]._._._.childCount) = 0;
  result[1]._._._.field_20.next = 0;
  result[1]._._._.field_20.previous = 0;
  *(_DWORD *)&result[1]._._._.movementId = 0;
  result[1]._._._.settigns2 = 0;
  result[1]._._._.settings1 = 0;
  result[1]._._._.profile = 0;
  *(_DWORD *)&result[1]._._._.field_10 = 0;
  return result;
}
