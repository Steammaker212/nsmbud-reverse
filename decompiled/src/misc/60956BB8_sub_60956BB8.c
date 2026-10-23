/* sub_60956BB8
 * address: 0x60956BB8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60956BB8(_DWORD *a1)
{
  *a1 = off_60C5EA18;
  if ( (_DWORD *)dword_60CD0B3C == a1 )
  {
    dword_60CD0B3C = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_60CD0B40 + 4))(dword_60CD0B40);
    dword_60CD0B40 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
