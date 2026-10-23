/* sub_604B1478
 * address: 0x604B1478   size: 1640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B1478(_DWORD *a1)
{
  char v1; // r12
  int v3; // r5
  char v4; // r12
  char v5; // r12
  char v6; // r12
  void (__fastcall *v7)(_DWORD *, int *, int *); // r3
  char v8; // r12
  void (__fastcall *v9)(_DWORD *, int *, int *); // r3
  char v10; // r12
  void (__fastcall *v11)(_DWORD *, int *, int *); // r3
  _DWORD *v12; // r4
  char v13; // r12
  int (__fastcall *v14)(_DWORD *, int *, int *); // r3
  int v16[9]; // [sp+4h] [bp-24h] BYREF

  if ( ((unsigned int)&dword_60CA1A80[1] & ~(1615533208 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA1A80[1]) )
  {
    dword_60CA1A94 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1A98 = (int)"N_TopBottom_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA1A80[1]);
  }
  v3 = (int)(a1 + 5);
  v16[0] = 1;
  sub_6047518C((int)(a1 + 5), (int)(a1 + 1532), &dword_60CA1A94, v16);
  if ( ((unsigned int)&dword_60CA1A80[2] & ~(1615533360 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CA1A80[2]) )
  {
    dword_60CA1AF0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1AF4 = (int)"Pa_Area_00";
    dword_60CA1AF8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1AFC = (int)"Pa_Area_01";
    dword_60CA1B00 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1B04 = (int)"Pa_Area_02";
    dword_60CA1B08 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1B0C = (int)"Pa_GoalArea_00";
    dword_60CA1B10 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1B14 = (int)"Pa_MenuOpenBtn_00";
    dword_60CA1B18 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1B1C = (int)"Pa_MenuCloseBtn_00";
    dword_60CA1B20 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1B24 = (int)"Pa_Reset_00";
    dword_60CA1B28 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1B2C = (int)"Pa_Save_00";
    dword_60CA1B30 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1B34 = (int)"Pa_End_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA1A80[2]);
  }
  v16[0] = 9;
  sub_604756E0((int)(a1 + 5), (int)(a1 + 1533), &dword_60CA1AF0, v16);
  if ( ((unsigned int)&dword_60CA1A80[3] & ~(1615533652 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA1A80[3]) )
  {
    dword_60CA1A9C = (int)&sead__SafeStringBase__vtable;
    dword_60CA1AA0 = (int)"B_Btn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA1A80[3]);
  }
  v16[0] = 1;
  sub_604755C4((int)(a1 + 5), (int)(a1 + 1542), &dword_60CA1AF0, (int)&dword_60CA1A9C, v16);
  v16[0] = 1;
  sub_604755C4((int)(a1 + 5), (int)(a1 + 1543), &dword_60CA1AF8, (int)&dword_60CA1A9C, v16);
  v16[0] = 1;
  sub_604755C4((int)(a1 + 5), (int)(a1 + 1544), &dword_60CA1B00, (int)&dword_60CA1A9C, v16);
  v16[0] = 1;
  sub_604755C4((int)(a1 + 5), (int)(a1 + 1545), &dword_60CA1B08, (int)&dword_60CA1A9C, v16);
  v16[0] = 1;
  sub_604755C4((int)(a1 + 5), (int)(a1 + 1546), &dword_60CA1B10, (int)&dword_60CA1A9C, v16);
  v16[0] = 1;
  sub_604755C4((int)(a1 + 5), (int)(a1 + 1547), &dword_60CA1B18, (int)&dword_60CA1A9C, v16);
  v16[0] = 1;
  sub_604755C4((int)(a1 + 5), (int)(a1 + 1548), &dword_60CA1B20, (int)&dword_60CA1A9C, v16);
  v16[0] = 1;
  sub_604755C4((int)(a1 + 5), (int)(a1 + 1549), &dword_60CA1B28, (int)&dword_60CA1A9C, v16);
  v16[0] = 1;
  sub_604755C4((int)(a1 + 5), (int)(a1 + 1550), &dword_60CA1B30, (int)&dword_60CA1A9C, v16);
  sub_604734E4(a1 + 1551, 0);
  sub_60476388(a1 + 1551, (int)(a1 + 5), &dword_60CA1AF0);
  if ( ((unsigned int)&dword_60CA1A80[4] & ~(1615534076 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CA1A80[4]) )
  {
    dword_60CA1AA4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1AA8 = dword_60CA1950;
    sub_60000288();
    _cxa_guard_release(&dword_60CA1A80[4]);
  }
  v7 = *(void (__fastcall **)(_DWORD *, int *, int *))(a1[1551] + 8);
  v16[0] = 1;
  v7(a1 + 1551, &dword_60CA1AA4, v16);
  sub_604734E4(a1 + 2436, 0);
  sub_60476388(a1 + 2436, (int)(a1 + 5), &dword_60CA1AF8);
  if ( ((unsigned int)&dword_60CA1A80[4] & ~(1615534272 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CA1A80[4]) )
  {
    dword_60CA1AA4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1AA8 = dword_60CA1950;
    sub_60000288();
    _cxa_guard_release(&dword_60CA1A80[4]);
  }
  v9 = *(void (__fastcall **)(_DWORD *, int *, int *))(a1[2436] + 8);
  v16[0] = 1;
  v9(a1 + 2436, &dword_60CA1AA4, v16);
  sub_604734E4(a1 + 3321, 0);
  sub_60476388(a1 + 3321, (int)(a1 + 5), &dword_60CA1B00);
  if ( ((unsigned int)&dword_60CA1A80[4] & ~(1615534472 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60CA1A80[4]) )
  {
    dword_60CA1AA4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1AA8 = dword_60CA1950;
    sub_60000288();
    _cxa_guard_release(&dword_60CA1A80[4]);
  }
  v11 = *(void (__fastcall **)(_DWORD *, int *, int *))(a1[3321] + 8);
  v16[0] = 1;
  v11(a1 + 3321, &dword_60CA1AA4, v16);
  v12 = a1 + 4206;
  sub_604734E4(v12, 0);
  sub_60476388(v12, v3, &dword_60CA1B08);
  if ( ((unsigned int)&dword_60CA1A80[4] & ~(1615534668 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60CA1A80[4]) )
  {
    dword_60CA1AA4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1AA8 = dword_60CA1950;
    sub_60000288();
    _cxa_guard_release(&dword_60CA1A80[4]);
  }
  v14 = *(int (__fastcall **)(_DWORD *, int *, int *))(*v12 + 8);
  v16[0] = 1;
  return v14(v12, &dword_60CA1AA4, v16);
}
