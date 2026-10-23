/* sub_6048AEB4
 * address: 0x6048AEB4   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048AEB4(int a1)
{
  char v1; // r12
  int v3; // r8
  int v4; // r0
  int *v5; // r6
  int v6; // t1
  int v7; // r6
  int v8; // r7
  int (__fastcall *v9)(int, int, int); // r10
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r0
  int result; // r0
  int v17; // [sp+8h] [bp-30h]

  if ( ((unsigned int)&dword_60C9FD50[5] & ~(1615376084 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9FD50[5]) )
  {
    dword_60C9FE90 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FE94 = (int)"L_CategoryListTime_00";
    dword_60C9FE98 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FE9C = (int)"L_CategoryListCoin_00";
    dword_60C9FEA0 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FEA4 = (int)"L_CategoryList1UP_00";
    dword_60C9FEA8 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FEAC = (int)"L_CategoryListSpecial_00";
    sub_60000288();
    _cxa_guard_release(&dword_60C9FD50[5]);
  }
  v3 = 0;
  v17 = FIELD_U32(a1, 52);
  do
  {
    v4 = v3;
    if ( (unsigned int)v3 >= 4 )
      v4 = 0;
    v5 = &dword_60C9FE50[2 * v4];
    v6 = v5[16];
    v5 += 16;
    (*(void (__fastcall **)(int *))(v6 + 12))(v5);
    v7 = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(v17 + 12) + 48))(FIELD_U32(v17, 12), v5[1], 1);
    v8 = 0;
    do
    {
      v9 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v7 + 48);
      v10 = sub_60491C7C(v8);
      v11 = v9(v7, v10, 1);
      if ( v11 )
        v12 = (*(int (__fastcall **)(int, const char *, int))(*(_DWORD *)v11 + 48))(v11, "B_Btn_00", 1);
      else
        v12 = 0;
      v13 = v3;
      v14 = v8;
      if ( (unsigned int)v8 >= 0x18 )
        v14 = 0;
      if ( (unsigned int)v3 >= 4 )
        v13 = 0;
      *(_DWORD *)(a1 + 96 * v13 + 4 * v14 + 6304) = v12;
      v15 = v8 + 1;
      if ( v8 > 23 )
        v15 = 24;
      v8 = v15;
    }
    while ( v15 != 24 );
    result = v3 + 1;
    if ( v3 > 3 )
      result = 4;
    v3 = result;
  }
  while ( result != 4 );
  return result;
}
