/* sub_607AEE34
 * address: 0x607AEE34   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AEE34(_DWORD *a1)
{
  int v2; // r1
  int v3; // r2

  a1[3169] = 0;
  a1[303] &= ~0x40u;
  v2 = a1[306];
  v3 = a1[307];
  a1[302] &= 0xFF0FFFFF;
  a1[306] = v2 & 0xFFFFFBFB;
  a1[307] = v3 & 0xFFFDBBFF;
  sub_607865BC((int)(a1 + 172), 6);
  return sub_607957D4((int)a1, 0);
}
