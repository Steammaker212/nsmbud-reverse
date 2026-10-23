/* Actor_minigemupaneruItem_build
 * address: 0x60734E24   size: 28   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_minigemupaneruItem_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r0

  v2 = (StateActor *)operator_new(0x2F40u);
  return sub_60734E40(v2, a1);
}
