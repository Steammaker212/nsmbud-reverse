/* sub_6040184C
 * address: 0x6040184C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6040184C(_DWORD *a1)
{
  *a1 = off_60BF9A08;
  if ( (_DWORD *)dword_60C99E5C == a1 )
  {
    dword_60C99E5C = 0;
    (**(void (__fastcall ***)(int))dword_60C99E60)(dword_60C99E60);
    dword_60C99E60 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
