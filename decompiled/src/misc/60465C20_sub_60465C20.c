/* sub_60465C20
 * address: 0x60465C20   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60465C20(_DWORD *a1)
{
  *a1 = off_60BFB884;
  if ( (_DWORD *)dword_60C9D3E0 == a1 )
  {
    dword_60C9D3E0 = 0;
    dword_60C9D3E4 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
