/* sub_60400244
 * address: 0x60400244   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60400244(_DWORD *a1)
{
  *a1 = off_60BF9844;
  if ( (_DWORD *)dword_60C99E38 == a1 )
  {
    dword_60C99E38 = 0;
    AreaRumbleMgr_instance = 0;
  }
  return sead__IDisposer__dtor(a1);
}
