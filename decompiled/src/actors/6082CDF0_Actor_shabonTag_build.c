/* Actor_shabonTag_build
 * address: 0x6082CDF0   size: 72   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall Actor_shabonTag_build(ActorBuildInfo *a1)
{
  StageActor *v2; // r0
  StageActor *result; // r0

  v2 = (StageActor *)operator_new(0x294u);
  result = StageActor__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60C2A7D0;
  FIELD_U32(result + (1) * 644, 0x0) = 2139095039;
  FIELD_U32(result + (1) * 644, 0x4) = 2139095039;
  FIELD_U32(result + (1) * 644, 0x8) = -8388609;
  FIELD_U32(result + (1) * 644, 0xC) = (Profile *)-8388609;
  return result;
}
