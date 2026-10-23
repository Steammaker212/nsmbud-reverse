/* sub_601CF10C
 * address: 0x601CF10C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601CF10C(_DWORD *a1)
{
  *a1 = off_60BD6B54;
  if ( (_DWORD *)dword_60C8AEEC == a1 )
  {
    dword_60C8AEEC = 0;
    dword_60C8AEF0 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
