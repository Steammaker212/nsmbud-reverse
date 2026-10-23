/* FinalBowser__build
 * address: 0x60066E74   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

BossBase *__fastcall FinalBowser__build(ActorBuildInfo *a1)
{
  BossBase *v2; // r0

  v2 = (BossBase *)operator_new(0x6870u);
  return FinalBowser__ctor(v2, a1);
}
