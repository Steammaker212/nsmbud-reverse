/* sub_6019E2B0
 * address: 0x6019E2B0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6019E2B0(_DWORD *a1)
{
  *a1 = off_60BD5E8C;
  if ( (_DWORD *)dword_60C89DF4 == a1 )
  {
    dword_60C89DF4 = 0;
    dword_60C89DF8 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
