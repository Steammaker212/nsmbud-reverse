/* sub_607C4C88
 * address: 0x607C4C88   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C4C88(int a1)
{
  FIELD_U32(a1, 1204) &= ~0x1000000u;
  FIELD_U32(a1, 1224) &= 0xFFFF7BDF;
  return sub_6076EEFC(a1);
}
