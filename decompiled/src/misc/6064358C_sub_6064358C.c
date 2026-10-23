/* sub_6064358C
 * address: 0x6064358C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_6064358C(StateActor *a1, ActorBuildInfo *a2)
{
  StateActor *result; // r0

  result = StateActor_ctor(a1, a2);
  FIELD_U32(result, 0x0) = (int)off_60C1349C;
  LOWORD(result[1]._._._.id) = 0;
  result[1]._._._.vtable = 0;
  result[1]._._._.heap = 0;
  return result;
}
