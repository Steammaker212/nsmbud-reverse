/* sub_608E60A4
 * address: 0x608E60A4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608E60A4(_DWORD *a1)
{
  *a1 = off_60C5C1B4;
  if ( dword_60CCEBD0 )
    sub_608E8668(dword_60CCEBD0, a1);
  return sead__IDisposer__dtor(a1);
}
