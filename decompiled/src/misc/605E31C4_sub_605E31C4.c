/* sub_605E31C4
 * address: 0x605E31C4   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605E31C4(_DWORD *a1)
{
  unsigned int result; // r0

  if ( !a1[1614] )
  {
    sub_605EB5E4(a1 + 1516);
    a1[1560] &= ~0x10u;
    ((void (__fastcall *)(_DWORD *))loc_605EAE74)(a1 + 1516);
  }
  result = a1[1565] & 0xF1FFFFFF;
  a1[1565] = result;
  return result;
}
