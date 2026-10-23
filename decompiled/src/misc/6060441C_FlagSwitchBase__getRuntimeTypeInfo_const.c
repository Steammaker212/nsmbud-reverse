/* FlagSwitchBase__getRuntimeTypeInfo_const
 * address: 0x6060441C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: MultiStateActor : 0x60009614
// 
// Overridden by:
//   - 0x606062E4 : FlagSwitchRandom
int *FlagSwitchBase__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB2914 & ~(1616921648 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2914) )
  {
    dword_60CB2910 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB2914);
  }
  return &dword_60CB2910;
}
