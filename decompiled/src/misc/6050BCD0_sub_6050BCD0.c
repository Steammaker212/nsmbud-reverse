/* sub_6050BCD0
 * address: 0x6050BCD0   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050BCD0(int a1, int a2, _DWORD *a3)
{
  _DWORD *v6; // r5
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v11; // [sp+0h] [bp-38h] BYREF
  int v12; // [sp+4h] [bp-34h]
  _DWORD v13[2]; // [sp+8h] [bp-30h] BYREF
  _DWORD v14[2]; // [sp+10h] [bp-28h] BYREF
  _DWORD v15[8]; // [sp+18h] [bp-20h] BYREF

  v6 = (_DWORD *)(a1 + 60);
  sub_604734E4((_DWORD *)(a1 + 60), 0);
  sub_60476388(v6, a2, a3);
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = &byte_60B3BA34;
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = &byte_60B3BA34;
  v15[0] = &sead__SafeStringBase__vtable;
  v15[1] = &byte_60B3BA34;
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = CharaSet_Team_Loop_ref(0);
  sead__SafeStringBase__operator_assign((int)v13, (int)&v11);
  v7 = CharaSet_Team_Loop_ref(1);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = v7;
  (*(void (__fastcall **)(_DWORD *, int *))(v14[0] + 8))(v14, &v11);
  v8 = CharaSet_Team_Loop_ref(2);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = v8;
  (*(void (__fastcall **)(_DWORD *, int *))(v15[0] + 8))(v15, &v11);
  v11 = 3;
  sub_60474848((int)v6, v13, &v11);
  v9 = sub_6050DF0C(a1);
  return sub_6050BDF8(a1, v9);
}
