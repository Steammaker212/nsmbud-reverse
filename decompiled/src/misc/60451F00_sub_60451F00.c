/* sub_60451F00
 * address: 0x60451F00   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60451F00(_DWORD *a1)
{
  *a1 = off_60BFB10C;
  if ( (_DWORD *)dword_60C9CF08 == a1 )
  {
    dword_60C9CF08 = 0;
    sub_604AE884(dword_60C9CF0C + 1444);
    dword_60C9CF0C = 0;
  }
  return sead__IDisposer__dtor(a1);
}
