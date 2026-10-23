/* sub_601E5260
 * address: 0x601E5260   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601E5260(_DWORD *a1)
{
  *a1 = off_60BD6E48;
  if ( (_DWORD *)dword_60C8B140 == a1 )
  {
    dword_60C8B140 = 0;
    *(_DWORD *)dword_60C8B144 = off_60BD6E58;
    dword_60C8B144 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
