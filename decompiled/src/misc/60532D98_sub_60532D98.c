/* sub_60532D98
 * address: 0x60532D98   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60532D98(_DWORD *a1)
{
  *a1 = off_60C003FC;
  if ( (_DWORD *)dword_60CAADA4 == a1 )
  {
    dword_60CAADA4 = 0;
    sub_605369BC(dword_60CAADA8);
    dword_60CAADA8 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
