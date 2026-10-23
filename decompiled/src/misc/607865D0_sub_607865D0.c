/* sub_607865D0
 * address: 0x607865D0   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607865D0(int result)
{
  FIELD_U32(result, 8) &= ~1u;
  FIELD_U32(result, 12) &= ~1u;
  return result;
}
