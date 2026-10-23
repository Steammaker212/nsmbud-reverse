/* sub_6048B520
 * address: 0x6048B520   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048B520(int a1)
{
  unsigned int v2; // r4
  int v3; // r0
  unsigned int v4; // r1
  int v5; // r0
  unsigned int v6; // r1
  int v7; // r0
  unsigned int v8; // r1
  int v9; // r0
  int v11; // [sp+4h] [bp-4Ch] BYREF
  int v12; // [sp+8h] [bp-48h]
  unsigned int v13; // [sp+Ch] [bp-44h]
  _DWORD v14[16]; // [sp+10h] [bp-40h] BYREF

  v2 = 0;
  v13 = 0;
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
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = sub_604923E4(0);
  ((void (__fastcall *)(_DWORD *, int *))off_60BC0240[0])(v14, &v11);
  v13 = 1;
  v3 = sub_604923E4(1);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = v3;
  v4 = v13;
  if ( v13 >= 5 )
    v4 = 0;
  (*(void (__fastcall **)(_DWORD *, int *))(v14[2 * v4] + 8))(&v14[2 * v4], &v11);
  v13 = 2;
  v5 = sub_604923E4(2);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = v5;
  v6 = v13;
  if ( v13 >= 5 )
    v6 = 0;
  (*(void (__fastcall **)(_DWORD *, int *))(v14[2 * v6] + 8))(&v14[2 * v6], &v11);
  v13 = 3;
  v7 = sub_604923E4(3);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = v7;
  v8 = v13;
  if ( v13 >= 5 )
    v8 = 0;
  (*(void (__fastcall **)(_DWORD *, int *))(v14[2 * v8] + 8))(&v14[2 * v8], &v11);
  v13 = 4;
  v9 = sub_604923E4(4);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = v9;
  if ( v13 < 5 )
    v2 = v13;
  (*(void (__fastcall **)(_DWORD *, int *))(v14[2 * v2] + 8))(&v14[2 * v2], &v11);
  v11 = 5;
  return sub_60476030(a1 + 36, v14, &v11);
}
