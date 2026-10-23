/* sub_6057AA48
 * address: 0x6057AA48   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057AA48(_DWORD *a1)
{
  int v1; // r1
  int v2; // r3

  v1 = 0;
  if ( !a1[1846] )
  {
    v2 = a1[718];
    v1 = 1;
    if ( (v2 & 1) == 0 && (v2 & 0x10400) != 0x400 )
    {
      a1[800] &= ~0x40000000u;
      a1[798] &= ~0x40000000u;
      a1[794] &= ~0x40000000u;
      a1[796] &= ~0x40000000u;
      v1 = 0;
      a1[1846] = 1;
    }
  }
  return v1;
}
