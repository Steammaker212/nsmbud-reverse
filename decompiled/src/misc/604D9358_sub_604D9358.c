/* sub_604D9358
 * address: 0x604D9358   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D9358(_DWORD *a1)
{
  char v1; // r12
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v9; // [sp+8h] [bp-30h] BYREF
  int (**v10)(); // [sp+Ch] [bp-2Ch] BYREF
  int v11; // [sp+10h] [bp-28h]

  if ( ((unsigned int)&dword_60CA4D40[3] & ~(1615696760 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4D40[3]) )
  {
    dword_60CA4DD0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4DD4 = (int)"B_Btn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA4D40[3]);
  }
  if ( ((unsigned int)&dword_60CA4D40[4] & ~(1615696884 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4D40[4]) )
  {
    dword_60CA4DD8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4DDC = (int)"B_Arrow_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA4D40[4]);
  }
  v3 = a1[918];
  v9 = 1;
  v10 = &sead__SafeStringBase__vtable;
  v11 = v3 + 136;
  sub_604755C4((int)(a1 + 11), (int)(a1 + 1443), &v10, (int)&dword_60CA4DD0, &v9);
  v4 = a1[919];
  v10 = &sead__SafeStringBase__vtable;
  v9 = 1;
  v11 = v4 + 136;
  sub_604755C4((int)(a1 + 11), (int)(a1 + 1444), &v10, (int)&dword_60CA4DD0, &v9);
  v5 = a1[920];
  v10 = &sead__SafeStringBase__vtable;
  v9 = 1;
  v11 = v5 + 136;
  sub_604755C4((int)(a1 + 11), (int)(a1 + 1445), &v10, (int)&dword_60CA4DD0, &v9);
  v6 = a1[921];
  v10 = &sead__SafeStringBase__vtable;
  v9 = 1;
  v11 = v6 + 136;
  sub_604755C4((int)(a1 + 11), (int)(a1 + 1446), &v10, (int)&dword_60CA4DD8, &v9);
  v7 = a1[922];
  v10 = &sead__SafeStringBase__vtable;
  v9 = 1;
  v11 = v7 + 136;
  return sub_604755C4((int)(a1 + 11), (int)(a1 + 1447), &v10, (int)&dword_60CA4DD8, &v9);
}
