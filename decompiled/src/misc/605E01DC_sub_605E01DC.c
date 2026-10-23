/* sub_605E01DC
 * address: 0x605E01DC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_605E01DC(_DWORD *a1)
{
  unsigned int *result; // r0
  int v2; // t1

  a1[1566] &= 0xFEFFFFFE;
  a1[1565] &= ~0x10000000u;
  v2 = a1[1567];
  result = a1 + 1567;
  *result = v2 & 0xFFFFFFFE;
  return result;
}
