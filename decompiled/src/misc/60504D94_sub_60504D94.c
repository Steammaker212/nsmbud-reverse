/* sub_60504D94
 * address: 0x60504D94   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60504D94(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v8; // [sp+0h] [bp-50h] BYREF
  int v9; // [sp+4h] [bp-4Ch]
  _DWORD v10[2]; // [sp+8h] [bp-48h] BYREF
  _DWORD v11[2]; // [sp+10h] [bp-40h] BYREF
  _DWORD v12[2]; // [sp+18h] [bp-38h] BYREF
  _DWORD v13[2]; // [sp+20h] [bp-30h] BYREF
  _DWORD v14[2]; // [sp+28h] [bp-28h] BYREF
  _DWORD v15[8]; // [sp+30h] [bp-20h] BYREF

  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = &byte_60B3BA34;
  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = &byte_60B3BA34;
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = &byte_60B3BA34;
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = &byte_60B3BA34;
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = &byte_60B3BA34;
  v15[0] = &sead__SafeStringBase__vtable;
  v15[1] = &byte_60B3BA34;
  v8 = (int)&sead__SafeStringBase__vtable;
  v9 = sub_60505B8C(0);
  ((void (__fastcall *)(_DWORD *, int *))off_60BC0240[0])(v10, &v8);
  v2 = sub_60505B8C(1);
  v8 = (int)&sead__SafeStringBase__vtable;
  v9 = v2;
  (*(void (__fastcall **)(_DWORD *, int *))(v11[0] + 8))(v11, &v8);
  v3 = sub_60505B8C(2);
  v8 = (int)&sead__SafeStringBase__vtable;
  v9 = v3;
  (*(void (__fastcall **)(_DWORD *, int *))(v12[0] + 8))(v12, &v8);
  v4 = sub_60505B8C(3);
  v8 = (int)&sead__SafeStringBase__vtable;
  v9 = v4;
  (*(void (__fastcall **)(_DWORD *, int *))(v13[0] + 8))(v13, &v8);
  v5 = sub_60505B8C(4);
  v8 = (int)&sead__SafeStringBase__vtable;
  v9 = v5;
  (*(void (__fastcall **)(_DWORD *, int *))(v14[0] + 8))(v14, &v8);
  v6 = sub_60505B8C(5);
  v8 = (int)&sead__SafeStringBase__vtable;
  v9 = v6;
  (*(void (__fastcall **)(_DWORD *, int *))(v15[0] + 8))(v15, &v8);
  v8 = 6;
  return sub_6047518C(a1, a1 + 3580, v10, &v8);
}
