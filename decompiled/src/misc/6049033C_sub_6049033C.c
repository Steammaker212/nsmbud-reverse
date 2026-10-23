/* sub_6049033C
 * address: 0x6049033C   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049033C(_DWORD *a1, int a2, unsigned int a3)
{
  char v3; // r12
  unsigned int v6; // r6

  if ( ((unsigned int)&dword_60C9FD84[1] & ~(1615397732 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9FD84[1]) )
  {
    dword_60C9FED0 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FED4 = (int)"Pa_TimeBtn_00";
    dword_60C9FED8 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FEDC = (int)"Pa_CoinBtn_00";
    dword_60C9FEE0 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FEE4 = (int)"Pa_1UPBtn_00";
    dword_60C9FEE8 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FEEC = (int)"Pa_SpecialBtn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60C9FD84[1]);
  }
  v6 = 0;
  sub_604734E4(a1, 0);
  if ( a3 < 4 )
    v6 = a3;
  return sub_60476388(a1, a2, &dword_60C9FEB0[2 * v6 + 8]);
}
