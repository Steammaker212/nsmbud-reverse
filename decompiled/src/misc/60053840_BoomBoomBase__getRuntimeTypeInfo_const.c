/* BoomBoomBase__getRuntimeTypeInfo_const
 * address: 0x60053840   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600262AC
// 
// Overridden by:
//   - 0x6004F01C : BoomBoomW1
int *BoomBoomBase__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C80584 & ~(1610954836 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C80584) )
  {
    dword_60C80580 = (int)&off_60BC1FB4;
    _cxa_guard_release(dword_60C80584);
  }
  return &dword_60C80580;
}
