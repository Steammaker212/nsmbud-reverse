/* sub_604D5934
 * address: 0x604D5934   size: 1112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D5934(int a1)
{
  char v1; // r12
  int v3; // r10
  int v4; // r5
  _DWORD *v5; // r6
  void (__fastcall *v6)(_DWORD *, int *, int *); // r3
  char v7; // r12
  int v9; // [sp+Ch] [bp-2Ch] BYREF
  int v10; // [sp+10h] [bp-28h] BYREF

  if ( ((unsigned int)&dword_60CA4D00[9] & ~(1615681876 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4D00[9]) )
  {
    dword_60CA4EF0[0] = (int)&sead__SafeStringBase__vtable;
    dword_60CA4EF4 = (int)"Pa_Course_00";
    dword_60CA4EF8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4EFC = (int)"Pa_Course_01";
    dword_60CA4F00 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4F04 = (int)"Pa_Course_02";
    dword_60CA4F08 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4F0C = (int)"Pa_Course_03";
    dword_60CA4F10 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4F14 = (int)"Pa_Course_04";
    dword_60CA4F18 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4F1C = (int)"Pa_Course_05";
    dword_60CA4F20 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4F24 = (int)"Pa_Course_06";
    dword_60CA4F28 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4F2C = (int)"Pa_Course_07";
    dword_60CA4F30 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4F34 = (int)"Pa_Course_08";
    dword_60CA4F38 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4F3C = (int)"Pa_Course_09";
    dword_60CA4F40 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4F44 = (int)"Pa_Course_10";
    dword_60CA4F48 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4F4C = (int)"Pa_Course_11";
    sub_60000288();
    _cxa_guard_release(&dword_60CA4D00[9]);
  }
  if ( ((unsigned int)&dword_60CA4D00[10] & ~(1615682176 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4D00[10]) )
  {
    dword_60CA4DA0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4DA4 = (int)"Level";
    sub_60000288();
    _cxa_guard_release(&dword_60CA4D00[10]);
  }
  v3 = a1 + 60;
  v4 = 0;
  v5 = (_DWORD *)(a1 + 5980);
  do
  {
    sub_604734E4(v5, 0);
    sub_60476388(v5, v3, &dword_60CA4EF0[v4]);
    v6 = *(void (__fastcall **)(_DWORD *, int *, int *))(*v5 + 8);
    v10 = 1;
    v6(v5, &dword_60CA4DA0, &v10);
    v4 += 2;
    v5 += 885;
  }
  while ( v4 != 24 );
  if ( ((unsigned int)&dword_60CA4D00[11] & ~(1615682428 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4D00[11]) )
  {
    dword_60CA4DA8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4DAC = (int)"N_Level_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA4D00[11]);
  }
  v9 = 1;
  sub_6047566C(v3, a1 + 52000, dword_60CA4EF0, &dword_60CA4DA8, &v9);
  v9 = 1;
  sub_6047566C(v3, a1 + 52004, &dword_60CA4EF8, &dword_60CA4DA8, &v9);
  v9 = 1;
  sub_6047566C(v3, a1 + 52008, &dword_60CA4F00, &dword_60CA4DA8, &v9);
  v9 = 1;
  sub_6047566C(v3, a1 + 52012, &dword_60CA4F08, &dword_60CA4DA8, &v9);
  v9 = 1;
  sub_6047566C(v3, a1 + 52016, &dword_60CA4F10, &dword_60CA4DA8, &v9);
  v9 = 1;
  sub_6047566C(v3, a1 + 52020, &dword_60CA4F18, &dword_60CA4DA8, &v9);
  v9 = 1;
  sub_6047566C(v3, a1 + 52024, &dword_60CA4F20, &dword_60CA4DA8, &v9);
  v9 = 1;
  sub_6047566C(v3, a1 + 52028, &dword_60CA4F28, &dword_60CA4DA8, &v9);
  v9 = 1;
  sub_6047566C(v3, a1 + 52032, &dword_60CA4F30, &dword_60CA4DA8, &v9);
  v9 = 1;
  sub_6047566C(v3, a1 + 52036, &dword_60CA4F38, &dword_60CA4DA8, &v9);
  v9 = 1;
  sub_6047566C(v3, a1 + 52040, &dword_60CA4F40, &dword_60CA4DA8, &v9);
  v9 = 1;
  return sub_6047566C(v3, a1 + 52044, &dword_60CA4F48, &dword_60CA4DA8, &v9);
}
