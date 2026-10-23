/* sub_6043F9A8
 * address: 0x6043F9A8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6043F9A8(_DWORD *a1)
{
  *a1 = off_60BFAB24;
  if ( (_DWORD *)dword_60C9CC7C == a1 )
  {
    dword_60C9CC7C = 0;
    (**(void (__fastcall ***)(int))dword_60C9CC80)(dword_60C9CC80);
    dword_60C9CC80 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
