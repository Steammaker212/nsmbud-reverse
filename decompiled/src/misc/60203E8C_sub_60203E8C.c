/* sub_60203E8C
 * address: 0x60203E8C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60203E8C(_DWORD *a1)
{
  *a1 = off_60BD86D4;
  if ( (_DWORD *)dword_60C8C5E0 == a1 )
  {
    dword_60C8C5E0 = 0;
    dword_60C8C5E4 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
