/* sub_60007410
 * address: 0x60007410   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60007410(_DWORD *a1)
{
  *a1 = off_60BC0228;
  if ( (_DWORD *)dword_60C7B3FC == a1 )
  {
    dword_60C7B3FC = 0;
    sub_600076EC(ActorMgr__instance);
    ActorMgr__instance = 0;
  }
  return sead__IDisposer__dtor(a1);
}
