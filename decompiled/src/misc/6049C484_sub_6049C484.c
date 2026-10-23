/* sub_6049C484
 * address: 0x6049C484   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049C484(int a1, int a2)
{
  char v2; // r12
  int *v5; // r2

  if ( ((unsigned int)&dword_60CA09EC[1] & ~(1615447204 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CA09EC[1]) )
  {
    dword_60CA0B20[0] = (int)&sead__SafeStringBase__vtable;
    dword_60CA0B24 = dword_60CA0754;
    dword_60CA0B28 = (int)&sead__SafeStringBase__vtable;
    dword_60CA0B2C = dword_60CA075C;
    dword_60CA0B30 = (int)&sead__SafeStringBase__vtable;
    dword_60CA0B34 = dword_60CA0764;
    dword_60CA0B38 = (int)&sead__SafeStringBase__vtable;
    dword_60CA0B3C = dword_60CA076C;
    dword_60CA0B40 = (int)&sead__SafeStringBase__vtable;
    dword_60CA0B44 = dword_60CA0774;
    dword_60CA0B48 = (int)&sead__SafeStringBase__vtable;
    dword_60CA0B4C = dword_60CA0754;
    sub_60000288();
    _cxa_guard_release(&dword_60CA09EC[1]);
  }
  if ( a2 < 0 )
    v5 = &dword_60CA0778;
  else
    v5 = &dword_60CA0B20[2 * a2];
  return sub_60473DE4((_DWORD *)(a1 + 44), 2u, v5, 0);
}
