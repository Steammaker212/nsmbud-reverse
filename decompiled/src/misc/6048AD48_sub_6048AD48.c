/* sub_6048AD48
 * address: 0x6048AD48   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048AD48(int a1)
{
  char v1; // r12
  int v3; // r9
  int v4; // r6
  int v5; // r8
  int i; // r4
  int v7; // r0
  int *v8; // r7
  int v9; // r5
  int (__fastcall *v10)(int, int, int); // r11
  int result; // r0

  if ( ((unsigned int)&dword_60C9FD50[4] & ~(1615375720 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9FD50[4]) )
  {
    dword_60C9FF30 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FF34 = (int)"B_Btn_00";
    dword_60C9FF38 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FF3C = (int)"B_Btn_00";
    dword_60C9FF40 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FF44 = (int)"B_Btn_00";
    dword_60C9FF48 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FF4C = (int)"B_Btn_00";
    dword_60C9FF50 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FF54 = (int)"B_Btn_00";
    dword_60C9FF58 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FF5C = (int)"B_Arrow_00";
    dword_60C9FF60 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FF64 = (int)"B_Arrow_00";
    sub_60000288();
    _cxa_guard_release(&dword_60C9FD50[4]);
  }
  v3 = FIELD_U32(a1, 52);
  v4 = 8;
  v5 = a1 + 6276;
  for ( i = 0; i != 7; ++i )
  {
    v7 = sub_604918C8(i);
    v8 = &dword_60C9FF10[2 * i];
    v9 = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(v3 + 12) + 48))(FIELD_U32(v3, 12), v7, 1);
    v10 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v9 + 48);
    (*(void (__fastcall **)(int *))(v8[8] + 12))(&dword_60C9FF10[v4]);
    result = v10(v9, v8[9], 1);
    *(_DWORD *)(v5 + 4 * i) = result;
    v4 += 2;
  }
  return result;
}
