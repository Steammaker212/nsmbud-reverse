/* sub_60971BDC
 * address: 0x60971BDC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60971BDC(_DWORD *a1)
{
  *a1 = off_60C5F2DC;
  if ( (_DWORD *)dword_60CD0B64 == a1 )
  {
    dword_60CD0B64 = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_60CD0B68 + 4))(dword_60CD0B68);
    dword_60CD0B68 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
