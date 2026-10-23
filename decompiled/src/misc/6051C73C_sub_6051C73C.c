/* sub_6051C73C
 * address: 0x6051C73C   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051C73C(int a1)
{
  _DWORD *v2; // r4
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v9; // [sp+8h] [bp-50h] BYREF
  int v10; // [sp+Ch] [bp-4Ch]
  int (**v11)(); // [sp+10h] [bp-48h] BYREF
  char *v12; // [sp+14h] [bp-44h]
  _DWORD v13[2]; // [sp+18h] [bp-40h] BYREF
  _DWORD v14[2]; // [sp+20h] [bp-38h] BYREF
  _DWORD v15[2]; // [sp+28h] [bp-30h] BYREF
  _DWORD v16[2]; // [sp+30h] [bp-28h] BYREF
  _DWORD v17[8]; // [sp+38h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 36);
  sub_604734E4((_DWORD *)(a1 + 36), 0);
  sub_60475C8C((int)v2);
  v11 = &sead__SafeStringBase__vtable;
  v12 = "PreGameVS.bflyt";
  message_ref(v2, &v11, 0, 0, 0);
  sub_6051C908(a1);
  sub_6051CB4C(a1);
  Pa_VSCoinCount_ref(a1);
  v11 = &sead__SafeStringBase__vtable;
  v12 = &byte_60B3BA34;
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = &byte_60B3BA34;
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = &byte_60B3BA34;
  v15[0] = &sead__SafeStringBase__vtable;
  v15[1] = &byte_60B3BA34;
  v16[0] = &sead__SafeStringBase__vtable;
  v16[1] = &byte_60B3BA34;
  v17[0] = &sead__SafeStringBase__vtable;
  v17[1] = &byte_60B3BA34;
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = WipeIn_Mode_Team_PlayerNum_Loop_Out_ref(0);
  sead__SafeStringBase__operator_assign((int)&v11, (int)&v9);
  v3 = WipeIn_Mode_Team_PlayerNum_Loop_Out_ref(1);
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = v3;
  (*(void (__fastcall **)(_DWORD *, int *))(v13[0] + 8))(v13, &v9);
  v4 = WipeIn_Mode_Team_PlayerNum_Loop_Out_ref(2);
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = v4;
  (*(void (__fastcall **)(_DWORD *, int *))(v14[0] + 8))(v14, &v9);
  v5 = WipeIn_Mode_Team_PlayerNum_Loop_Out_ref(3);
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = v5;
  (*(void (__fastcall **)(_DWORD *, int *))(v15[0] + 8))(v15, &v9);
  v6 = WipeIn_Mode_Team_PlayerNum_Loop_Out_ref(4);
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = v6;
  (*(void (__fastcall **)(_DWORD *, int *))(v16[0] + 8))(v16, &v9);
  v7 = WipeIn_Mode_Team_PlayerNum_Loop_Out_ref(5);
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = v7;
  (*(void (__fastcall **)(_DWORD *, int *))(v17[0] + 8))(v17, &v9);
  v9 = 6;
  return sub_60476030((int)v2, &v11, &v9);
}
