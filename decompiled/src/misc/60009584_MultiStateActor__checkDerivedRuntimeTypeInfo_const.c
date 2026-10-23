/* MultiStateActor__checkDerivedRuntimeTypeInfo_const
 * address: 0x60009584   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x60003DAC
// 
// Overridden by:
//   - 0x60285164 : Enemy
//   - 0x6060438C : FlagSwitchBase
//   - 0x605B6C9C : BlockCoinBase
int __fastcall MultiStateActor__checkDerivedRuntimeTypeInfo_const(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C7B38C & ~(1610651036 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B38C) )
  {
    MultiStateActor_RTTI = (int)&off_60BC00D4;
    _cxa_guard_release(&dword_60C7B38C);
  }
  if ( a2 == &MultiStateActor_RTTI )
    return 1;
  else
    return sub_60009904(a2);
}
