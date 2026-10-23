/* sub_6036B2A8
 * address: 0x6036B2A8   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6036B2A8(Enemy *a1)
{
  char v1; // r12

  if ( ((unsigned int)dword_60C95E20 & ~(1614197440 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C95E20) )
  {
    dword_60C95E3C = (int)&sead__SafeStringBase__vtable;
    dword_60C95E40 = (int)"attack_fast";
    dword_60C95E44 = (int)&sead__SafeStringBase__vtable;
    dword_60C95E48 = (int)"attack_slow";
    dword_60C95E4C = (int)&sead__SafeStringBase__vtable;
    dword_60C95E50 = (int)"damage";
    dword_60C95E54 = (int)&sead__SafeStringBase__vtable;
    dword_60C95E58 = (int)"dead";
    dword_60C95E5C = (int)&sead__SafeStringBase__vtable;
    dword_60C95E60 = (int)"fly";
    dword_60C95E64 = (int)&sead__SafeStringBase__vtable;
    dword_60C95E68 = (int)"freeze";
    dword_60C95E6C = (int)&sead__SafeStringBase__vtable;
    dword_60C95E70 = (int)"turn";
    sub_60000288();
    _cxa_guard_release(dword_60C95E20);
  }
  if ( a1[1]._._._._.heap != 3 )
  {
    a1[1]._._._._.heap = 3;
    sub_60421AD4(a1[1]._._._._.vtable);
  }
  sub_6036A904((int)a1);
  return Enemy__beginState_DieFall(a1);
}
