/* sub_60998DB4
 * address: 0x60998DB4   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60998DB4(_BYTE *a1)
{
  if ( !a1[1] )
  {
    sub_6083C4F8((int)(a1 + 80));
    sub_6083C790((int)(a1 + 40));
    sub_6083C96C((int)(a1 + 128));
    sub_6083CD6C(a1 + 8);
    if ( (a1[2] & 1) != 0 )
      sub_6083CD8C(a1 + 156);
  }
  *a1 = 0;
  return 0;
}
