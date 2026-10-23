/* sub_609153E4
 * address: 0x609153E4   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609153E4(_DWORD *a1)
{
  *a1 = off_60C5D518;
  if ( (_DWORD *)dword_60CCFC80 == a1 )
  {
    dword_60CCFC80 = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_60CCFC84 + 4))(dword_60CCFC84);
    dword_60CCFC84 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
