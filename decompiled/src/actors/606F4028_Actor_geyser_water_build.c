/* Actor_geyser_water_build
 * address: 0x606F4028   size: 28   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_geyser_water_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r0

  v2 = (StateActor *)operator_new(0x2020u);
  return sub_606F4044(v2, a1);
}
