/* sub_60504B00
 * address: 0x60504B00   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60504B00(_DWORD *a1, int a2)
{
  char v2; // r12
  unsigned int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v13; // [sp+0h] [bp-58h] BYREF
  int v14; // [sp+4h] [bp-54h]
  _DWORD v15[2]; // [sp+8h] [bp-50h] BYREF
  _DWORD v16[2]; // [sp+10h] [bp-48h] BYREF
  _DWORD v17[2]; // [sp+18h] [bp-40h] BYREF
  _DWORD v18[2]; // [sp+20h] [bp-38h] BYREF
  _DWORD v19[2]; // [sp+28h] [bp-30h] BYREF
  _DWORD v20[2]; // [sp+30h] [bp-28h] BYREF
  _DWORD v21[8]; // [sp+38h] [bp-20h] BYREF

  if ( ((unsigned int)&dword_60CA78E8 & ~(1615874852 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CA78E8) )
  {
    dword_60CA7914 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7918 = (int)"L_CategoryListTime_00";
    dword_60CA791C = (int)&sead__SafeStringBase__vtable;
    dword_60CA7920 = (int)"L_CategoryListCoin_00";
    dword_60CA7924 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7928 = (int)"L_CategoryList1UP_00";
    dword_60CA792C = (int)&sead__SafeStringBase__vtable;
    dword_60CA7930 = (int)"L_CategoryListSpecial_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA78E8);
  }
  sub_604734E4(a1, 0);
  v5 = a1[901];
  if ( v5 >= 4 )
    v5 = 0;
  sub_60476388(a1, a2, (_DWORD *)&unk_60CA78E0 + 2 * v5 + 13);
  v15[0] = &sead__SafeStringBase__vtable;
  v15[1] = &byte_60B3BA34;
  v16[0] = &sead__SafeStringBase__vtable;
  v16[1] = &byte_60B3BA34;
  v17[0] = &sead__SafeStringBase__vtable;
  v17[1] = &byte_60B3BA34;
  v18[0] = &sead__SafeStringBase__vtable;
  v18[1] = &byte_60B3BA34;
  v19[0] = &sead__SafeStringBase__vtable;
  v19[1] = &byte_60B3BA34;
  v20[0] = &sead__SafeStringBase__vtable;
  v20[1] = &byte_60B3BA34;
  v21[0] = &sead__SafeStringBase__vtable;
  v21[1] = &byte_60B3BA34;
  v13 = (int)&sead__SafeStringBase__vtable;
  v14 = sub_605057D8(0);
  ((void (__fastcall *)(_DWORD *, int *))off_60BC0240[0])(v15, &v13);
  v6 = sub_605057D8(1);
  v13 = (int)&sead__SafeStringBase__vtable;
  v14 = v6;
  (*(void (__fastcall **)(_DWORD *, int *))(v16[0] + 8))(v16, &v13);
  v7 = sub_605057D8(2);
  v13 = (int)&sead__SafeStringBase__vtable;
  v14 = v7;
  (*(void (__fastcall **)(_DWORD *, int *))(v17[0] + 8))(v17, &v13);
  v8 = sub_605057D8(3);
  v13 = (int)&sead__SafeStringBase__vtable;
  v14 = v8;
  (*(void (__fastcall **)(_DWORD *, int *))(v18[0] + 8))(v18, &v13);
  v9 = sub_605057D8(4);
  v13 = (int)&sead__SafeStringBase__vtable;
  v14 = v9;
  (*(void (__fastcall **)(_DWORD *, int *))(v19[0] + 8))(v19, &v13);
  v10 = sub_605057D8(5);
  v13 = (int)&sead__SafeStringBase__vtable;
  v14 = v10;
  (*(void (__fastcall **)(_DWORD *, int *))(v20[0] + 8))(v20, &v13);
  v11 = sub_605057D8(6);
  v13 = (int)&sead__SafeStringBase__vtable;
  v14 = v11;
  (*(void (__fastcall **)(_DWORD *, int *))(v21[0] + 8))(v21, &v13);
  v13 = 7;
  return sub_60474848((int)a1, v15, &v13);
}
