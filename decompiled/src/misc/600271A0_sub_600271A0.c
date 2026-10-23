/* sub_600271A0
 * address: 0x600271A0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_600271A0(StateActor *a1, ActorBuildInfo *a2)
{
  StateActor *result; // r0

  result = StateActor_ctor(a1, a2);
  FIELD_U32(result, 0x0)._._.vtable = (int)off_60BC1A20;
  result[1]._._._.vtable = 0;
  result[1]._._._.heap = 0;
  result[1]._._._.id = 1;
  LOWORD(result[1]._._._.settings1) = 0;
  *(_DWORD *)&result[1]._._._.field_10 = 0;
  result[1]._._._.profile = 0;
  return result;
}
