/* sub_605E07FC
 * address: 0x605E07FC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_605E07FC(_DWORD *a1)
{
  int v1; // lr
  unsigned int *result; // r0
  int v3; // t1

  v1 = a1[1566];
  a1[1565] &= ~0x10000000u;
  a1[1566] = v1 & 0xFFFFBFFE;
  v3 = a1[1567];
  result = a1 + 1567;
  *result = v3 & 0xFFFFFFFC;
  result[130] = 0;
  return result;
}
