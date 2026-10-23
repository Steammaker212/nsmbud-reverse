/* sub_603FC430
 * address: 0x603FC430   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603FC430(_DWORD *a1)
{
  *a1 = off_60BF96A0;
  if ( (_DWORD *)dword_60C99DE0 == a1 )
  {
    dword_60C99DE0 = 0;
    dword_60C99DE4 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
