/* sub_601B0A04
 * address: 0x601B0A04   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601B0A04(_DWORD *a1)
{
  *a1 = off_60BD66C4;
  if ( (_DWORD *)dword_60C8A8BC == a1 )
  {
    dword_60C8A8BC = 0;
    dword_60C8A8C0 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
