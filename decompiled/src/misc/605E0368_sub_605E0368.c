/* sub_605E0368
 * address: 0x605E0368   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E0368(_DWORD *a1)
{
  int result; // r0

  result = a1[2005];
  if ( result == 1 )
  {
    sub_605D83A4((int)a1, 1, 5000.0);
    a1[33] = 0;
    a1[26] = 0;
    sub_605D7954((int)a1);
    sub_605D793C((int)a1);
    a1[39] += 95443717 * byte_60B0594C[a1[20]];
    result = a1[40] + 59652323;
    a1[40] = result;
  }
  return result;
}
