/* sub_605DFABC
 * address: 0x605DFABC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DFABC(int *a1)
{
  int result; // r0

  sub_605EAC4C(a1 + 1516, 0, 0.0);
  a1[1567] |= 1u;
  result = sub_605D792C((int)a1, a1[20]);
  a1[39] = 0;
  a1[40] = result;
  a1[41] = 0;
  return result;
}
