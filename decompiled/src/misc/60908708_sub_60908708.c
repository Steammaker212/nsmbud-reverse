/* sub_60908708
 * address: 0x60908708   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60908708(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C5CE28;
  if ( (_DWORD *)dword_60CCF440 == a1 )
  {
    dword_60CCF440 = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)sead__ThreadMgr__sInstance + 4))(sead__ThreadMgr__sInstance);
    sead__ThreadMgr__sInstance = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
