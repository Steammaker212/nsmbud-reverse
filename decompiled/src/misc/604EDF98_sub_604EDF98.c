/* sub_604EDF98
 * address: 0x604EDF98   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604EDF98(_DWORD *a1)
{
  _DWORD *v2; // r4
  char v3; // r12
  int v5; // [sp+8h] [bp-20h] BYREF
  const char *v6; // [sp+Ch] [bp-1Ch]

  v2 = a1 + 10;
  sub_604734E4(a1 + 10, 0);
  sub_60475C8C((int)v2);
  v5 = (int)&sead__SafeStringBase__vtable;
  v6 = "InfoWindow.bflyt";
  message_ref(v2, &v5, 0, 0, 0);
  v5 = (int)&sead__SafeStringBase__vtable;
  v6 = "Pa_KeyAssign_00";
  sub_6050A4EC(a1 + 904, v2, &v5, 1, 1);
  a1[914] = 1;
  a1[913] |= 1u;
  if ( ((unsigned int)&dword_60CA62A0 & ~(1615781976 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CA62A0) )
  {
    dword_60CA62CC = (int)&sead__SafeStringBase__vtable;
    dword_60CA62D0 = dword_60CA61AC;
    dword_60CA62D4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA62D8 = dword_60CA61B4;
    dword_60CA62DC = (int)&sead__SafeStringBase__vtable;
    dword_60CA62E0 = dword_60CA61BC;
    sub_60000288();
    _cxa_guard_release(&dword_60CA62A0);
  }
  v5 = 3;
  return sub_60476030((int)v2, &dword_60CA62CC, &v5);
}
