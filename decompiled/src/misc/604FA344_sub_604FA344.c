/* sub_604FA344
 * address: 0x604FA344   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FA344(int a1)
{
  _DWORD *v1; // r4
  char v2; // r12
  int v4[6]; // [sp+8h] [bp-18h] BYREF

  v1 = (_DWORD *)(a1 + 40);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60475C8C((int)v1);
  v4[0] = (int)&sead__SafeStringBase__vtable;
  v4[1] = (int)"TalkWindow.bflyt";
  message_ref(v1, v4, 0, 0, 0);
  if ( ((unsigned int)dword_60CA7024 & ~(1615832008 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CA7024) )
  {
    dword_60CA7070 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7074 = dword_60CA6EA8;
    dword_60CA7078 = (int)&sead__SafeStringBase__vtable;
    dword_60CA707C = dword_60CA6EB0;
    dword_60CA7080 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7084 = dword_60CA6EB8;
    dword_60CA7088 = (int)&sead__SafeStringBase__vtable;
    dword_60CA708C = dword_60CA6EC0;
    dword_60CA7090 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7094 = dword_60CA6EC8;
    dword_60CA7098 = (int)&sead__SafeStringBase__vtable;
    dword_60CA709C = dword_60CA6ED0;
    sub_60000288();
    _cxa_guard_release(dword_60CA7024);
  }
  v4[0] = 6;
  return sub_60476030((int)v1, &dword_60CA7070, v4);
}
