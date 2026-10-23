/* sub_606E68CC
 * address: 0x606E68CC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_606E68CC(_DWORD *a1)
{
  *a1 = off_60C1F868;
  if ( (_DWORD *)dword_60CBBFA0 == a1 )
  {
    dword_60CBBFA0 = 0;
    dword_60CBBFA8 = 0;
    dword_60CBBFA4 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
