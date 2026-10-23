/* Actor_neshikuwaiya_build
 * address: 0x606D9324   size: 68   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_neshikuwaiya_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r0
  StateActor *result; // r0

  v2 = (StateActor *)operator_new(0x17F0u);
  result = sub_606D8E08(v2, a1);
  FIELD_U32(result, 0x0)._._.vtable = (int)off_60C1E798;
  result[1]._._._.settings1 = 0;
  result[1]._._._.settigns2 = 0;
  return result;
}
