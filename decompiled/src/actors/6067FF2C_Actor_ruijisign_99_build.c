/* Actor_ruijisign_99_build
 * address: 0x6067FF2C   size: 52   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall Actor_ruijisign_99_build(ActorBuildInfo *a1)
{
  StageActor *v2; // r0
  StageActor *result; // r0

  v2 = (StageActor *)operator_new(0x28Cu);
  result = StageActor__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60C16B00;
  result[1]._.heap = 0;
  return result;
}
