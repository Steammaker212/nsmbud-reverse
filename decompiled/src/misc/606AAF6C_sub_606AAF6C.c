/* sub_606AAF6C
 * address: 0x606AAF6C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_606AAF6C(StateActor *a1, ActorBuildInfo *a2)
{
  StateActor *result; // r0

  result = sub_606A8EC4(a1, a2);
  FIELD_U32(result, 0x0)._._.vtable = (int)off_60C1A458;
  LOWORD(result[1]._._._.childCount) = 0;
  result[1]._._._.field_20.next = 0;
  result[1]._._._.field_20.previous = 0;
  *(_DWORD *)&result[1]._._._.movementId = 0;
  result[1]._._._.settigns2 = 0;
  *(_DWORD *)&result[1]._._._.field_10 = 0;
  result[1]._._._.settings1 = 0;
  return result;
}
