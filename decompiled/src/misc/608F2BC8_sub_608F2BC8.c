/* sub_608F2BC8
 * address: 0x608F2BC8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608F2BC8(_DWORD *a1)
{
  *a1 = off_60C5C80C;
  if ( (_DWORD *)dword_60CCEC38 == a1 )
  {
    dword_60CCEC38 = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_60CCEC3C + 72))(dword_60CCEC3C);
    dword_60CCEC3C = 0;
  }
  return sead__IDisposer__dtor(a1);
}
