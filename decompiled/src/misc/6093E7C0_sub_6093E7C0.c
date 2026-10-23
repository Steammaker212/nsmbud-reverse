/* sub_6093E7C0
 * address: 0x6093E7C0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6093E7C0(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        char a12)
{
  int TlsValue; // r0
  char v17; // r2
  int v18; // r3
  int v19; // r5
  int CurrentCoreNumber; // r0
  int v22; // [sp+24h] [bp-34h]

  TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
  v17 = a12;
  v18 = a8;
  v19 = a6;
  if ( TlsValue )
  {
    CurrentCoreNumber = TlsValue - 1;
  }
  else
  {
    CurrentCoreNumber = nn__os__GetCurrentCoreNumber(0);
    v17 = a12;
    v19 = a6;
    v18 = a8;
  }
  return sub_6093E3D8(a1, a2, a1 + 608 * CurrentCoreNumber + 24, a3, a4, 4, a5, v19, v18, 0, a7, a9, 1, v22, 0, v17);
}
