/* sub_607C87E4
 * address: 0x607C87E4   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607C87E4(int *a1)
{
  int *v2; // r5
  unsigned int result; // r0
  int v4; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  v2 = a1 + 2840;
  if ( sub_60793184(a1[2840]) >= 30.0 )
  {
    target = sub_60773F3C((int)a1, a1[20]) ^ 0x80000000;
    v4 = 0x20000000;
    moveValueTo(a1 + 40, &target, &v4);
  }
  result = sub_60793CA8(*v2);
  if ( result == 1 )
  {
    result = a1[40] ^ 0x80000000;
    a1[40] = result;
  }
  return result;
}
