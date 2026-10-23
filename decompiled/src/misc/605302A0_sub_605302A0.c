/* sub_605302A0
 * address: 0x605302A0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605302A0(_DWORD *a1)
{
  *a1 = off_60C00270;
  if ( (_DWORD *)dword_60CAAABC == a1 )
  {
    dword_60CAAABC = 0;
    (**(void (__fastcall ***)(int))dword_60CAAAC0)(dword_60CAAAC0);
    dword_60CAAAC0 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
