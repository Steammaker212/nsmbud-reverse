/* sub_6008C584
 * address: 0x6008C584   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6008C584(int a1)
{
  int *result; // r0
  int v2; // t1
  int v3; // r1

  v2 = FIELD_U32(a1, 7104);
  result = (int *)(a1 + 7104);
  FIELD_U32(v2, 24) = 0;
  v3 = *result;
  FIELD_U32(v3, 20) = 0;
  FIELD_U32(v3, 28) |= 2u;
  *(result - 1740) = 1067030938;
  *(result - 1739) = 1067030938;
  *(result - 1738) = 1067030938;
  return result;
}
