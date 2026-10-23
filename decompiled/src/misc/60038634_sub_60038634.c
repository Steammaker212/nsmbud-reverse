/* sub_60038634
 * address: 0x60038634   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60038634(int a1)
{
  int result; // r0

  FIELD_U32(a1, 7800) = 1065353216;
  result = a1 + 7800;
  FIELD_U32(result, 4) = 1082130432;
  return result;
}
