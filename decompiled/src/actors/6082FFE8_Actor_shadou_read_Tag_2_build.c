/* Actor_shadou_read_Tag_2_build
 * address: 0x6082FFE8   size: 64   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall Actor_shadou_read_Tag_2_build(ActorBuildInfo *a1)
{
  StageActor *v2; // r0
  StageActor *result; // r0

  v2 = (StageActor *)operator_new(0x298u);
  result = StageActor__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60C2AE44;
  LOBYTE(result[1]._.heap) = 0;
  result[1]._.id = 0;
  LOBYTE(result[1]._.profile) = 0;
  *(_DWORD *)&result[1]._.field_10 = 0;
  return result;
}
