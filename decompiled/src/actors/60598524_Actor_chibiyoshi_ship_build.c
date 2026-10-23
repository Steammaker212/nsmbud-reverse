/* Actor_chibiyoshi_ship_build
 * address: 0x60598524   size: 28   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

CollisionActor *__fastcall Actor_chibiyoshi_ship_build(ActorBuildInfo *a1)
{
  CollisionActor *v2; // r0

  v2 = (CollisionActor *)operator_new(0x3688u);
  return sub_605986B0(v2, a1);
}
