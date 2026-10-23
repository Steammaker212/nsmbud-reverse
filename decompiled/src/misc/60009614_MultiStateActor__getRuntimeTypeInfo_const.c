/* MultiStateActor__getRuntimeTypeInfo_const
 * address: 0x60009614   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x60003F20
// 
// Overridden by:
//   - 0x602851F4 : Enemy
//   - 0x6060441C : FlagSwitchBase
//   - 0x605B6D2C : BlockCoinBase
int *MultiStateActor__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C7B38C & ~(1610651176 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B38C) )
  {
    MultiStateActor_RTTI = (int)&off_60BC00D4;
    _cxa_guard_release(&dword_60C7B38C);
  }
  return &MultiStateActor_RTTI;
}
