/* Actor_parentchild_obuje_child_castle_build
 * address: 0x606717F0   size: 92   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_parentchild_obuje_child_castle_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r0
  StateActor *result; // r0

  v2 = (StateActor *)operator_new(0x17E8u);
  result = StateActor_ctor(v2, a1);
  FIELD_U32(result, 0x0)._._.vtable = (int)off_60C158FC;
  *(_WORD *)&result[1]._._._.field_10 = 0;
  result[1]._._._.profile = 0;
  result[1]._._._.id = 0;
  result[1]._._._.vtable = 0;
  result[1]._._._.heap = 0;
  return result;
}
