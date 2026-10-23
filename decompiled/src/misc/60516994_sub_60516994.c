/* sub_60516994
 * address: 0x60516994   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60516994(int a1)
{
  _DWORD *v1; // r4
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v7; // [sp+8h] [bp-48h] BYREF
  int v8; // [sp+Ch] [bp-44h]
  int (**v9)(); // [sp+10h] [bp-40h] BYREF
  char *v10; // [sp+14h] [bp-3Ch]
  _DWORD v11[2]; // [sp+18h] [bp-38h] BYREF
  _DWORD v12[2]; // [sp+20h] [bp-30h] BYREF
  _DWORD v13[2]; // [sp+28h] [bp-28h] BYREF
  _DWORD v14[8]; // [sp+30h] [bp-20h] BYREF

  v1 = (_DWORD *)(a1 + 36);
  sub_604734E4((_DWORD *)(a1 + 36), 0);
  sub_60475C8C((int)v1);
  v9 = &sead__SafeStringBase__vtable;
  v10 = "PreGameChallenge.bflyt";
  message_ref(v1, &v9, 0, 0, 0);
  v9 = &sead__SafeStringBase__vtable;
  v10 = &byte_60B3BA34;
  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = &byte_60B3BA34;
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = &byte_60B3BA34;
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = &byte_60B3BA34;
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = &byte_60B3BA34;
  v7 = (int)&sead__SafeStringBase__vtable;
  v8 = WipeIn_LevelNum_Mode_Loop_Out_ref(0);
  sead__SafeStringBase__operator_assign((int)&v9, (int)&v7);
  v2 = WipeIn_LevelNum_Mode_Loop_Out_ref(1);
  v7 = (int)&sead__SafeStringBase__vtable;
  v8 = v2;
  (*(void (__fastcall **)(_DWORD *, int *))(v11[0] + 8))(v11, &v7);
  v3 = WipeIn_LevelNum_Mode_Loop_Out_ref(2);
  v7 = (int)&sead__SafeStringBase__vtable;
  v8 = v3;
  (*(void (__fastcall **)(_DWORD *, int *))(v12[0] + 8))(v12, &v7);
  v4 = WipeIn_LevelNum_Mode_Loop_Out_ref(3);
  v7 = (int)&sead__SafeStringBase__vtable;
  v8 = v4;
  (*(void (__fastcall **)(_DWORD *, int *))(v13[0] + 8))(v13, &v7);
  v5 = WipeIn_LevelNum_Mode_Loop_Out_ref(4);
  v7 = (int)&sead__SafeStringBase__vtable;
  v8 = v5;
  (*(void (__fastcall **)(_DWORD *, int *))(v14[0] + 8))(v14, &v7);
  v7 = 5;
  return sub_60476030((int)v1, &v9, &v7);
}
