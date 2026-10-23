/* sub_604BA7C0
 * address: 0x604BA7C0   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BA7C0(int a1, int a2)
{
  _DWORD *v4; // r6
  char v5; // r12
  char v6; // r12
  char v7; // r12
  int v9[8]; // [sp+8h] [bp-20h] BYREF

  v4 = (_DWORD *)(a1 + 40);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60475C8C((int)v4);
  v9[0] = (int)&sead__SafeStringBase__vtable;
  v9[1] = (int)"Continue.bflyt";
  message_ref(v4, v9, 0, 0, 0);
  if ( ((unsigned int)dword_60CA2620 & ~(1615571016 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60CA2620) )
  {
    dword_60CA2644 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2648 = dword_60CA2564;
    dword_60CA264C = (int)&sead__SafeStringBase__vtable;
    dword_60CA2650 = dword_60CA256C;
    dword_60CA2654 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2658 = dword_60CA2574;
    dword_60CA265C = (int)&sead__SafeStringBase__vtable;
    dword_60CA2660 = dword_60CA257C;
    sub_60000288();
    _cxa_guard_release(dword_60CA2620);
  }
  v9[0] = 4;
  sub_60476030((int)v4, &dword_60CA2644, v9);
  if ( ((unsigned int)&dword_60CA2620[1] & ~(1615571216 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2620[1]) )
  {
    dword_60CA262C = (int)&sead__SafeStringBase__vtable;
    dword_60CA2630 = (int)"N_All_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA2620[1]);
  }
  v9[0] = 1;
  sub_6047518C((int)v4, a1 + 3648, &dword_60CA262C, v9);
  if ( ((unsigned int)&dword_60CA2620[2] & ~(1615571360 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2620[2]) )
  {
    dword_60CA2634 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2638 = (int)"T_ZankiNum_00";
    dword_60CA263C = (int)&sead__SafeStringBase__vtable;
    dword_60CA2640 = (int)"T_Num_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA2620[2]);
  }
  v9[0] = 2;
  sub_60475334((int)v4, a1 + 3652, &dword_60CA2634, v9);
  return sub_604BAD30(a1, a2);
}
