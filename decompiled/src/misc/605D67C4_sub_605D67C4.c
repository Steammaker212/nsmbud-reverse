/* sub_605D67C4
 * address: 0x605D67C4   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_605D67C4(int a1)
{
  unsigned int *result; // r0
  int v2; // t1

  v2 = FIELD_U32(a1, 6260);
  result = (unsigned int *)(a1 + 6260);
  *result = v2 & 0xFFFFFFFE;
  return result;
}
