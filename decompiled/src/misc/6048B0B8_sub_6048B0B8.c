/* sub_6048B0B8
 * address: 0x6048B0B8   size: 1032   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048B0B8(_DWORD *a1)
{
  char v1; // r12
  unsigned int v3; // r9
  unsigned int v4; // r0
  int *v5; // r6
  int v6; // r6
  int (__fastcall *v7)(int, int, int); // r8
  int v8; // r0
  int v9; // r0
  unsigned int v10; // r1
  int v11; // r5
  int v12; // r0
  int (__fastcall *v13)(int, int, int); // r4
  int v14; // r0
  int v15; // r0
  unsigned int v16; // r1
  int v17; // r4
  int v18; // r0
  int (__fastcall *v19)(int, int, int); // r4
  int v20; // r0
  int v21; // r0
  unsigned int v22; // r1
  int v23; // r4
  int v24; // r0
  int (__fastcall *v25)(int, int, int); // r4
  int v26; // r0
  int v27; // r0
  unsigned int v28; // r1
  int v29; // r4
  int v30; // r0
  int result; // r0
  int v32; // [sp+28h] [bp-30h]

  if ( ((unsigned int)&dword_60C9FD50[6] & ~(1615376600 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9FD50[6]) )
  {
    dword_60C9FEB0[0] = (int)&sead__SafeStringBase__vtable;
    dword_60C9FEB4 = (int)"L_CategoryListTime_00";
    dword_60C9FEB8 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FEBC = (int)"L_CategoryListCoin_00";
    dword_60C9FEC0 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FEC4 = (int)"L_CategoryList1UP_00";
    dword_60C9FEC8 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FECC = (int)"L_CategoryListSpecial_00";
    sub_60000288();
    _cxa_guard_release(&dword_60C9FD50[6]);
  }
  if ( ((unsigned int)&dword_60C9FD50[7] & ~(1615376768 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9FD50[7]) )
  {
    unk_60C9FDEC = 0;
    unk_60C9FDF0 = 1;
    unk_60C9FDF4 = 2;
    unk_60C9FDF8 = 3;
    _cxa_guard_release(&dword_60C9FD50[7]);
  }
  v3 = 0;
  v32 = a1[13];
  do
  {
    v4 = v3;
    if ( v3 >= 4 )
      v4 = 0;
    v5 = &dword_60C9FEB0[2 * v4];
    (*(void (__fastcall **)(int *))(*v5 + 12))(v5);
    v6 = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(v32 + 12) + 48))(FIELD_U32(v32, 12), v5[1], 1);
    v7 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v6 + 48);
    v8 = sub_60492030(0);
    v9 = v7(v6, v8, 1);
    v10 = v3;
    if ( v3 >= 4 )
      v10 = 0;
    v11 = dword_60C9FDD0[v10 + 7];
    v12 = (*(int (__fastcall **)(int, const char *, int))(*(_DWORD *)v9 + 48))(v9, "B_Btn_00", 1);
    if ( v11 )
      FIELD_U8(v12, 64) &= ~1u;
    else
      a1[1672] = v12;
    v13 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v6 + 48);
    v14 = sub_60492030(1);
    v15 = v13(v6, v14, 1);
    v16 = v3;
    if ( v3 >= 4 )
      v16 = 0;
    v17 = dword_60C9FDD0[v16 + 7];
    v18 = (*(int (__fastcall **)(int, const char *, int))(*(_DWORD *)v15 + 48))(v15, "B_Btn_00", 1);
    if ( v17 == 1 )
      a1[1673] = v18;
    else
      FIELD_U8(v18, 64) &= ~1u;
    v19 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v6 + 48);
    v20 = sub_60492030(2);
    v21 = v19(v6, v20, 1);
    v22 = v3;
    if ( v3 >= 4 )
      v22 = 0;
    v23 = dword_60C9FDD0[v22 + 7];
    v24 = (*(int (__fastcall **)(int, const char *, int))(*(_DWORD *)v21 + 48))(v21, "B_Btn_00", 1);
    if ( v23 == 2 )
      a1[1674] = v24;
    else
      FIELD_U8(v24, 64) &= ~1u;
    v25 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v6 + 48);
    v26 = sub_60492030(3);
    v27 = v25(v6, v26, 1);
    v28 = v3;
    if ( v3 >= 4 )
      v28 = 0;
    v29 = dword_60C9FDD0[v28 + 7];
    v30 = (*(int (__fastcall **)(int, const char *, int))(*(_DWORD *)v27 + 48))(v27, "B_Btn_00", 1);
    if ( v29 == 3 )
      a1[1675] = v30;
    else
      FIELD_U8(v30, 64) &= ~1u;
    result = v3 + 1;
    if ( (int)v3 > 3 )
      result = 4;
    v3 = result;
  }
  while ( result != 4 );
  return result;
}
