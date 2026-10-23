/* sub_60525DBC
 * address: 0x60525DBC   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60525DBC(int a1)
{
  _DWORD *v1; // r4
  char v2; // r12
  int v4; // [sp+8h] [bp-20h] BYREF
  int v5; // [sp+Ch] [bp-1Ch]

  v1 = (_DWORD *)(a1 + 44);
  sub_604734E4((_DWORD *)(a1 + 44), 0);
  (*(void (__fastcall **)(int *))(dword_60CAA318 + 12))(&dword_60CAA318);
  v4 = (int)&sead__SafeStringBase__vtable;
  v5 = dword_60CAA31C;
  sub_60475C8C((int)v1);
  (*(void (__fastcall **)(int *))(dword_60CAA320 + 12))(&dword_60CAA320);
  v4 = (int)&sead__SafeStringBase__vtable;
  v5 = dword_60CAA324;
  message_ref(v1, &v4, 0, 0, 0);
  if ( ((unsigned int)&dword_60CAA2F0 & ~(1616010836 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAA2F0) )
  {
    dword_60CAA400 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA404 = dword_60CA9960;
    dword_60CAA408 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA40C = dword_60CA9968;
    dword_60CAA410 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA414 = dword_60CA9970;
    dword_60CAA418 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA41C = dword_60CA9978;
    dword_60CAA420 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA424 = dword_60CA9980;
    dword_60CAA428 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA42C = dword_60CA9988;
    dword_60CAA430 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA434 = dword_60CA9990;
    dword_60CAA438 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA43C = dword_60CA9998;
    sub_60000288();
    _cxa_guard_release(&dword_60CAA2F0);
  }
  v4 = 8;
  return sub_60476030((int)v1, &dword_60CAA400, &v4);
}
