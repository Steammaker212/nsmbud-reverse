/* sub_605D661C
 * address: 0x605D661C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_605D661C(int a1)
{
  unsigned int *result; // r0
  int v2; // t1

  v2 = FIELD_U32(a1, 6260);
  result = (unsigned int *)(a1 + 6260);
  *result = v2 & 0xEFFFFFFF;
  *(result - 1540) = -1103101952;
  *(result - 1541) = -1065353216;
  *(result - 1530) = 0;
  *(result - 1531) = 1082130432;
  *(result - 1532) = 1082130432;
  return result;
}
