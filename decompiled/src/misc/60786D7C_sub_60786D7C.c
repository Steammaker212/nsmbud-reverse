/* sub_60786D7C
 * address: 0x60786D7C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60786D7C(_DWORD *a1)
{
  *a1 = off_60C24A74;
  if ( (_DWORD *)dword_60CC4368 == a1 )
  {
    dword_60CC4368 = 0;
    PlayerMgr_instance = 0;
  }
  return sead__IDisposer__dtor(a1);
}
