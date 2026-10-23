/* sub_6034D770
 * address: 0x6034D770   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034D770(int a1)
{
  char v1; // r12

  if ( ((unsigned int)algn_60C94CEC & ~(1614075788 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)algn_60C94CEC) )
  {
    dword_60C94D38 = (int)&sead__SafeStringBase__vtable;
    dword_60C94D3C = (int)"walk";
    sub_60000288();
    _cxa_guard_release((__guard *)algn_60C94CEC);
  }
  FIELD_U32(a1, 6836) = 0;
  sub_6040F4B8(FIELD_U32(a1, 6824), &dword_60C94D38, 1);
  return ShellEnemy__vf328(a1);
}
