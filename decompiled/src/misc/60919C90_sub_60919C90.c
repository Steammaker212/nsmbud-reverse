/* sub_60919C90
 * address: 0x60919C90   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60919C90(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = &off_60C5D5D0;
  v2 = a1 + 3;
  if ( a1[3] )
  {
    dword_60CC7464(a1 + 8);
    sub_60913AD4(v2);
    a1[6] = 0;
    a1[7] = 0;
  }
  return a1;
}
