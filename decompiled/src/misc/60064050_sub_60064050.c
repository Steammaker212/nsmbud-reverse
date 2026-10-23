/* sub_60064050
 * address: 0x60064050   size: 948   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x60002794
// 
// Overridden by:
//   - 0x6037A76C : ShellEnemy
bool __fastcall sub_60064050(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C810FC & ~(1611022992 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C810FC) )
  {
    dword_60C810F8 = (int)&off_60BC66C8;
    _cxa_guard_release(&dword_60C810FC);
  }
  if ( a2 == &dword_60C810F8 )
    return 1;
  if ( ((unsigned int)&dword_60C803F0 & ~(1611023084 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803F0) )
  {
    dword_60C803EC = (int)&off_60BC321C;
    _cxa_guard_release(&dword_60C803F0);
  }
  if ( a2 == &dword_60C803EC )
    return 1;
  if ( ((unsigned int)&dword_60C803F8 & ~(1611023176 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803F8) )
  {
    CarryableEnemy_RTTI = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C803F8);
  }
  if ( a2 == &CarryableEnemy_RTTI )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1611023268 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}
