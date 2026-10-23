/* sub_604B39BC
 * address: 0x604B39BC   size: 1228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B39BC(int *a1)
{
  char v1; // r12
  int v3; // r0
  char v4; // r12
  void (__fastcall *v5)(int *, int *, int *); // r3
  char v6; // r12
  void (__fastcall *v7)(int *, int *, int *); // r3
  char v8; // r12
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v17; // [sp+4h] [bp-2Ch] BYREF
  int v18[10]; // [sp+8h] [bp-28h] BYREF

  if ( ((unsigned int)&dword_60CA1BEC[1] & ~(1615542748 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA1BEC[1]) )
  {
    dword_60CA1C2C = (int)&sead__SafeStringBase__vtable;
    dword_60CA1C30 = (int)"Pa_StarCoin_00";
    dword_60CA1C34 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1C38 = (int)"Pa_Coin_00";
    dword_60CA1C3C = (int)&sead__SafeStringBase__vtable;
    dword_60CA1C40 = (int)"Pa_ArrowBtnT_00";
    dword_60CA1C44 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1C48 = (int)"Pa_ArrowBtnB_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA1BEC[1]);
  }
  if ( ((unsigned int)&dword_60CA1BEC[2] & ~(1615542912 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA1BEC[2]) )
  {
    dword_60CA1C0C = (int)&sead__SafeStringBase__vtable;
    dword_60CA1C10 = (int)"T_Num_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA1BEC[2]);
  }
  v3 = a1[1];
  v18[0] = 4;
  sub_604756E0(v3, (int)(a1 + 150), &dword_60CA1C2C, v18);
  sub_604734E4(a1 + 158, 0);
  sub_60476388(a1 + 158, a1[1], &dword_60CA1C2C);
  if ( ((unsigned int)&dword_60CA1BEC[3] & ~(1615543096 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CA1BEC[3]) )
  {
    dword_60CA1C14 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1C18 = dword_60CA1B90;
    sub_60000288();
    _cxa_guard_release(&dword_60CA1BEC[3]);
  }
  v5 = *(void (__fastcall **)(int *, int *, int *))(a1[158] + 8);
  v18[0] = 1;
  v5(a1 + 158, &dword_60CA1C14, v18);
  sub_604734E4(a1 + 1043, 0);
  sub_60476388(a1 + 1043, a1[1], &dword_60CA1C34);
  if ( ((unsigned int)&dword_60CA1BEC[3] & ~(1615543288 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CA1BEC[3]) )
  {
    dword_60CA1C14 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1C18 = dword_60CA1B90;
    sub_60000288();
    _cxa_guard_release(&dword_60CA1BEC[3]);
  }
  v7 = *(void (__fastcall **)(int *, int *, int *))(a1[1043] + 8);
  v18[0] = 1;
  v7(a1 + 1043, &dword_60CA1C14, v18);
  (*(void (__fastcall **)(_DWORD, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(**(_DWORD **)(a1[1] + 3520) + 12))(
    *(_DWORD *)(a1[1] + 3520),
    sub_609909D8,
    0);
  if ( ((unsigned int)&dword_60CA1BEC[4] & ~(1615543472 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CA1BEC[4]) )
  {
    dword_60CA1C1C = (int)&sead__SafeStringBase__vtable;
    dword_60CA1C20 = (int)"B_Btn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA1BEC[4]);
  }
  if ( ((unsigned int)&dword_60CA1BEC[5] & ~(1615543588 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CA1BEC[5]) )
  {
    dword_60CA1C24 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1C28 = (int)"B_Arrow_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA1BEC[5]);
  }
  v9 = a1[1];
  v18[0] = 1;
  sub_604755C4(v9, (int)(a1 + 154), &dword_60CA1C2C, (int)&dword_60CA1C1C, v18);
  v10 = a1[1];
  v18[0] = 1;
  sub_604755C4(v10, (int)(a1 + 155), &dword_60CA1C34, (int)&dword_60CA1C1C, v18);
  v11 = a1[1];
  v18[0] = 1;
  sub_604755C4(v11, (int)(a1 + 156), &dword_60CA1C3C, (int)&dword_60CA1C24, v18);
  v12 = a1[1];
  v18[0] = 1;
  sub_604755C4(v12, (int)(a1 + 157), &dword_60CA1C44, (int)&dword_60CA1C24, v18);
  v13 = a1[1];
  v18[0] = 1;
  sub_60475570(v13, (int)(a1 + 147), &dword_60CA1C34, (int)&dword_60CA1C0C, v18);
  v14 = a1[1];
  v18[0] = 1;
  sub_60475570(v14, (int)(a1 + 148), &dword_60CA1C2C, (int)&dword_60CA1C0C, v18);
  v18[0] = (int)&sead__SafeStringBase__vtable;
  v18[1] = (int)"T_Attention_00";
  v15 = a1[1];
  v17 = 1;
  return sub_604753A8(v15, (int)(a1 + 149), v18, &v17);
}
