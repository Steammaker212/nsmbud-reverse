/* sub_60582314
 * address: 0x60582314   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60582314(_DWORD *a1)
{
  *a1 = off_60C05B40;
  if ( (_DWORD *)dword_60CAF158 == a1 )
  {
    dword_60CAF158 = 0;
    dword_60CAF15C = 0;
  }
  return sead__IDisposer__dtor(a1);
}
