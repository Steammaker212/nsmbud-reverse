/* Actor_pipe_jointomame_build
 * address: 0x605F795C   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

CollisionActor *__fastcall Actor_pipe_jointomame_build(ActorBuildInfo *a1)
{
  CollisionActor *v2; // r0
  CollisionActor *result; // r0

  v2 = (CollisionActor *)operator_new(0x17B8u);
  result = CollisionActor__ctor(v2, a1);
  FIELD_U32(result, 0x0)._.vtable = (int)&off_60C0C998;
  return result;
}
