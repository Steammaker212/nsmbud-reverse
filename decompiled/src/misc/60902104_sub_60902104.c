/* sub_60902104
 * address: 0x60902104   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60902104(_DWORD *a1)
{
  int v2; // r5

  *a1 = off_60C5CB68;
  v2 = sead__ResourceMgr__sInstance;
  if ( sead__ResourceMgr__sInstance )
  {
    sub_60902734(sead__ResourceMgr__sInstance, a1);
    if ( *(_DWORD **)(v2 + 44) == a1 )
      sub_60902770(v2, 0);
  }
  return sead__IDisposer__dtor(a1);
}
