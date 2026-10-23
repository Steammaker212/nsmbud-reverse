/* sub_609ACD4C
 * address: 0x609ACD4C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609ACD4C(int a1)
{
  int v2; // r5
  int TlsValue; // r0
  int CurrentCoreNumber; // r0
  char v5; // r1
  int result; // r0
  char v7; // r2

  v2 = dword_60CD09F8;
  TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
  if ( TlsValue )
    CurrentCoreNumber = TlsValue - 1;
  else
    CurrentCoreNumber = nn__os__GetCurrentCoreNumber(0);
  v5 = FIELD_U8(a1, 4);
  result = *(_DWORD *)(v2 + 608 * CurrentCoreNumber + 624);
  v7 = v5 & 0xFE;
  if ( (result & 1) != 0 )
    v7 = v5 | 1;
  FIELD_U8(a1, 4) = v7;
  return result;
}
