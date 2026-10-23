/* sub_60172AB0
 * address: 0x60172AB0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60172AB0(_DWORD *a1)
{
  *a1 = off_60BD4D20;
  if ( (_DWORD *)dword_60C88BC4 == a1 )
  {
    dword_60C88BC4 = 0;
    (**(void (__fastcall ***)(int))dword_60C88BC8)(dword_60C88BC8);
    dword_60C88BC8 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
