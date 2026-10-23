/* sub_604BB08C
 * address: 0x604BB08C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604BB08C(_DWORD *a1)
{
  *a1 = off_60BFE190;
  if ( (_DWORD *)dword_60CA2670 == a1 )
  {
    dword_60CA2670 = 0;
    sub_60475AE8((_DWORD *)(dword_60CA2674 + 84));
    dword_60CA2674 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
