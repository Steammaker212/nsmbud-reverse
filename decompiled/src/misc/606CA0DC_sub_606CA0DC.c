/* sub_606CA0DC
 * address: 0x606CA0DC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_606CA0DC(StateActor *a1, ActorBuildInfo *a2)
{
  StateActor_ctor(a1, a2);
  FIELD_U32(a1, 0x0)._._.vtable = (int)off_60C1C864;
  a1[1]._._._.field_30 = 0;
  memset(&a1[1], 0, 45);
  return a1;
}
