/* sub_6032FE88
 * address: 0x6032FE88   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6032FE88(Enemy *a1, int a2, int a3)
{
  a1[1]._._._._.field_10 = 1;
  return Enemy__collisionIceball(a1, a2, a3);
}
