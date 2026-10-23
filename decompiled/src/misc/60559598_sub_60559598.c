/* sub_60559598
 * address: 0x60559598   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60559598(_DWORD *a1)
{
  *a1 = off_60C00DF4;
  if ( (_DWORD *)dword_60CAD904 == a1 )
  {
    dword_60CAD904 = 0;
    (**(void (__fastcall ***)(int))dword_60CAD908)(dword_60CAD908);
    dword_60CAD908 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
