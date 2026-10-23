/* FlagSwitchRandom__getRuntimeTypeInfo_const
 * address: 0x606062E4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: FlagSwitchBase : 0x6060441C
// 
// Overridden by: None
int *FlagSwitchRandom__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB2AB4 & ~(1616929528 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2AB4) )
  {
    dword_60CB2AB0 = (int)&off_60C0EDC8;
    _cxa_guard_release(&dword_60CB2AB4);
  }
  return &dword_60CB2AB0;
}
