/* Actor_castle_doa_RDashfor_build
 * address: 0x605F9568   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall Actor_castle_doa_RDashfor_build(ActorBuildInfo *a1)
{
  Enemy *v2; // r0
  Enemy *result; // r0

  v2 = (Enemy *)operator_new(0x18C8u);
  result = Actor_castle_doa_RDashfor_build_helper(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60C0D078;
  return result;
}
