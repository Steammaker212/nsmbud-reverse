/* sub_60729858
 * address: 0x60729858   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60729858(_DWORD *a1)
{
  *a1 = off_60C21E24;
  if ( (_DWORD *)dword_60CBD8A8 == a1 )
  {
    dword_60CBD8A8 = 0;
    EventMgr__instance = 0;
  }
  return sead__IDisposer__dtor(a1);
}
