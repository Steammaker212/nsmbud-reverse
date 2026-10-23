/* sub_6051F1A0
 * address: 0x6051F1A0   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051F1A0(_DWORD *a1)
{
  _DWORD *v2; // r4
  char v3; // r12
  _DWORD v5[2]; // [sp+8h] [bp-28h] BYREF
  int v6; // [sp+10h] [bp-20h] BYREF
  const char *v7; // [sp+14h] [bp-1Ch]

  v2 = a1 + 10;
  sub_604734E4(a1 + 10, 0);
  sub_60475C8C((int)v2);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "RecordList.bflyt";
  message_ref(v2, &v6, (int)(a1 + 937), 0, 0);
  v6 = (int)&sead__SafeStringBase__vtable;
  v5[0] = &sead__SafeStringBase__vtable;
  v7 = "Pa_Close_00";
  v5[1] = "Pa_Icon_00";
  sub_6050A704((int)(a1 + 1447), (int)v2, &v6, v5, 1, 0);
  a1[1457] = 2;
  a1[1456] |= 1u;
  if ( ((unsigned int)dword_60CA9120 & ~(1615983236 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CA9120) )
  {
    dword_60CA916C = (int)&sead__SafeStringBase__vtable;
    dword_60CA9170 = dword_60CA8FD8;
    dword_60CA9174 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9178 = dword_60CA8FE0;
    dword_60CA917C = (int)&sead__SafeStringBase__vtable;
    dword_60CA9180 = dword_60CA8FE8;
    dword_60CA9184 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9188 = dword_60CA8FF0;
    sub_60000288();
    _cxa_guard_release(dword_60CA9120);
  }
  v6 = 4;
  return sub_60476030((int)v2, &dword_60CA916C, &v6);
}
