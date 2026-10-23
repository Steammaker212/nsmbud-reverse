/* sub_6077027C
 * address: 0x6077027C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6077027C(int a1)
{
  FIELD_U32(a1, 1208) &= ~4u;
  return sub_607865BC(a1 + 688, 6);
}
