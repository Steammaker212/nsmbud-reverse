/* sub_604CDF1C
 * address: 0x604CDF1C   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604CDF1C(_DWORD *a1)
{
  char v1; // r12
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0

  if ( ((unsigned int)&dword_60CA4D00[3] & ~(1615650616 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4D00[3]) )
  {
    dword_60CA4E88 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4E8C = (int)"Pa_IconA_00";
    dword_60CA4E90 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4E94 = (int)"Pa_IconA_01";
    dword_60CA4E98 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4E9C = (int)"Pa_IconA_02";
    dword_60CA4EA0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4EA4 = (int)"Pa_IconB_00";
    dword_60CA4EA8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4EAC = (int)"Pa_IconB_01";
    dword_60CA4EB0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4EB4 = (int)"Pa_IconB_02";
    sub_60000288();
    _cxa_guard_release(&dword_60CA4D00[3]);
  }
  v3 = operator_new(0xE24u);
  v4 = sub_60506DB0(v3);
  a1[5024] = v4;
  sub_60506F20(v4, a1 + 10, &dword_60CA4E88);
  v5 = operator_new(0xE24u);
  v6 = sub_60506DB0(v5);
  a1[5025] = v6;
  sub_60506F20(v6, a1 + 10, &dword_60CA4E90);
  v7 = operator_new(0xE24u);
  v8 = sub_60506DB0(v7);
  a1[5026] = v8;
  sub_60506F20(v8, a1 + 10, &dword_60CA4E98);
  v9 = operator_new(0xE24u);
  v10 = sub_60506DB0(v9);
  a1[5027] = v10;
  sub_60506F20(v10, a1 + 10, &dword_60CA4EA0);
  v11 = operator_new(0xE24u);
  v12 = sub_60506DB0(v11);
  a1[5028] = v12;
  sub_60506F20(v12, a1 + 10, &dword_60CA4EA8);
  v13 = operator_new(0xE24u);
  v14 = sub_60506DB0(v13);
  a1[5029] = v14;
  return sub_60506F20(v14, a1 + 10, &dword_60CA4EB0);
}
