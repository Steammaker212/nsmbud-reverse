/* sub_60516B18
 * address: 0x60516B18   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60516B18(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v9; // [sp+0h] [bp-58h] BYREF
  int v10; // [sp+4h] [bp-54h]
  _DWORD v11[2]; // [sp+8h] [bp-50h] BYREF
  _DWORD v12[2]; // [sp+10h] [bp-48h] BYREF
  _DWORD v13[2]; // [sp+18h] [bp-40h] BYREF
  _DWORD v14[2]; // [sp+20h] [bp-38h] BYREF
  _DWORD v15[2]; // [sp+28h] [bp-30h] BYREF
  _DWORD v16[2]; // [sp+30h] [bp-28h] BYREF
  _DWORD v17[8]; // [sp+38h] [bp-20h] BYREF

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
  v16[0] = &sead__SafeStringBase__vtable;
  v16[1] = &byte_60B3BA34;
  v17[0] = &sead__SafeStringBase__vtable;
  v17[1] = &byte_60B3BA34;
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = sub_605173CC(0);
  ((void (__fastcall *)(_DWORD *, int *))off_60BC0240[0])(v11, &v9);
  v2 = sub_605173CC(1);
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = v2;
  (*(void (__fastcall **)(_DWORD *, int *))(v12[0] + 8))(v12, &v9);
  v3 = sub_605173CC(2);
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = v3;
  (*(void (__fastcall **)(_DWORD *, int *))(v13[0] + 8))(v13, &v9);
  v4 = sub_605173CC(3);
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = v4;
  (*(void (__fastcall **)(_DWORD *, int *))(v14[0] + 8))(v14, &v9);
  v5 = sub_605173CC(4);
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = v5;
  (*(void (__fastcall **)(_DWORD *, int *))(v15[0] + 8))(v15, &v9);
  v6 = sub_605173CC(5);
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = v6;
  (*(void (__fastcall **)(_DWORD *, int *))(v16[0] + 8))(v16, &v9);
  v7 = sub_605173CC(6);
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = v7;
  (*(void (__fastcall **)(_DWORD *, int *))(v17[0] + 8))(v17, &v9);
  v9 = 7;
  return sub_60475334(a1 + 36, a1 + 3644, v11, &v9);
}
