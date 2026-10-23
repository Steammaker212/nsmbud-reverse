/* SledgeBro_build
 * address: 0x602D2E68   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall SledgeBro_build(ActorBuildInfo *a1)
{
  Enemy *v2; // r0

  v2 = (Enemy *)operator_new(0x1D00u);
  return SledgeBro_ctor(v2, a1);
}
