/* sub_6057110C
 * address: 0x6057110C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057110C(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 7392);
  FIELD_U32(result, 20) = 1082130432;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
