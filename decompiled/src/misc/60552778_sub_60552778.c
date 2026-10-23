/* sub_60552778
 * address: 0x60552778   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60552778(_DWORD *a1)
{
  _DWORD *v2; // r4
  char v3; // r12
  _DWORD v5[2]; // [sp+8h] [bp-28h] BYREF
  int v6; // [sp+10h] [bp-20h] BYREF
  const char *v7; // [sp+14h] [bp-1Ch]

  v2 = a1 + 11;
  sub_604734E4(a1 + 11, 0);
  sub_60475C8C((int)v2);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "StarCoinList.bflyt";
  message_ref(v2, &v6, (int)(a1 + 4470), 0, 0);
  v6 = (int)&sead__SafeStringBase__vtable;
  v5[0] = &sead__SafeStringBase__vtable;
  v7 = "Pa_Close_00";
  v5[1] = "Pa_Icon_00";
  sub_6050A704((int)(a1 + 4983), (int)v2, &v6, v5, 1, 0);
  a1[4993] = 2;
  a1[4992] |= 1u;
  if ( ((unsigned int)dword_60CAD1A0 & ~(1616193628 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CAD1A0) )
  {
    dword_60CAD280 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD284 = dword_60CAD004;
    dword_60CAD288 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD28C = dword_60CAD00C;
    dword_60CAD290 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD294 = dword_60CAD014;
    dword_60CAD298 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD29C = dword_60CAD01C;
    dword_60CAD2A0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD2A4 = dword_60CAD024;
    sub_60000288();
    _cxa_guard_release(dword_60CAD1A0);
  }
  v6 = 5;
  return sub_60476030((int)v2, &dword_60CAD280, &v6);
}
