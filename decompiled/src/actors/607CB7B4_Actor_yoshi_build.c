/* Actor_yoshi_build
 * address: 0x607CB7B4   size: 28   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall Actor_yoshi_build(ActorBuildInfo *a1)
{
  StageActor *v2; // r0

  v2 = (StageActor *)operator_new(0x2E30u);
  return Yoshi_ctor(v2, a1);
}
