/* sub_6048AA24
 * address: 0x6048AA24   size: 712   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048AA24(_DWORD *a1)
{
  char v1; // r12
  int v3; // r7
  int v4; // r6
  int (__fastcall *v5)(int, int, int); // r4
  int v6; // r6
  int (__fastcall *v7)(int, int, int); // r4
  int v8; // r6
  int (__fastcall *v9)(int, int, int); // r4
  int v10; // r6
  int (__fastcall *v11)(int, int, int); // r4
  int result; // r0

  if ( ((unsigned int)&dword_60C9FD50[2] & ~(1615374912 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9FD50[2]) )
  {
    dword_60C9FE50 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FE54 = (int)"L_CategoryListTime_00";
    dword_60C9FE58 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FE5C = (int)"L_CategoryListCoin_00";
    dword_60C9FE60 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FE64 = (int)"L_CategoryList1UP_00";
    dword_60C9FE68 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FE6C = (int)"L_CategoryListSpecial_00";
    sub_60000288();
    _cxa_guard_release(&dword_60C9FD50[2]);
  }
  if ( ((unsigned int)&dword_60C9FD50[3] & ~(1615375080 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9FD50[3]) )
  {
    dword_60C9FE70 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FE74 = (int)"Pa_ScrollBtnTime_00";
    dword_60C9FE78 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FE7C = (int)"Pa_ScrollBtnCoin_00";
    dword_60C9FE80 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FE84 = (int)"Pa_ScrollBtn1UP_00";
    dword_60C9FE88 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FE8C = (int)"Pa_ScrollBtnSpecial_00";
    sub_60000288();
    _cxa_guard_release(&dword_60C9FD50[3]);
  }
  v3 = a1[13];
  (*(void (__fastcall **)(int *))(dword_60C9FE50 + 12))(&dword_60C9FE50);
  v4 = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(v3 + 12) + 48))(FIELD_U32(v3, 12), dword_60C9FE54, 1);
  v5 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v4 + 48);
  (*(void (__fastcall **)(int *))(dword_60C9FE70 + 12))(&dword_60C9FE70);
  a1[938] = v5(v4, dword_60C9FE74, 1);
  (*(void (__fastcall **)(int *))(dword_60C9FE58 + 12))(&dword_60C9FE58);
  v6 = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(v3 + 12) + 48))(FIELD_U32(v3, 12), dword_60C9FE5C, 1);
  v7 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v6 + 48);
  (*(void (__fastcall **)(int *))(dword_60C9FE78 + 12))(&dword_60C9FE78);
  a1[939] = v7(v6, dword_60C9FE7C, 1);
  (*(void (__fastcall **)(int *))(dword_60C9FE60 + 12))(&dword_60C9FE60);
  v8 = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(v3 + 12) + 48))(FIELD_U32(v3, 12), dword_60C9FE64, 1);
  v9 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v8 + 48);
  (*(void (__fastcall **)(int *))(dword_60C9FE80 + 12))(&dword_60C9FE80);
  a1[940] = v9(v8, dword_60C9FE84, 1);
  (*(void (__fastcall **)(int *))(dword_60C9FE68 + 12))(&dword_60C9FE68);
  v10 = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(v3 + 12) + 48))(FIELD_U32(v3, 12), dword_60C9FE6C, 1);
  v11 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v10 + 48);
  (*(void (__fastcall **)(int *))(dword_60C9FE88 + 12))(&dword_60C9FE88);
  result = v11(v10, dword_60C9FE8C, 1);
  a1[941] = result;
  return result;
}
