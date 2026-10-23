/* sub_603F7D3C
 * address: 0x603F7D3C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603F7D3C(_DWORD *a1)
{
  *a1 = off_60BF9570;
  if ( (_DWORD *)dword_60C99DC4 == a1 )
  {
    dword_60C99DC4 = 0;
    dword_60C99DC8 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
