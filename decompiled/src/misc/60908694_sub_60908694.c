/* sub_60908694
 * address: 0x60908694   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60908694(_DWORD *a1)
{
  *a1 = off_60C5CE28;
  if ( (_DWORD *)dword_60CCF440 == a1 )
  {
    dword_60CCF440 = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)sead__ThreadMgr__sInstance + 4))(sead__ThreadMgr__sInstance);
    sead__ThreadMgr__sInstance = 0;
  }
  return sead__IDisposer__dtor(a1);
}
