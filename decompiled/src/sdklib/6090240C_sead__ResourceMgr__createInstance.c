/* sead__ResourceMgr__createInstance
 * address: 0x6090240C   size: 104   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sead__ResourceMgr__createInstance(_DWORD *a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  result = (_DWORD *)sead__ResourceMgr__sInstance;
  if ( !sead__ResourceMgr__sInstance )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x30u, (int)a1, 4);
    v4 = sead__IDisposer__ctor(v3, a1, 3u);
    *v4 = off_60C5CB8C;
    dword_60CCEF78 = (int)v4;
    result = sead__ResourceMgr__ctor(v4);
    sead__ResourceMgr__sInstance = (int)result;
  }
  return result;
}
