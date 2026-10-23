/* sub_607C7F78
 * address: 0x607C7F78   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C7F78(int *a1)
{
  int *v1; // r4
  int v2; // r0
  int v3; // r2

  v1 = a1;
  a1[39] = 0;
  a1[40] = sub_60773F3C((int)a1, a1[20]);
  v2 = v1[301];
  v1[304] &= ~0x10000u;
  v3 = v1[306];
  v1[305] &= ~0x100000u;
  v1[307] &= ~0x400u;
  v1[306] = v3 & 0xFFFFB83B;
  v1[301] = v2 & 0x7DFFDFFF;
  v1 += 172;
  sub_607865BC((int)v1, 5);
  return sub_607865BC((int)v1, 6);
}
