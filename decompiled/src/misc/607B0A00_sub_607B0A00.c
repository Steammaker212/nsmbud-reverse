/* sub_607B0A00
 * address: 0x607B0A00   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B0A00(int *a1)
{
  int *v1; // r4
  unsigned int v2; // r0
  int v3; // r2
  int v4; // r3

  v1 = a1;
  a1[39] = 0;
  a1[40] = sub_60773F3C((int)a1, a1[20]);
  v2 = v1[301] & 0xBDFFFFFF;
  v1[304] &= ~0x10000u;
  v3 = v1[306];
  v4 = v1[307];
  v1[305] &= ~0x100000u;
  v1[301] = v2;
  v1[306] = v3 & 0xFFFFB03B;
  v1[307] = v4 & 0xFFFDBFFF;
  v1 += 172;
  sub_607865BC((int)v1, 5);
  return sub_607865BC((int)v1, 6);
}
