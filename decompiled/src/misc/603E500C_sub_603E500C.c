/* sub_603E500C
 * address: 0x603E500C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603E500C(_DWORD *a1)
{
  *a1 = off_60BF8E4C;
  if ( (_DWORD *)dword_60C995CC == a1 )
  {
    dword_60C995CC = 0;
    dword_60C995D0 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
