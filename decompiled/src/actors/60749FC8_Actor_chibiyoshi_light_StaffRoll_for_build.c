/* Actor_chibiyoshi_light_StaffRoll_for_build
 * address: 0x60749FC8   size: 56   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall Actor_chibiyoshi_light_StaffRoll_for_build(ActorBuildInfo *a1)
{
  StageActor *v2; // r0
  StageActor *result; // r0

  v2 = (StageActor *)operator_new(0x2DCu);
  result = sub_60748A1C(v2, a1, 2);
  FIELD_U32(result, 0x0) = (int)&off_60C23810;
  *(_DWORD *)&FIELD_U8(result + (1) * 644, 0x54) = 0;
  return result;
}
