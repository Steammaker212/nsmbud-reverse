/* sub_600386E4
 * address: 0x600386E4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600386E4(int a1)
{
  int result; // r0

  FIELD_U32(a1, 7848) = 1056964608;
  result = a1 + 7848;
  FIELD_U32(result, 4) = 1082130432;
  return result;
}
