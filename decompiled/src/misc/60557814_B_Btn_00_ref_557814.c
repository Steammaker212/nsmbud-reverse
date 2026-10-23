/* B_Btn_00_ref_557814
 * address: 0x60557814   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall B_Btn_00_ref_557814(int a1, _DWORD *a2)
{
  char v2; // r12
  int v6[9]; // [sp+4h] [bp-24h] BYREF

  if ( ((unsigned int)&dword_60CAD610[3] & ~(1616214072 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAD610[3]) )
  {
    dword_60CAD630 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD634 = (int)"B_Btn_00";
    dword_60CAD638 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD63C = (int)"B_Btn_00";
    dword_60CAD640 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD644 = (int)"B_Btn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAD610[3]);
  }
  v6[0] = 1;
  sub_604755C4(a1 + 44, a1 + 3636, a2, (int)&dword_60CAD630, v6);
  v6[0] = 1;
  sub_604755C4(a1 + 44, a1 + 3640, a2 + 2, (int)&dword_60CAD638, v6);
  v6[0] = 1;
  return sub_604755C4(a1 + 44, a1 + 3644, a2 + 4, (int)&dword_60CAD640, v6);
}
