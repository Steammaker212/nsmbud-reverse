/* sub_600387AC
 * address: 0x600387AC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600387AC(int a1)
{
  int result; // r0

  FIELD_U32(a1, 7904) = -1082130432;
  result = a1 + 7904;
  FIELD_U32(result, 4) = 1082130432;
  return result;
}
