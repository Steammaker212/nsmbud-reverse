/* sub_6093E884
 * address: 0x6093E884   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6093E884(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, char a11)
{
  int TlsValue; // r0
  int v16; // r2
  int CurrentCoreNumber; // r0
  int v18; // r1
  int v20; // [sp+24h] [bp-34h]

  TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
  v16 = a5;
  if ( TlsValue )
  {
    CurrentCoreNumber = TlsValue - 1;
  }
  else
  {
    CurrentCoreNumber = nn__os__GetCurrentCoreNumber(0);
    v16 = a5;
  }
  v18 = 5;
  if ( !a7 )
    v18 = 1;
  return sub_6093E3D8(a1, a2, a1 + 608 * CurrentCoreNumber + 24, a3, a4, v18, v16, a6, 1, a7, 1, a8, 1, v20, 0, a11);
}
