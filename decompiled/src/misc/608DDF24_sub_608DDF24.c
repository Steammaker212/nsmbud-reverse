/* sub_608DDF24
 * address: 0x608DDF24   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_608DDF24(_DWORD *a1)
{
  int TlsValue; // r0
  int CurrentCoreNumber; // r0
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
  if ( TlsValue )
    CurrentCoreNumber = TlsValue - 1;
  else
    CurrentCoreNumber = nn__os__GetCurrentCoreNumber(0);
  v5[1] = CurrentCoreNumber;
  v5[0] = 1 << CurrentCoreNumber;
  sub_60908478(a1, v5);
  return sub_609085F8(a1);
}
