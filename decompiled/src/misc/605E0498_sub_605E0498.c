/* sub_605E0498
 * address: 0x605E0498   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_605E0498(_DWORD *a1)
{
  int v1; // lr
  unsigned int *result; // r0
  int v3; // t1

  v1 = a1[1566];
  a1[1565] &= ~0x1000000u;
  a1[1566] = v1 & 0xFFC1FFE3;
  v3 = a1[1567];
  result = a1 + 1567;
  *result = v3 & 0xFFFFFFEF;
  *(result - 1548) &= ~4u;
  return result;
}
