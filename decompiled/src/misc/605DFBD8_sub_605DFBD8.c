/* sub_605DFBD8
 * address: 0x605DFBD8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_605DFBD8(_DWORD *a1)
{
  int *result; // r0
  int v2; // t1

  a1[1567] &= ~1u;
  a1[1701] |= 1u;
  v2 = a1[1702];
  result = a1 + 1702;
  *result = v2 | 1;
  return result;
}
