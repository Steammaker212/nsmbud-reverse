/* sub_603F5454
 * address: 0x603F5454   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603F5454(_DWORD *a1)
{
  *a1 = off_60BF949C;
  if ( (_DWORD *)dword_60C99D84 == a1 )
  {
    dword_60C99D84 = 0;
    dword_60C99D88 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
