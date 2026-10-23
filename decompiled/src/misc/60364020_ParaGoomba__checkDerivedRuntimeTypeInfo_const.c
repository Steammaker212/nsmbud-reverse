/* ParaGoomba__checkDerivedRuntimeTypeInfo_const
 * address: 0x60364020   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033E3C4
// 
// Overridden by: None
bool __fastcall ParaGoomba__checkDerivedRuntimeTypeInfo_const(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C95934 & ~(1614168120 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C95934) )
  {
    dword_60C95930 = (int)&off_60BC9028;
    _cxa_guard_release(dword_60C95934);
  }
  if ( a2 == &dword_60C95930 )
    return 1;
  if ( ((unsigned int)&dword_60C830E0 & ~(1614168212 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C830E0) )
  {
    dword_60C830DC = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C830E0);
  }
  if ( a2 == &dword_60C830DC )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1614168304 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}
