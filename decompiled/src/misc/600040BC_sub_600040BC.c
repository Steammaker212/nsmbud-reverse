/* sub_600040BC
 * address: 0x600040BC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_600040BC(_DWORD *a1)
{
  *a1 = off_60BC0200;
  if ( (_DWORD *)dword_60C7B3F4 == a1 )
  {
    dword_60C7B3F4 = 0;
    dword_60C7B3F8 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
