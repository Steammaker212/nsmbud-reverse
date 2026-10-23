/* sub_600C30D8
 * address: 0x600C30D8   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_600C30D8(int a1)
{
  unsigned int *result; // r0
  int v2; // t1

  v2 = FIELD_U32(a1, 7108);
  result = (unsigned int *)(a1 + 7108);
  *result = v2 & 0xFFFFFFFE;
  return result;
}
