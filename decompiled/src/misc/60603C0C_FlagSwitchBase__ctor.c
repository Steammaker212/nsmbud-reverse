/* FlagSwitchBase__ctor
 * address: 0x60603C0C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall FlagSwitchBase__ctor(MultiStateActor *a1, ActorBuildInfo *a2)
{
  MultiStateActor *result; // r0

  result = MultiStateActor__ctor(a1, a2);
  FIELD_U32(result, 0x0) = (int)off_60C0EDE8;
  BYTE2(result[1]._._._.settings1) = 0;
  LOWORD(result[1]._._._.settings1) = 0;
  *(_DWORD *)&result[1]._._._.field_10 = 0;
  result[1]._._._.profile = 0;
  result[1]._._._.id = 0;
  result[1]._._._.vtable = 0;
  result[1]._._._.heap = 0;
  return result;
}
