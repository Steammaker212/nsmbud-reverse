/* FlagSwitchRandom__checkDerivedRuntimeTypeInfo_const
 * address: 0x606061E0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: FlagSwitchBase : 0x6060438C
// 
// Overridden by: None
bool __fastcall FlagSwitchRandom__checkDerivedRuntimeTypeInfo_const(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB2AB4 & ~(1616929272 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2AB4) )
  {
    dword_60CB2AB0 = (int)&off_60C0EDC8;
    _cxa_guard_release(&dword_60CB2AB4);
  }
  if ( a2 == &dword_60CB2AB0 )
    return 1;
  if ( ((unsigned int)&dword_60CB2914 & ~(1616929364 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB2914) )
    {
      dword_60CB2910 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60CB2914);
    }
  }
  return a2 == &dword_60CB2910 || sub_60026DC8(a2);
}
