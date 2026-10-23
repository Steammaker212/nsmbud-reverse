/* sub_605450E0
 * address: 0x605450E0   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605450E0(_DWORD *a1)
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
  v7 = "SelectMenu.bflyt";
  message_ref(v2, &v6, (int)(a1 + 918), 0, 0);
  v6 = (int)&sead__SafeStringBase__vtable;
  v5[0] = &sead__SafeStringBase__vtable;
  v7 = "Pa_Close_00";
  v5[1] = "Pa_Icon_00";
  sub_6050A704((int)(a1 + 6051), (int)v2, &v6, v5, 1, 0);
  a1[6061] = 2;
  a1[6060] |= 1u;
  if ( ((unsigned int)dword_60CAC380 & ~(1616138692 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CAC380) )
  {
    dword_60CAC3AC = (int)&sead__SafeStringBase__vtable;
    dword_60CAC3B0 = dword_60CABEE8;
    dword_60CAC3B4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC3B8 = dword_60CABEF0;
    dword_60CAC3BC = (int)&sead__SafeStringBase__vtable;
    dword_60CAC3C0 = dword_60CABEF8;
    dword_60CAC3C4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC3C8 = dword_60CABF00;
    dword_60CAC3CC = (int)&sead__SafeStringBase__vtable;
    dword_60CAC3D0 = dword_60CABF08;
    dword_60CAC3D4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC3D8 = dword_60CABF10;
    dword_60CAC3DC = (int)&sead__SafeStringBase__vtable;
    dword_60CAC3E0 = dword_60CABF18;
    sub_60000288();
    _cxa_guard_release(dword_60CAC380);
  }
  v6 = 7;
  return sub_60476030((int)v2, &dword_60CAC3AC, &v6);
}
