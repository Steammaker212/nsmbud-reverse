/* sub_60505FE8
 * address: 0x60505FE8   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60505FE8(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  _DWORD *v10; // r1
  int v11; // r0
  _DWORD *v12; // r1
  int v13; // r0
  int v15; // [sp+0h] [bp-40h] BYREF
  int v16; // [sp+4h] [bp-3Ch]
  int (**v17)(); // [sp+8h] [bp-38h] BYREF
  char *v18; // [sp+Ch] [bp-34h]
  _DWORD v19[2]; // [sp+10h] [bp-30h] BYREF
  _DWORD v20[2]; // [sp+18h] [bp-28h] BYREF
  _DWORD v21[8]; // [sp+20h] [bp-20h] BYREF

  a1[904] = a3;
  sub_605061B8();
  v17 = &sead__SafeStringBase__vtable;
  v18 = &byte_60B3BA34;
  v19[0] = &sead__SafeStringBase__vtable;
  v19[1] = &byte_60B3BA34;
  v20[0] = &sead__SafeStringBase__vtable;
  v20[1] = &byte_60B3BA34;
  v21[0] = &sead__SafeStringBase__vtable;
  v21[1] = &byte_60B3BA34;
  v15 = (int)&sead__SafeStringBase__vtable;
  v16 = sub_60506B54(0);
  sead__SafeStringBase__operator_assign((int)&v17, (int)&v15);
  v6 = sub_60506B54(1);
  v15 = (int)&sead__SafeStringBase__vtable;
  v16 = v6;
  (*(void (__fastcall **)(_DWORD *, int *))(v19[0] + 8))(v19, &v15);
  v7 = sub_60506B54(2);
  v15 = (int)&sead__SafeStringBase__vtable;
  v16 = v7;
  (*(void (__fastcall **)(_DWORD *, int *))(v20[0] + 8))(v20, &v15);
  v8 = sub_60506B54(3);
  v15 = (int)&sead__SafeStringBase__vtable;
  v16 = v8;
  (*(void (__fastcall **)(_DWORD *, int *))(v21[0] + 8))(v21, &v15);
  v15 = 4;
  sub_60475334((int)a1, (int)(a1 + 900), &v17, &v15);
  v9 = sub_605067A0(1);
  v17 = &sead__SafeStringBase__vtable;
  v18 = (char *)v9;
  sub_60473DE4(a1, 1u, &v17, 0);
  v10 = (_DWORD *)a1[878];
  if ( a1[877] > 1u )
    v10 += 5;
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v10 + 104))(*v10);
  v11 = sub_605067A0(2);
  v17 = &sead__SafeStringBase__vtable;
  v18 = (char *)v11;
  sub_60473DE4(a1, 2u, &v17, 0);
  v12 = (_DWORD *)a1[878];
  if ( a1[877] > 2u )
    v12 += 10;
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v12 + 104))(*v12);
  v13 = sub_605067A0(0);
  v17 = &sead__SafeStringBase__vtable;
  v18 = (char *)v13;
  sub_60473DE4(a1, 0, &v17, 0);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)a1[878] + 104))(*(_DWORD *)a1[878]);
  return ((int (__fastcall *)(_DWORD *, int))loc_60506438)(a1, a5);
}
