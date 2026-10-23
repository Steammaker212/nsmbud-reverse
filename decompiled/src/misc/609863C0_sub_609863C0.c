/* sub_609863C0
 * address: 0x609863C0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609863C0(_DWORD *a1)
{
  *a1 = off_60C5FD84;
  if ( (_DWORD *)dword_60CD0C20 == a1 )
  {
    dword_60CD0C20 = 0;
    (**(void (__fastcall ***)(int))dword_60CD0C24)(dword_60CD0C24);
    dword_60CD0C24 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
