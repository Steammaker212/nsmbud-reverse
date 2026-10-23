/* sub_6059A20C
 * address: 0x6059A20C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6059A20C(int a1)
{
  int *result; // r0
  int v2; // t1

  v2 = FIELD_U32(a1, 6260);
  result = (int *)(a1 + 6260);
  *result = v2 | 0x80000;
  *(result - 1527) = 1065353216;
  *(result - 1528) = 1065353216;
  *(result - 1529) = 1065353216;
  return result;
}
