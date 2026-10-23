/* sub_605DF500
 * address: 0x605DF500   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DF500(_DWORD *a1)
{
  unsigned int v1; // r1
  int *v2; // r0
  int v3; // t1
  int *v4; // r4

  v1 = a1[1567] & 0xFFFFFFFC;
  a1[1566] &= ~1u;
  a1[1565] &= ~0x10000000u;
  a1[1567] = v1;
  a1[1701] |= 1u;
  v3 = a1[1702];
  v2 = a1 + 1702;
  v4 = v2 - 186;
  *v2 = v3 | 1;
  sub_605EB6D4(v2 - 186);
  return sub_605EB7B0(v4, 0.0);
}
