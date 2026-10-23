/* Goomba__checkDerivedRuntimeTypeInfo_const
 * address: 0x6033B3E0   size: 304   group: actors
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
bool __fastcall Goomba__checkDerivedRuntimeTypeInfo_const(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C830D8 & ~(1614001144 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C830D8) )
  {
    dword_60C830D4 = (int)&off_60BC9028;
    _cxa_guard_release(&dword_60C830D8);
  }
  if ( a2 == &dword_60C830D4 )
    return 1;
  if ( ((unsigned int)&dword_60C830E0 & ~(1614001236 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C830E0) )
  {
    dword_60C830DC = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C830E0);
  }
  if ( a2 == &dword_60C830DC )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1614001328 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}
