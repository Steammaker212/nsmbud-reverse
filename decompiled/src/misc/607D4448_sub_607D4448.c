/* sub_607D4448
 * address: 0x607D4448   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607D4448(int *a1)
{
  unsigned int v2; // r0
  unsigned int result; // r0

  a1[39] = 0;
  a1[40] = sub_60773F3C((int)a1, a1[20]);
  v2 = a1[301] & 0xBDFFFFFF;
  a1[306] &= 0xFFFFF9FF;
  a1[305] &= ~0x100000u;
  a1[301] = v2;
  result = a1[309] & 0xFEFFFFFF;
  a1[309] = result;
  return result;
}
