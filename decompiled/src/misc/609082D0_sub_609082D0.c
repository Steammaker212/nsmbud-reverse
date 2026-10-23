/* sub_609082D0
 * address: 0x609082D0   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609082D0(_DWORD *a1)
{
  int v2; // r5
  int CurrentCoreNumber; // r0

  nn__os__SetTlsValue(*(_DWORD *)(sead__ThreadMgr__sInstance + 72), a1);
  if ( (unsigned int)sub_60911400(a1 + 31) <= 1 )
  {
    v2 = dword_60CCFC58;
    CurrentCoreNumber = nn__os__GetCurrentCoreNumber((nn__os *)&dword_60CCFC58);
    nn__os__SetTlsValue(v2, CurrentCoreNumber + 1);
  }
  a1[29] = nn__os__GetThreadId(a1[32]);
  a1[30] = 1;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 64))(a1);
  a1[30] = 3;
  return 3;
}
