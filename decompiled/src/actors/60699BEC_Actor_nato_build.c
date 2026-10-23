/* Actor_nato_build
 * address: 0x60699BEC   size: 84   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_nato_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r5

  v2 = (StateActor *)operator_new(0x18A0u);
  StateActor_ctor(v2, a1);
  FIELD_U32(v2, 0x0) = (int)off_60C1815C;
  memset(&v2[1]._._._.parent, 0, 144);
  memset(&v2[1], 0, 44);
  return v2;
}
