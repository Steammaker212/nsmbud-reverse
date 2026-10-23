/* sub_60401F34
 * address: 0x60401F34   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60401F34(int a1)
{
  int v1; // r5
  int v2; // r6
  int v3; // r4
  int result; // r0

  v1 = a1 + 16;
  v2 = 25;
  v3 = a1 + 89816;
  do
  {
    sub_60542FA4(v1);
    result = sub_60543508(v3);
    v3 += 3588;
    v1 += 3592;
    --v2;
  }
  while ( v2 );
  return result;
}
