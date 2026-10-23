/* sub_6047F5AC
 * address: 0x6047F5AC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6047F5AC(_DWORD *a1)
{
  *a1 = off_60BFD32C;
  if ( (_DWORD *)dword_60C9EBB0 == a1 )
  {
    dword_60C9EBB0 = 0;
    dword_60C9EBB4 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
