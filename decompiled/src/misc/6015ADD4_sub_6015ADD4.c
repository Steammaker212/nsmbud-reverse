/* sub_6015ADD4
 * address: 0x6015ADD4   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6015ADD4(_DWORD *a1)
{
  *a1 = off_60BD4868;
  if ( (_DWORD *)dword_60C88230 == a1 )
  {
    dword_60C88230 = 0;
    ActiveColliderMgr_instance = 0;
  }
  return sead__IDisposer__dtor(a1);
}
