/* sub_60819F14
 * address: 0x60819F14   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60819F14(_DWORD *a1)
{
  *a1 = off_60C2A2E8;
  if ( (_DWORD *)dword_60CC6BF8 == a1 )
  {
    dword_60CC6BF8 = 0;
    dword_60CC6BFC = 0;
  }
  return sead__IDisposer__dtor(a1);
}
