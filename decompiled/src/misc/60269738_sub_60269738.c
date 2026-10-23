/* sub_60269738
 * address: 0x60269738   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60269738(Enemy *a1)
{
  Enemy__beginState_DieFall(a1);
  return StageActor__delete((StateActor *)a1, 1);
}
