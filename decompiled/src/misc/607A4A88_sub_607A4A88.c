/* sub_607A4A88
 * address: 0x607A4A88   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A4A88(int a1)
{
  FIELD_U32(a1, 1232) &= 0xDFFF7FFF;
  return sub_607865BC(a1 + 688, 1);
}
