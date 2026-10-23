/* sub_605CC9DC
 * address: 0x605CC9DC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_605CC9DC(_DWORD *a1)
{
  int *result; // r0
  int v2; // t1

  a1[1530] = a1[29];
  v2 = a1[1531];
  result = a1 + 1531;
  *result = v2 | 4;
  *(result - 731) |= 0x40800000u;
  return result;
}
