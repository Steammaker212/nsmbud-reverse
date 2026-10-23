/* Actor_chibiyoshi_StaffRoll_build
 * address: 0x607496A4   size: 56   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall Actor_chibiyoshi_StaffRoll_build(ActorBuildInfo *a1)
{
  StageActor *v2; // r0
  StageActor *result; // r0

  v2 = (StageActor *)operator_new(0x2DCu);
  result = sub_60748A1C(v2, a1, 0);
  FIELD_U32(result, 0x0) = (int)&off_60C2371C;
  result[1].playerId = 0;
  return result;
}
