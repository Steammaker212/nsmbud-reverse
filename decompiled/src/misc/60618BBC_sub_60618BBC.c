/* sub_60618BBC
 * address: 0x60618BBC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall sub_60618BBC(MultiStateActor *a1, ActorBuildInfo *a2)
{
  MultiStateActor *result; // r0

  result = MultiStateActor__ctor(a1, a2);
  FIELD_U32(result, 0x0) = (int)off_60C1057C;
  result[1]._._._.vtable = 0;
  result[1]._._._.heap = 0;
  LOBYTE(result[1]._._._.id) = 0;
  return result;
}
