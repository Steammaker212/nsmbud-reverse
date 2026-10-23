/* sub_604061DC
 * address: 0x604061DC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604061DC(_DWORD *a1)
{
  *a1 = off_60BF9AB8;
  if ( (_DWORD *)dword_60C9A1DC == a1 )
  {
    dword_60C9A1DC = 0;
    dword_60C9A1E0 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
