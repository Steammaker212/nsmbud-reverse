/* sub_606D23D8
 * address: 0x606D23D8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_606D23D8(StateActor *a1, ActorBuildInfo *a2)
{
  sub_606CA0DC(a1, a2);
  FIELD_U32(a1, 0x0)._._.vtable = (int)off_60C1DC64;
  memset(&a1[1]._._._.field_34, 0, 37);
  return a1;
}
