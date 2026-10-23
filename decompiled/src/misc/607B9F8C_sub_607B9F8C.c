/* sub_607B9F8C
 * address: 0x607B9F8C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B9F8C(int *a1)
{
  int v2; // r5
  int v3; // r1
  int result; // r0

  a1[3027] = 0;
  v2 = (int)(a1 + 172);
  a1[3028] = 0;
  v3 = a1[306];
  a1[303] &= 0xFFFFFF3F;
  a1[305] &= ~0x800000u;
  a1[307] &= ~0x8000u;
  a1[301] &= ~0x2000000u;
  a1[306] = v3 & 0xFFFFBA2B;
  sub_607865BC((int)(a1 + 172), 5);
  sub_607865BC(v2, 6);
  sub_607865BC(v2, 2);
  sub_607865BC(v2, 1);
  sub_607865BC(v2, 7);
  a1[40] = sub_60773F3C((int)a1, a1[20]);
  a1[3025] = 0;
  result = sub_6079D894((int)a1);
  if ( result )
    return sub_607B75BC(result);
  return result;
}
