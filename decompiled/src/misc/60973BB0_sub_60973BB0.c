/* sub_60973BB0
 * address: 0x60973BB0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60973BB0(_DWORD *a1)
{
  *a1 = &off_60C5F3BC;
  if ( a1[7] )
  {
    sub_608DEB70(a1 + 5);
    sub_608DEB70(a1 + 8);
  }
  if ( a1[13] )
  {
    sub_608DEB70(a1 + 11);
    sub_608DEB70(a1 + 14);
  }
  operator_delete(a1);
}
