/* Actor_akutakoinjanpuDemo_build
 * address: 0x6057DD48   size: 60   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall Actor_akutakoinjanpuDemo_build(ActorBuildInfo *a1)
{
  MultiStateActor *v2; // r0
  MultiStateActor *result; // r0

  v2 = (MultiStateActor *)operator_new(0x17F0u);
  result = sub_6057D92C(v2, a1);
  FIELD_U32(result, 0x0)._._.vtable = (int)off_60C04EF0;
  *(_DWORD *)&result[1]._._._.field_10 = 0;
  return result;
}
