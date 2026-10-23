/* sub_60967A30
 * address: 0x60967A30   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60967A30(_DWORD *a1)
{
  *a1 = off_60C5EBA4;
  if ( (_DWORD *)dword_60CD0B44 == a1 )
  {
    dword_60CD0B44 = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_60CD0B48 + 4))(dword_60CD0B48);
    dword_60CD0B48 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
