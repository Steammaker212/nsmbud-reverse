/* sub_6044059C
 * address: 0x6044059C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6044059C(_DWORD *a1)
{
  *a1 = off_60BFAC04;
  if ( (_DWORD *)dword_60C9CCB4 == a1 )
  {
    dword_60C9CCB4 = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_60C9CCB8 + 4))(dword_60C9CCB8);
    dword_60C9CCB8 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
