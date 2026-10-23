/* KoopalingBase__getRuntimeTypeInfo_const
 * address: 0x600B7DF0   size: 92   group: actors
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
//   - 0x600A0F14 : Iggy
int *KoopalingBase__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C82838 & ~(1611365892 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C82838) )
  {
    dword_60C82834 = (int)&off_60BC1FB4;
    _cxa_guard_release(&dword_60C82838);
  }
  return &dword_60C82834;
}
