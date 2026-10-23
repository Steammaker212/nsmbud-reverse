/* sub_60418898
 * address: 0x60418898   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60418898(_DWORD *a1)
{
  *a1 = off_60BF9D38;
  if ( (_DWORD *)dword_60C9BAF0 == a1 )
  {
    dword_60C9BAF0 = 0;
    sub_60418D0C(dword_60C9BAF4);
    dword_60C9BAF4 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
