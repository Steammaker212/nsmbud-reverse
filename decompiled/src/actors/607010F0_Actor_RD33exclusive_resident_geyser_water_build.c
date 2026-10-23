/* Actor_RD33exclusive_resident_geyser_water_build
 * address: 0x607010F0   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_RD33exclusive_resident_geyser_water_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r0
  StateActor *result; // r0

  v2 = (StateActor *)operator_new(0x2020u);
  result = Actor_RD33exclusive_resident_geyser_water_build_helper(v2, a1);
  FIELD_U32(result, 0x0)._._.vtable = (int)off_60C20A60;
  return result;
}
