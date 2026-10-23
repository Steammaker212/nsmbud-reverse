/* sub_605D67D8
 * address: 0x605D67D8   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605D67D8(_DWORD *a1)
{
  int v2; // r0
  unsigned int result; // r0

  if ( a1[2000] <= 1u )
    sub_605EAB48(a1 + 1516, 0.0);
  a1[30] = 0;
  v2 = a1[40];
  if ( v2 < 0 && v2 != 0x80000000 )
    v2 = -v2;
  result = (unsigned int)v2 >> 2;
  a1[1943] = result;
  return result;
}
