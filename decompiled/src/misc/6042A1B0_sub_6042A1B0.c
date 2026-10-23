/* sub_6042A1B0
 * address: 0x6042A1B0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6042A1B0(_DWORD *a1)
{
  *a1 = off_60BFA518;
  if ( (_DWORD *)dword_60C9C0F8 == a1 )
  {
    dword_60C9C0F8 = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_60C9C0FC + 4))(dword_60C9C0FC);
    dword_60C9C0FC = 0;
  }
  return sead__IDisposer__dtor(a1);
}
