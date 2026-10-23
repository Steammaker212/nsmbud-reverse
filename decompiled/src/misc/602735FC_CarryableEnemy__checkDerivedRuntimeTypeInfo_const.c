/* CarryableEnemy__checkDerivedRuntimeTypeInfo_const
 * address: 0x602735FC   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x60285164
// 
// Overridden by:
//   - 0x603A5104 : ShellEnemy
bool __fastcall CarryableEnemy__checkDerivedRuntimeTypeInfo_const(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C803F8 & ~(1613182484 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803F8) )
  {
    CarryableEnemy_RTTI = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C803F8);
  }
  if ( a2 == &CarryableEnemy_RTTI )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1613182576 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}
