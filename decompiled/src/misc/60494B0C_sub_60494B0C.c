/* sub_60494B0C
 * address: 0x60494B0C   size: 584   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60494B0C(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v11; // [sp+4h] [bp-6Ch] BYREF
  int v12; // [sp+8h] [bp-68h]
  int v13; // [sp+Ch] [bp-64h]
  _DWORD v14[24]; // [sp+10h] [bp-60h] BYREF

  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = &byte_60B3BA34;
  v14[2] = &sead__SafeStringBase__vtable;
  v14[3] = &byte_60B3BA34;
  v14[4] = &sead__SafeStringBase__vtable;
  v14[5] = &byte_60B3BA34;
  v14[6] = &sead__SafeStringBase__vtable;
  v14[7] = &byte_60B3BA34;
  v14[8] = &sead__SafeStringBase__vtable;
  v14[9] = &byte_60B3BA34;
  v14[10] = &sead__SafeStringBase__vtable;
  v14[11] = &byte_60B3BA34;
  v14[12] = &sead__SafeStringBase__vtable;
  v14[13] = &byte_60B3BA34;
  v14[14] = &sead__SafeStringBase__vtable;
  v14[15] = &byte_60B3BA34;
  v14[16] = &sead__SafeStringBase__vtable;
  v14[17] = &byte_60B3BA34;
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = sub_60496978(0);
  ((void (__fastcall *)(_DWORD *, int *))off_60BC0240[0])(v14, &v11);
  v13 = 1;
  v2 = sub_60496978(1);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = v2;
  (*(void (__fastcall **)(_DWORD *, int *))(v14[2 * v13] + 8))(&v14[2 * v13], &v11);
  v13 = 2;
  v3 = sub_60496978(2);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = v3;
  (*(void (__fastcall **)(_DWORD *, int *))(v14[2 * v13] + 8))(&v14[2 * v13], &v11);
  v13 = 3;
  v4 = sub_60496978(3);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = v4;
  (*(void (__fastcall **)(_DWORD *, int *))(v14[2 * v13] + 8))(&v14[2 * v13], &v11);
  v13 = 4;
  v5 = sub_60496978(4);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = v5;
  (*(void (__fastcall **)(_DWORD *, int *))(v14[2 * v13] + 8))(&v14[2 * v13], &v11);
  v13 = 5;
  v6 = sub_60496978(5);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = v6;
  (*(void (__fastcall **)(_DWORD *, int *))(v14[2 * v13] + 8))(&v14[2 * v13], &v11);
  v13 = 6;
  v7 = sub_60496978(6);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = v7;
  (*(void (__fastcall **)(_DWORD *, int *))(v14[2 * v13] + 8))(&v14[2 * v13], &v11);
  v13 = 7;
  v8 = sub_60496978(7);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = v8;
  (*(void (__fastcall **)(_DWORD *, int *))(v14[2 * v13] + 8))(&v14[2 * v13], &v11);
  v13 = 8;
  v9 = sub_60496978(8);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = v9;
  (*(void (__fastcall **)(_DWORD *, int *))(v14[2 * v13] + 8))(&v14[2 * v13], &v11);
  v11 = 9;
  return sub_60475334(a1 + 36, a1 + 3748, v14, &v11);
}
