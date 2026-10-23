/* sub_60770018
 * address: 0x60770018   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60770018(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  _DWORD *v4; // r4

  a1[39] = 0;
  v2 = a1[306];
  if ( (v2 & 0x20000) != 0 )
  {
    sub_60814E5C(a1 + 210);
    v2 = a1[306];
  }
  a1[301] &= ~0x2000000u;
  a1[302] &= ~8u;
  a1[305] &= ~0x100000u;
  v3 = a1[307];
  a1[306] = v2 & 0xFFFDF7FF;
  a1[304] &= ~0x200000u;
  a1[307] = v3 & 0xFFFBBFFF;
  a1[2491] = 0;
  v4 = a1 + 172;
  sub_607865BC(v4, 5);
  sub_607865BC(v4, 6);
  return sub_607865BC(v4, 2);
}
