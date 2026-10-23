/* sub_6043C90C
 * address: 0x6043C90C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6043C90C(_DWORD *a1)
{
  int v2; // r0

  *a1 = &off_60BFAA14;
  v2 = a1[2];
  if ( v2 )
    sub_608E6B98(v2, a1);
  operator_delete(a1);
}
