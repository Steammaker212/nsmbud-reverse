/* sub_60353524
 * address: 0x60353524   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60353524(Enemy *a1)
{
  a1[1]._._._._.profile = 0;
  a1[1]._._._._.id = 0;
  sub_60352A88((int)a1, 1, 1, 1.0);
  return Enemy__beginState_DieFumi(a1);
}
