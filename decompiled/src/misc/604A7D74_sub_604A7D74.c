/* sub_604A7D74
 * address: 0x604A7D74   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604A7D74(_DWORD *a1)
{
  *a1 = off_60BFDDC0;
  if ( (_DWORD *)dword_60CA1468 == a1 )
  {
    dword_60CA1468 = 0;
    sub_604AB390(dword_60CA146C);
    dword_60CA146C = 0;
  }
  return sead__IDisposer__dtor(a1);
}
