/* sub_609ACCCC
 * address: 0x609ACCCC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609ACCCC(int a1)
{
  int v2; // r5
  int TlsValue; // r0
  int CurrentCoreNumber; // r0

  v2 = dword_60CD09F8;
  TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
  if ( TlsValue )
    CurrentCoreNumber = TlsValue - 1;
  else
    CurrentCoreNumber = nn__os__GetCurrentCoreNumber(0);
  if ( (*(_DWORD *)(v2 + 608 * CurrentCoreNumber + 624) & 1) != 0 )
  {
    FIELD_U8(a1, 4) &= ~1u;
    FIELD_U32(a1, 8) = 0;
  }
  return 1;
}
