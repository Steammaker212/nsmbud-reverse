/* sub_606429C0
 * address: 0x606429C0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_606429C0(StateActor *a1, ActorBuildInfo *a2)
{
  StateActor *result; // r0

  result = StateActor_ctor(a1, a2);
  FIELD_U32(result, 0x0)._._.vtable = (int)off_60C132C8;
  LOBYTE(result[1]._._._.vtable) = 0;
  return result;
}
