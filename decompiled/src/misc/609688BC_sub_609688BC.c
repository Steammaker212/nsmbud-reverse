/* sub_609688BC
 * address: 0x609688BC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609688BC(_DWORD *a1)
{
  *a1 = off_60C5EBC8;
  if ( (_DWORD *)dword_60CD0B4C == a1 )
  {
    dword_60CD0B4C = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_60CD0B50 + 4))(dword_60CD0B50);
    dword_60CD0B50 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
