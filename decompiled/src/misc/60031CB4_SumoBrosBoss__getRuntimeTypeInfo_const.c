/* SumoBrosBoss__getRuntimeTypeInfo_const
 * address: 0x60031CB4   size: 92   group: misc
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
int *SumoBrosBoss__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C7FBEC & ~(1610816712 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7FBEC) )
  {
    dword_60C7FBE8 = (int)&off_60BC1FB4;
    _cxa_guard_release(&dword_60C7FBEC);
  }
  return &dword_60C7FBE8;
}
