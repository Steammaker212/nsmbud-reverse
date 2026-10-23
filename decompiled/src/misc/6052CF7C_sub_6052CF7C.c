/* sub_6052CF7C
 * address: 0x6052CF7C   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052CF7C(int a1)
{
  _DWORD *v2; // r4
  char v3; // r12
  int v5[8]; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 72);
  sub_604734E4((_DWORD *)(a1 + 72), 0);
  sub_60475C8C((int)v2);
  v5[0] = (int)&sead__SafeStringBase__vtable;
  v5[1] = (int)"ResultFree.bflyt";
  message_ref(v2, v5, 0, 0, 0);
  sub_6052DFA0(a1);
  if ( ((unsigned int)dword_60CAA6A4 & ~(1616039948 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CAA6A4) )
  {
    dword_60CAA790 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA794 = dword_60CAA6B4;
    dword_60CAA798 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA79C = dword_60CAA6BC;
    dword_60CAA7A0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA7A4 = dword_60CAA6C4;
    dword_60CAA7A8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA7AC = dword_60CAA6CC;
    dword_60CAA7B0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA7B4 = dword_60CAA6D4;
    dword_60CAA7B8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA7BC = dword_60CAA6DC;
    dword_60CAA7C0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA7C4 = dword_60CAA6E4;
    dword_60CAA7C8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA7CC = dword_60CAA6EC;
    dword_60CAA7D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA7D4 = dword_60CAA6F4;
    dword_60CAA7D8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA7DC = dword_60CAA6FC;
    sub_60000288();
    _cxa_guard_release(dword_60CAA6A4);
  }
  v5[0] = 10;
  return sub_60476030((int)v2, &dword_60CAA790, v5);
}
