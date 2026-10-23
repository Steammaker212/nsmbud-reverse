/* Actor_RDash24exclusive_moai_ki_build_helper
 * address: 0x606903B0   size: 28   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_RDash24exclusive_moai_ki_build_helper(StateActor *a1, ActorBuildInfo *a2)
{
  StateActor *result; // r0

  result = sub_6068D194(a1, a2);
  FIELD_U32(result, 0x0) = (int)off_60C17680;
  return result;
}
