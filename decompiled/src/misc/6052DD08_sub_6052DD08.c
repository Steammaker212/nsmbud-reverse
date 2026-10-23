/* sub_6052DD08
 * address: 0x6052DD08   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052DD08(int a1, unsigned int a2)
{
  char v2; // r12
  unsigned int v5; // r4
  unsigned int v6; // r0

  v5 = 0;
  if ( a2 < 4 )
    v5 = a2;
  if ( ((unsigned int)&dword_60CAA6A4[2] & ~(1616043328 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAA6A4[2]) )
  {
    dword_60CAA730 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA734 = (int)"G_MVP1P_00";
    dword_60CAA738 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA73C = (int)"G_MVP2P_00";
    dword_60CAA740 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA744 = (int)"G_MVP3P_00";
    dword_60CAA748 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA74C = (int)"G_MVP4P_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAA6A4[2]);
  }
  v6 = sub_604746E4(a1 + 72, &dword_60CAA6E0, &dword_60CAA710[2 * v5 + 8]);
  sub_604742D0((_DWORD *)(a1 + 72), a2 + 2, &dword_60CAA6E0, v6, 1.0, 0);
  *(_BYTE *)(a1 + v5 + 68) = 0;
  return a1 + v5;
}
