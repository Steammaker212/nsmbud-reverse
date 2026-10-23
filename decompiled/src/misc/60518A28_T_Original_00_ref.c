/* T_Original_00_ref
 * address: 0x60518A28   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall T_Original_00_ref(int a1)
{
  _DWORD *v2; // r4
  char v3; // r12
  char v4; // r12
  int v6[8]; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 40);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60475C8C((int)v2);
  v6[0] = (int)&sead__SafeStringBase__vtable;
  v6[1] = (int)"PreGameEdit.bflyt";
  message_ref(v2, v6, 0, 0, 0);
  if ( ((unsigned int)dword_60CA89C0 & ~(1615956652 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CA89C0) )
  {
    dword_60CA89D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA89D4 = dword_60CA8948;
    dword_60CA89D8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA89DC = dword_60CA8950;
    dword_60CA89E0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA89E4 = dword_60CA8958;
    sub_60000288();
    _cxa_guard_release(dword_60CA89C0);
  }
  v6[0] = 3;
  sub_60476030((int)v2, &dword_60CA89D0, v6);
  if ( ((unsigned int)&dword_60CA89C0[1] & ~(1615956832 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CA89C0[1]) )
  {
    dword_60CA89C8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA89CC = (int)"T_Original_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA89C0[1]);
  }
  v6[0] = 1;
  sub_60475334((int)v2, a1 + 3608, &dword_60CA89C8, v6);
  sub_60473DE4(v2, 0, &dword_60CA8944, 0);
  return sub_60473DE4(v2, 1u, &dword_60CA894C, 1);
}
