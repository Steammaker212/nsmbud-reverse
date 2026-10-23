/* sub_6051C668
 * address: 0x6051C668   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051C668(int a1)
{
  int v2; // r0
  int v3; // r0
  int v5; // [sp+0h] [bp-38h] BYREF
  int v6; // [sp+4h] [bp-34h]
  _DWORD v7[2]; // [sp+8h] [bp-30h] BYREF
  _DWORD v8[2]; // [sp+10h] [bp-28h] BYREF
  _DWORD v9[8]; // [sp+18h] [bp-20h] BYREF

  sub_6051C73C();
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = &byte_60B3BA34;
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = &byte_60B3BA34;
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = &byte_60B3BA34;
  v5 = (int)&sead__SafeStringBase__vtable;
  v6 = T_Random_00_T_World_00_T_Round_00_ref(0);
  sead__SafeStringBase__operator_assign((int)v7, (int)&v5);
  v2 = T_Random_00_T_World_00_T_Round_00_ref(1);
  v5 = (int)&sead__SafeStringBase__vtable;
  v6 = v2;
  (*(void (__fastcall **)(_DWORD *, int *))(v8[0] + 8))(v8, &v5);
  v3 = T_Random_00_T_World_00_T_Round_00_ref(2);
  v5 = (int)&sead__SafeStringBase__vtable;
  v6 = v3;
  (*(void (__fastcall **)(_DWORD *, int *))(v9[0] + 8))(v9, &v5);
  v5 = 3;
  return sub_60475334(a1 + 36, a1 + 3664, v7, &v5);
}
