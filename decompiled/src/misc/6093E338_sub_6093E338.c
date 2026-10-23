/* sub_6093E338
 * address: 0x6093E338   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6093E338(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int TlsValue; // r0
  int v13; // r3
  int CurrentCoreNumber; // r0

  TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
  v13 = a5;
  if ( TlsValue )
  {
    CurrentCoreNumber = TlsValue - 1;
  }
  else
  {
    CurrentCoreNumber = nn__os__GetCurrentCoreNumber(0);
    v13 = a5;
  }
  return ((int (__fastcall *)(int, int, int, int, int, int, int, int, int, _DWORD, int, int, int))sub_6093E3D8)(
           a1,
           a2,
           a1 + 608 * CurrentCoreNumber + 24,
           a3,
           a4,
           1,
           v13,
           a6,
           a7,
           0,
           1,
           a8,
           1);
}
