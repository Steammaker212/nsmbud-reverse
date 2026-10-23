/* sub_605E00D0
 * address: 0x605E00D0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E00D0(int *a1)
{
  int v2; // r0

  a1[1566] |= 0x1000001u;
  a1[1565] |= 0x10000000u;
  a1[1567] |= 1u;
  v2 = sub_605D792C((int)a1, a1[20]);
  a1[39] = 0;
  a1[40] = v2;
  a1[41] = 0;
  a1[2003] = 0;
  return 8012;
}
