/* sub_605236E8
 * address: 0x605236E8   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605236E8(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v6; // [sp+8h] [bp-40h] BYREF
  int v7; // [sp+Ch] [bp-3Ch]
  int (**v8)(); // [sp+10h] [bp-38h] BYREF
  char *v9; // [sp+14h] [bp-34h]
  _DWORD v10[2]; // [sp+18h] [bp-30h] BYREF
  _DWORD v11[2]; // [sp+20h] [bp-28h] BYREF
  _DWORD v12[8]; // [sp+28h] [bp-20h] BYREF

  sub_604734E4(a1, 0);
  sub_60475C8C((int)a1);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "ResultChallengeScreen.bflyt";
  message_ref(a1, &v8, 0, 0, 0);
  v8 = &sead__SafeStringBase__vtable;
  v9 = &byte_60B3BA34;
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = &byte_60B3BA34;
  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = &byte_60B3BA34;
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = &byte_60B3BA34;
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = sub_60523944(0);
  sead__SafeStringBase__operator_assign((int)&v8, (int)&v6);
  v2 = sub_60523944(1);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = v2;
  (*(void (__fastcall **)(_DWORD *, int *))(v10[0] + 8))(v10, &v6);
  v3 = sub_60523944(2);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = v3;
  (*(void (__fastcall **)(_DWORD *, int *))(v11[0] + 8))(v11, &v6);
  v4 = sub_60523944(3);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = v4;
  (*(void (__fastcall **)(_DWORD *, int *))(v12[0] + 8))(v12, &v6);
  v6 = 4;
  return sub_60476030((int)a1, &v8, &v6);
}
