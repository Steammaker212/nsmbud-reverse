/* Actor_RD33exclusive_resident_geyser_water_build_helper
 * address: 0x6070098C   size: 52   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_RD33exclusive_resident_geyser_water_build_helper(StateActor *a1, ActorBuildInfo *a2)
{
  StateActor *result; // r0

  result = sub_606F4044(a1, a2);
  FIELD_U32(result, 0x0)._._.vtable = (int)off_60C20928;
  result[1]._.collisionMgr[1473] = 0;
  result[1]._.collisionMgr[1474] = 0;
  return result;
}
