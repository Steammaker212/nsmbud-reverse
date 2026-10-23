/* FinalBowser__getRuntimeTypeInfo_const
 * address: 0x60078F00   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600262AC
// 
// Overridden by: None
int *FinalBowser__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C81738 & ~(1611108116 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
  {
    dword_60C81734 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C81738);
  }
  return &dword_60C81734;
}
