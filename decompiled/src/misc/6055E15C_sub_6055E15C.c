/* sub_6055E15C
 * address: 0x6055E15C   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055E15C(_DWORD *a1)
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
  v7 = "WarpSelectWindow.bflyt";
  message_ref(v2, &v6, (int)(a1 + 933), 0, 0);
  v6 = (int)&sead__SafeStringBase__vtable;
  v5[0] = &sead__SafeStringBase__vtable;
  v7 = "Pa_Return_00";
  v5[1] = "Pa_Icon_00";
  sub_6050A704((int)(a1 + 1544), (int)v2, &v6, v5, 1, 0);
  a1[1554] = 2;
  a1[1553] |= 1u;
  if ( ((unsigned int)dword_60CAE040 & ~(1616241216 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CAE040) )
  {
    dword_60CAE0D8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE0DC = dword_60CADD24;
    dword_60CAE0E0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE0E4 = dword_60CADD2C;
    dword_60CAE0E8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE0EC = dword_60CADD34;
    dword_60CAE0F0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE0F4 = dword_60CADD3C;
    dword_60CAE0F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE0FC = dword_60CADD44;
    dword_60CAE100 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE104 = dword_60CADD4C;
    dword_60CAE108 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE10C = dword_60CADD54;
    sub_60000288();
    _cxa_guard_release(dword_60CAE040);
  }
  v6 = 7;
  return sub_60476030((int)v2, &dword_60CAE0D8, &v6);
}
