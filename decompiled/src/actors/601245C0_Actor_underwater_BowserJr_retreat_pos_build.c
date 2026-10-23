/* Actor_underwater_BowserJr_retreat_pos_build
 * address: 0x601245C0   size: 60   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall Actor_underwater_BowserJr_retreat_pos_build(ActorBuildInfo *a1)
{
  StageActor *v2; // r0
  StageActor *result; // r0

  v2 = (StageActor *)operator_new(0x290u);
  result = StageActor__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60BD1088;
  result[1]._.vtable = 0;
  result[1]._.heap = 0;
  LOBYTE(result[1]._.id) = 0;
  return result;
}
