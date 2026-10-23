/* sub_60440C2C
 * address: 0x60440C2C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60440C2C(_DWORD *a1, int a2)
{
  int TlsValue; // r0
  int CurrentCoreNumber; // r0
  _DWORD *v6; // r0
  int result; // r0

  sead__CriticalSection__lock(a2 + 188);
  TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
  if ( TlsValue )
    CurrentCoreNumber = TlsValue - 1;
  else
    CurrentCoreNumber = nn__os__GetCurrentCoreNumber(0);
  v6 = (_DWORD *)(a2 + 52 * CurrentCoreNumber);
  *a1 = v6[11];
  a1[1] = v6[12];
  result = v6[13];
  a1[2] = result;
  return result;
}
