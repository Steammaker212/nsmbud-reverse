/* sub_60545310
 * address: 0x60545310   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60545310(int a1)
{
  char v1; // r12
  char v3; // r12
  int v5; // [sp+0h] [bp-20h] BYREF
  int v6; // [sp+4h] [bp-1Ch] BYREF

  if ( ((unsigned int)&dword_60CAC380[1] & ~(1616139056 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAC380[1]) )
  {
    dword_60CAC38C = (int)&sead__SafeStringBase__vtable;
    dword_60CAC390 = (int)"N_SaveData_00";
    dword_60CAC394 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC398 = (int)"N_SaveData_01";
    sub_60000288();
    _cxa_guard_release(&dword_60CAC380[1]);
  }
  v6 = 2;
  sub_6047518C(a1 + 44, a1 + 31432, &dword_60CAC38C, &v6);
  if ( ((unsigned int)&dword_60CAC380[2] & ~(1616139224 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CAC380[2]) )
  {
    dword_60CAC39C = (int)&sead__SafeStringBase__vtable;
    dword_60CAC3A0 = (int)"Pa_SetUp_00";
    dword_60CAC3A4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC3A8 = (int)"Pa_SetUpDL_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAC380[2]);
  }
  v5 = 2;
  return sub_604756E0(a1 + 44, a1 + 31440, &dword_60CAC39C, &v5);
}
