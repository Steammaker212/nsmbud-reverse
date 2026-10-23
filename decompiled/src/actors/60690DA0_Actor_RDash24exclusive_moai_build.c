/* Actor_RDash24exclusive_moai_build
 * address: 0x60690DA0   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_RDash24exclusive_moai_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r0
  StateActor *result; // r0

  v2 = (StateActor *)operator_new(0x1AB8u);
  result = sub_6068D194(v2, a1);
  FIELD_U32(result, 0x0)._._.vtable = (int)off_60C17890;
  return result;
}
