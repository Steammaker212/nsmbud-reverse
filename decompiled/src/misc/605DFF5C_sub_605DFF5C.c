/* sub_605DFF5C
 * address: 0x605DFF5C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DFF5C(_DWORD *a1)
{
  int result; // r0

  sub_605EAB48(a1 + 1516, 0.0);
  sub_605D847C(a1);
  a1[1566] |= 1u;
  a1[1567] |= 1u;
  a1[2003] = 0;
  result = sub_605D792C((int)a1, a1[20]);
  a1[39] = 0;
  a1[40] = result;
  a1[41] = 0;
  return result;
}
