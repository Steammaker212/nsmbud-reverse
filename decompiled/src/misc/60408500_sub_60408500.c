/* sub_60408500
 * address: 0x60408500   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60408500(_DWORD *a1)
{
  *a1 = off_60BF9AD8;
  if ( (_DWORD *)dword_60C9A1EC == a1 )
  {
    dword_60C9A1EC = 0;
    dword_60C9A1F0 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
