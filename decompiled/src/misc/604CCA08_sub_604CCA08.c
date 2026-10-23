/* sub_604CCA08
 * address: 0x604CCA08   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604CCA08(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v7; // [sp+4h] [bp-4Ch] BYREF
  int v8; // [sp+8h] [bp-48h]
  int v9; // [sp+Ch] [bp-44h]
  _DWORD v10[16]; // [sp+10h] [bp-40h] BYREF

  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = &byte_60B3BA34;
  v10[2] = &sead__SafeStringBase__vtable;
  v10[3] = &byte_60B3BA34;
  v10[4] = &sead__SafeStringBase__vtable;
  v10[5] = &byte_60B3BA34;
  v10[6] = &sead__SafeStringBase__vtable;
  v10[7] = &byte_60B3BA34;
  v10[8] = &sead__SafeStringBase__vtable;
  v10[9] = &byte_60B3BA34;
  v7 = (int)&sead__SafeStringBase__vtable;
  v8 = sub_604DA264(0);
  ((void (__fastcall *)(_DWORD *, int *))off_60BC0240[0])(v10, &v7);
  v9 = 1;
  v2 = sub_604DA264(1);
  v7 = (int)&sead__SafeStringBase__vtable;
  v8 = v2;
  (*(void (__fastcall **)(_DWORD *, int *))(v10[2 * v9] + 8))(&v10[2 * v9], &v7);
  v9 = 2;
  v3 = sub_604DA264(2);
  v7 = (int)&sead__SafeStringBase__vtable;
  v8 = v3;
  (*(void (__fastcall **)(_DWORD *, int *))(v10[2 * v9] + 8))(&v10[2 * v9], &v7);
  v9 = 3;
  v4 = sub_604DA264(3);
  v7 = (int)&sead__SafeStringBase__vtable;
  v8 = v4;
  (*(void (__fastcall **)(_DWORD *, int *))(v10[2 * v9] + 8))(&v10[2 * v9], &v7);
  v9 = 4;
  v5 = sub_604DA264(4);
  v7 = (int)&sead__SafeStringBase__vtable;
  v8 = v5;
  (*(void (__fastcall **)(_DWORD *, int *))(v10[2 * v9] + 8))(&v10[2 * v9], &v7);
  v7 = 5;
  return sub_60475334(a1 + 40, a1 + 3764, v10, &v7);
}
