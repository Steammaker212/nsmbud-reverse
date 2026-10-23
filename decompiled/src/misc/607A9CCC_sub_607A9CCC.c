/* sub_607A9CCC
 * address: 0x607A9CCC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A9CCC(_DWORD *a1)
{
  int v2; // r1
  int v3; // r2
  int result; // r0

  a1[3236] = 0;
  a1[3235] = 0;
  a1[307] &= 0xFFFDFBFF;
  v2 = a1[309];
  a1[308] &= ~0x20000000u;
  a1[306] &= ~0x100000u;
  a1[309] = v2 & 0x8FFEFFFB;
  sub_60763400((int)a1);
  v3 = a1[29];
  result = a1[3246];
  a1[146] = a1[3245];
  a1[147] = result;
  a1[148] = v3;
  return result;
}
