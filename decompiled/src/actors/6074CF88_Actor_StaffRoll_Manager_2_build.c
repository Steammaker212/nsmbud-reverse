/* Actor_StaffRoll_Manager_2_build
 * address: 0x6074CF88   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall Actor_StaffRoll_Manager_2_build(ActorBuildInfo *a1)
{
  StageActor *v2; // r0
  StageActor *result; // r0

  v2 = (StageActor *)operator_new(0x4E8u);
  result = Actor_StaffRoll_Manager_2_build_helper(v2, a1);
  FIELD_U32(result, 0x0) = (int)&off_60C23A14;
  return result;
}
