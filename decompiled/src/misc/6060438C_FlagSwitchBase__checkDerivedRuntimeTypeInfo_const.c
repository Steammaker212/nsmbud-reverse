/* FlagSwitchBase__checkDerivedRuntimeTypeInfo_const
 * address: 0x6060438C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: MultiStateActor : 0x60009584
// 
// Overridden by:
//   - 0x606061E0 : FlagSwitchRandom
bool __fastcall FlagSwitchBase__checkDerivedRuntimeTypeInfo_const(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB2914 & ~(1616921508 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2914) )
  {
    dword_60CB2910 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB2914);
  }
  return a2 == &dword_60CB2910 || sub_60026DC8(a2);
}
