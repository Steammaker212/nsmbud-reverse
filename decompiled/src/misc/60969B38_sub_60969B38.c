/* sub_60969B38
 * address: 0x60969B38   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60969B38(_DWORD *a1)
{
  *a1 = off_60C5EC10;
  if ( (_DWORD *)dword_60CD0B5C == a1 )
  {
    dword_60CD0B5C = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_60CD0B60 + 4))(dword_60CD0B60);
    dword_60CD0B60 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
