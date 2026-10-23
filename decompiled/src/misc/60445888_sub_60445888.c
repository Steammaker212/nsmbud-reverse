/* sub_60445888
 * address: 0x60445888   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60445888(_DWORD *a1)
{
  *a1 = off_60BFAEF0;
  if ( (_DWORD *)dword_60C9CD54 == a1 )
  {
    dword_60C9CD54 = 0;
    sub_6091E720(dword_60C9CD58 + 124);
    dword_60C9CD58 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
