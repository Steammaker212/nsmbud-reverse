/* sub_60218CF8
 * address: 0x60218CF8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60218CF8(_DWORD *a1)
{
  *a1 = off_60BD922C;
  if ( (_DWORD *)dword_60C8D3EC == a1 )
  {
    dword_60C8D3EC = 0;
    dword_60C8D3F0 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
