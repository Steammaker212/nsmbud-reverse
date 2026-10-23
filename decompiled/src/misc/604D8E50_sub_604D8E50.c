/* sub_604D8E50
 * address: 0x604D8E50   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D8E50(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v6; // [sp+4h] [bp-44h] BYREF
  int v7; // [sp+8h] [bp-40h]
  int v8; // [sp+Ch] [bp-3Ch]
  _DWORD v9[14]; // [sp+10h] [bp-38h] BYREF

  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = &byte_60B3BA34;
  v9[2] = &sead__SafeStringBase__vtable;
  v9[3] = &byte_60B3BA34;
  v9[4] = &sead__SafeStringBase__vtable;
  v9[5] = &byte_60B3BA34;
  v9[6] = &sead__SafeStringBase__vtable;
  v9[7] = &byte_60B3BA34;
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = sub_604DD378(0);
  ((void (__fastcall *)(_DWORD *, int *))off_60BC0240[0])(v9, &v6);
  v8 = 1;
  v2 = sub_604DD378(1);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = v2;
  (*(void (__fastcall **)(_DWORD *, int *))(v9[2 * v8] + 8))(&v9[2 * v8], &v6);
  v8 = 2;
  v3 = sub_604DD378(2);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = v3;
  (*(void (__fastcall **)(_DWORD *, int *))(v9[2 * v8] + 8))(&v9[2 * v8], &v6);
  v8 = 3;
  v4 = sub_604DD378(3);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = v4;
  (*(void (__fastcall **)(_DWORD *, int *))(v9[2 * v8] + 8))(&v9[2 * v8], &v6);
  v6 = 4;
  return sub_60475334(a1 + 44, a1 + 3656, v9, &v6);
}
