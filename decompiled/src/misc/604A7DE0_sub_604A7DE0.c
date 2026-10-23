/* sub_604A7DE0
 * address: 0x604A7DE0   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_604A7DE0(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BFDDC0;
  if ( (_DWORD *)dword_60CA1468 == a1 )
  {
    dword_60CA1468 = 0;
    sub_604AB390(dword_60CA146C);
    dword_60CA146C = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
