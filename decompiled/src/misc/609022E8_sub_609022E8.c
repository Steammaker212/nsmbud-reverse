/* sub_609022E8
 * address: 0x609022E8   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609022E8(_DWORD *a1)
{
  int v2; // r6
  int v3; // r0

  *a1 = off_60C5CB8C;
  if ( (_DWORD *)dword_60CCEF78 == a1 )
  {
    dword_60CCEF78 = 0;
    v2 = sead__ResourceMgr__sInstance;
    v3 = FIELD_U32(sead__ResourceMgr__sInstance, 40);
    if ( v3 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
      FIELD_U32(v2, 40) = 0;
    }
    sead__ResourceMgr__sInstance = 0;
  }
  return sead__IDisposer__dtor(a1);
}
