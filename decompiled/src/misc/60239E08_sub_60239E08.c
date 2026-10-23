/* sub_60239E08
 * address: 0x60239E08   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60239E08(int a1, int a2)
{
  int v4; // r5
  int v5; // r4
  int TlsValue; // r0
  int result; // r0

  sub_60917A78(a2 + 64);
  v4 = FIELD_U32(a1, 16);
  v5 = FIELD_U32(a2, 256);
  TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
  if ( TlsValue )
    result = TlsValue - 1;
  else
    result = nn__os__GetCurrentCoreNumber(0);
  if ( FIELD_U32(v4, 4) > result )
  {
    result = FIELD_U32(v4, 8) + 2416 * result;
    FIELD_U32(result, 1864) = v5;
    FIELD_U32(result, 1868) = 0;
  }
  return result;
}
