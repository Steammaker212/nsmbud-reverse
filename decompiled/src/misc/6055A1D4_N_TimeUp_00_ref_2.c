/* N_TimeUp_00_ref_2
 * address: 0x6055A1D4   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall N_TimeUp_00_ref_2(int a1)
{
  _DWORD *v2; // r4
  char v3; // r12
  char v4; // r12
  int v6[8]; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 40);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60475C8C((int)v2);
  v6[0] = (int)&sead__SafeStringBase__vtable;
  v6[1] = (int)"TimeUp.bflyt";
  message_ref(v2, v6, 0, 0, 0);
  if ( ((unsigned int)dword_60CADA20 & ~(1616224856 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CADA20) )
  {
    dword_60CADA30 = (int)&sead__SafeStringBase__vtable;
    dword_60CADA34 = dword_60CAD988;
    dword_60CADA38 = (int)&sead__SafeStringBase__vtable;
    dword_60CADA3C = dword_60CAD990;
    sub_60000288();
    _cxa_guard_release(dword_60CADA20);
  }
  v6[0] = 2;
  sub_60476030((int)v2, &dword_60CADA30, v6);
  if ( ((unsigned int)&dword_60CADA20[1] & ~(1616225016 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CADA20[1]) )
  {
    dword_60CADA28 = (int)&sead__SafeStringBase__vtable;
    dword_60CADA2C = (int)"N_TimeUp_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CADA20[1]);
  }
  v6[0] = 1;
  return sub_6047518C((int)v2, a1 + 3692, &dword_60CADA28, v6);
}
