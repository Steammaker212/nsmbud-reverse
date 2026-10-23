/* sub_604BF24C
 * address: 0x604BF24C   size: 972   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BF24C(int a1)
{
  char v2; // r12
  int v3; // r0
  char v4; // r12
  int v5; // r0
  char v6; // r12
  int v7; // r5
  char v8; // r12
  int v9; // r0
  int (__fastcall *v10)(int, int *, int *); // r3
  int v12; // [sp+4h] [bp-1Ch] BYREF
  int v13; // [sp+8h] [bp-18h] BYREF
  int v14; // [sp+Ch] [bp-14h] BYREF

  sub_604BF6C4();
  if ( ((unsigned int)&dword_60CA2980[2] & ~(1615590000 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2980[2]) )
  {
    dword_60CA29A8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA29AC = (int)"N_Back_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA2980[2]);
  }
  v3 = FIELD_U32(a1, 4);
  v13 = 1;
  sub_6047518C(v3, a1 + 536, &dword_60CA29A8, &v13);
  sub_604BF87C(a1);
  if ( ((unsigned int)&dword_60CA2980[4] & ~(1615590152 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2980[4]) )
  {
    dword_60CA29B0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA29B4 = (int)"B_Pack_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA2980[4]);
  }
  v5 = FIELD_U32(a1, 4);
  v14 = 1;
  sub_60475438(v5, a1 + 2644, &dword_60CA29B0, &v14);
  sub_604BFB80(a1);
  if ( ((unsigned int)dword_60CA2980 & ~(1615590300 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60CA2980) )
  {
    dword_60CA29E0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA29E4 = (int)"Pa_Icon1P_00";
    dword_60CA29E8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA29EC = (int)"Pa_Icon2P_00";
    dword_60CA29F0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA29F4 = (int)"Pa_Icon3P_00";
    dword_60CA29F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA29FC = (int)"Pa_Icon4P_00";
    sub_60000288();
    _cxa_guard_release(dword_60CA2980);
  }
  sub_60506F20(a1 + 35580, FIELD_U32(a1, 4), &dword_60CA29E0);
  sub_60506F20(a1 + 39200, FIELD_U32(a1, 4), &dword_60CA29E8);
  sub_60506F20(a1 + 42820, FIELD_U32(a1, 4), &dword_60CA29F0);
  sub_60506F20(a1 + 46440, FIELD_U32(a1, 4), &dword_60CA29F8);
  sub_6045BF58(a1 + 88, 0);
  sub_609094C4(a1 + 88, 65984, 40, 5);
  sub_6081F2E0(dword_60CC6D78);
  sub_604BFE2C(a1);
  v7 = FIELD_U32(a1, 4);
  FIELD_U32(a1, 9908) = sub_60407280(dword_60C9A1E0);
  sub_604C1758(a1 + 9904, v7);
  sub_604C1AA4(a1 + 9904, v7, a1 + 50060, 4);
  if ( ((unsigned int)&dword_60CA2980[1] & ~(1615590700 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2980[1]) )
  {
    dword_60CA2A20 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2A24 = dword_60CA2794;
    dword_60CA2A28 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2A2C = dword_60CA279C;
    dword_60CA2A30 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2A34 = dword_60CA27A4;
    dword_60CA2A38 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2A3C = dword_60CA27AC;
    dword_60CA2A40 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2A44 = dword_60CA27B4;
    sub_60000288();
    _cxa_guard_release(&dword_60CA2980[1]);
  }
  v9 = FIELD_U32(a1, 4);
  v10 = *(int (__fastcall **)(int, int *, int *))(*(_DWORD *)v9 + 8);
  v12 = 5;
  return v10(v9, &dword_60CA2A20, &v12);
}
