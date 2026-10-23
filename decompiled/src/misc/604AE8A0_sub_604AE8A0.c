/* sub_604AE8A0
 * address: 0x604AE8A0   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AE8A0(int a1)
{
  _DWORD *v2; // r5
  char v3; // r12
  int v5[8]; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 36);
  sub_604734E4((_DWORD *)(a1 + 36), 0);
  sub_60475C8C((int)v2);
  v5[0] = (int)&sead__SafeStringBase__vtable;
  v5[1] = (int)"CoinEditCursor.bflyt";
  message_ref(v2, v5, 0, 0, 0);
  if ( ((unsigned int)dword_60CA1850 & ~(1615522084 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CA1850) )
  {
    dword_60CA18B0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA18B4 = dword_60CA185C;
    dword_60CA18B8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA18BC = dword_60CA1864;
    dword_60CA18C0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA18C4 = dword_60CA186C;
    dword_60CA18C8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA18CC = dword_60CA1874;
    dword_60CA18D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA18D4 = dword_60CA187C;
    dword_60CA18D8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA18DC = dword_60CA1884;
    dword_60CA18E0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA18E4 = dword_60CA188C;
    dword_60CA18E8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA18EC = dword_60CA1894;
    dword_60CA18F0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA18F4 = dword_60CA189C;
    dword_60CA18F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA18FC = dword_60CA18A4;
    sub_60000288();
    _cxa_guard_release(dword_60CA1850);
  }
  v5[0] = 10;
  sub_60476030((int)v2, &dword_60CA18B0, v5);
  return (*(int (__fastcall **)(_DWORD, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(**(_DWORD **)(a1 + 3556)
                                                                                             + 12))(
           FIELD_U32(a1, 3556),
           sub_609909D8,
           0);
}
