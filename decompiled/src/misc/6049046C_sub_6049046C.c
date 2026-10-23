/* sub_6049046C
 * address: 0x6049046C   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049046C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v10; // [sp+0h] [bp-58h] BYREF
  int v11; // [sp+4h] [bp-54h]
  _DWORD v12[2]; // [sp+8h] [bp-50h] BYREF
  _DWORD v13[2]; // [sp+10h] [bp-48h] BYREF
  _DWORD v14[2]; // [sp+18h] [bp-40h] BYREF
  _DWORD v15[2]; // [sp+20h] [bp-38h] BYREF
  _DWORD v16[2]; // [sp+28h] [bp-30h] BYREF
  _DWORD v17[2]; // [sp+30h] [bp-28h] BYREF
  _DWORD v18[8]; // [sp+38h] [bp-20h] BYREF

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
  v18[0] = &sead__SafeStringBase__vtable;
  v18[1] = &byte_60B3BA34;
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = sub_60492F00(0);
  ((void (__fastcall *)(_DWORD *, int *))off_60BC0240[0])(v12, &v10);
  v2 = sub_60492F00(1);
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = v2;
  (*(void (__fastcall **)(_DWORD *, int *))(v13[0] + 8))(v13, &v10);
  v3 = sub_60492F00(2);
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = v3;
  (*(void (__fastcall **)(_DWORD *, int *))(v14[0] + 8))(v14, &v10);
  v4 = sub_60492F00(3);
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = v4;
  (*(void (__fastcall **)(_DWORD *, int *))(v15[0] + 8))(v15, &v10);
  v5 = sub_60492F00(4);
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = v5;
  (*(void (__fastcall **)(_DWORD *, int *))(v16[0] + 8))(v16, &v10);
  v6 = sub_60492F00(5);
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = v6;
  (*(void (__fastcall **)(_DWORD *, int *))(v17[0] + 8))(v17, &v10);
  v7 = sub_60492F00(6);
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = v7;
  (*(void (__fastcall **)(_DWORD *, int *))(v18[0] + 8))(v18, &v10);
  v10 = 7;
  sub_60474848((int)a1, v12, &v10);
  v8 = sub_60492F00(0);
  v10 = (int)&sead__SafeStringBase__vtable;
  v11 = v8;
  return sub_60473DE4(a1, 4u, &v10, 0);
}
