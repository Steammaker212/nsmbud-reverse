/* sub_6048D43C
 * address: 0x6048D43C   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048D43C(int a1)
{
  char v1; // r12
  int v3; // r4
  int v4; // r5
  int (__fastcall *v5)(int, int, int); // r7
  unsigned int v6; // r0
  int *v7; // r6
  int v8; // t1
  int v9; // r9
  int (__fastcall *v10)(int, int, int); // r6
  int v11; // r5
  int v12; // r0
  float v13; // r2
  int v14; // r0
  float v15; // s0
  float v16; // s2
  float v17; // s4
  float v18; // s6
  float v19; // s2
  float v20; // s0
  float v21; // s4
  float v22; // s0

  if ( ((unsigned int)&dword_60C9FD84[2] & ~(1615385688 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9FD84[2]) )
  {
    dword_60C9FEF0 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FEF4 = (int)"W_ScrollBarTime_00";
    dword_60C9FEF8 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FEFC = (int)"W_ScrollBarCoin_00";
    dword_60C9FF00 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FF04 = (int)"W_ScrollBar1UP_00";
    dword_60C9FF08 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FF0C = (int)"W_ScrollBarSpecial_00";
    sub_60000288();
    _cxa_guard_release(&dword_60C9FD84[2]);
  }
  if ( ((unsigned int)&dword_60C9FD84[3] & ~(1615385856 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9FD84[3]) )
  {
    dword_60C9FF10[0] = (int)&sead__SafeStringBase__vtable;
    dword_60C9FF14 = (int)"Pa_ScrollBtnTime_00";
    dword_60C9FF18 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FF1C = (int)"Pa_ScrollBtnCoin_00";
    dword_60C9FF20 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FF24 = (int)"Pa_ScrollBtn1UP_00";
    dword_60C9FF28 = (int)&sead__SafeStringBase__vtable;
    dword_60C9FF2C = (int)"Pa_ScrollBtnSpecial_00";
    sub_60000288();
    _cxa_guard_release(&dword_60C9FD84[3]);
  }
  v3 = 0;
  v4 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 68) + 16) + 12);
  v5 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v4 + 48);
  v6 = FIELD_U32(a1, 40);
  if ( v6 >= 4 )
    v6 = 0;
  v7 = &dword_60C9FEB0[2 * v6];
  v8 = v7[16];
  v7 += 16;
  (*(void (__fastcall **)(int *))(v8 + 12))(v7);
  v9 = v5(v4, v7[1], 1);
  v10 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v4 + 48);
  if ( FIELD_U32(a1, 40) < 4u )
    v3 = FIELD_U32(a1, 40);
  (*(void (__fastcall **)(int *))(dword_60C9FF10[2 * v3] + 12))(&dword_60C9FF10[2 * v3]);
  v11 = v10(v4, dword_60C9FF10[2 * v3 + 1], 1);
  v12 = (*(int (__fastcall **)(int, const char *, int))(*(_DWORD *)v11 + 48))(v11, "B_Btn_00", 1);
  FIELD_U32(a1, 72) = v11;
  v13 = FIELD_F32(v12, 60);
  v14 = FIELD_U32(a1, 56);
  if ( v14 >= 8 )
  {
    v15 = 0.5;
    v16 = v13;
    v17 = FIELD_F32(v9, 56);
    v18 = -6.0;
LABEL_15:
    v19 = v16 * v15;
    v20 = v17 * v15;
    v21 = v20 - v19;
    FIELD_F32(a1, 88) = v20 - v19;
    v22 = (float)(v19 - v20) + v18;
    FIELD_F32(a1, 92) = v22;
    FIELD_U32(a1, 84) = v14 - 3;
    FIELD_F32(a1, 96) = (float)(v22 - v21) / (float)(v14 - 4);
    return sub_60491118(a1);
  }
  if ( v14 >= 5 )
  {
    v15 = 0.5;
    v16 = v13;
    v17 = FIELD_F32(v9, 56);
    v18 = -9.0;
    goto LABEL_15;
  }
  return sub_60491118(a1);
}
