/* sub_6050B5E4
 * address: 0x6050B5E4   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050B5E4(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // r4
  char v6; // r12
  unsigned int v7; // r3
  int result; // r0
  int v9; // r0
  int v10; // [sp+4h] [bp-14h] BYREF

  v3 = (_DWORD *)(a1 + 40);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60476388(v3, a2, a3);
  if ( ((unsigned int)&dword_60CA7EC0 & ~(1615902252 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CA7EC0) )
  {
    dword_60CA7EDC = (int)&sead__SafeStringBase__vtable;
    dword_60CA7EE0 = dword_60CA7EC8;
    dword_60CA7EE4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7EE8 = dword_60CA7ED0;
    sub_60000288();
    _cxa_guard_release(&dword_60CA7EC0);
  }
  v10 = 2;
  sub_60474848((int)v3, &dword_60CA7EDC, &v10);
  v7 = sub_604746E4((int)v3, &dword_60CA7EC4, &dword_60CA7ED4);
  if ( v7 != -1 )
    sub_604742D0(v3, 0, &dword_60CA7EC4, v7, 1.0, 0);
  result = sub_6047482C((int)v3, 0);
  if ( result )
  {
    v9 = sub_6047482C((int)v3, 0);
    return (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 104))(v9);
  }
  return result;
}
