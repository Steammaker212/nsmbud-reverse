/* sead__ThreadMgr__createInstance
 * address: 0x60908780   size: 120   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__ThreadMgr__createInstance(_DWORD *a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = sead__ThreadMgr__sInstance;
  if ( !sead__ThreadMgr__sInstance )
  {
    v2 = operator_new_8DE2C8(0x4Cu, (int)a1, 4);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    FIELD_U32(v2, 4) = off_60C5CE28;
    dword_60CCF440 = (int)v3;
    sub_60908AC4(v2);
    sead__ThreadMgr__sInstance = v2;
  }
  return v2;
}
