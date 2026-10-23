/* Actor_moai_ki_build
 * address: 0x60690380   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_moai_ki_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r0
  StateActor *result; // r0

  v2 = (StateActor *)operator_new(0x1AB8u);
  result = sub_6068D194(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60C17680;
  return result;
}
