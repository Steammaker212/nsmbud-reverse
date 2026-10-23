/* Actor_Lift_build
 * address: 0x6063DE38   size: 28   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall Actor_Lift_build(ActorBuildInfo *a1)
{
  MultiStateActor *v2; // r0

  v2 = (MultiStateActor *)operator_new(0x1B70u);
  return sub_6063DE54(v2, a1);
}
