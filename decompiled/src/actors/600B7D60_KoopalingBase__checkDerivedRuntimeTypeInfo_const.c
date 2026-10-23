/* KoopalingBase__checkDerivedRuntimeTypeInfo_const
 * address: 0x600B7D60   size: 120   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600261A8
// 
// Overridden by:
//   - 0x600A0E84 : Iggy
bool __fastcall KoopalingBase__checkDerivedRuntimeTypeInfo_const(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C82838 & ~(1611365752 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C82838) )
  {
    dword_60C82834 = (int)&off_60BC1FB4;
    _cxa_guard_release(&dword_60C82838);
  }
  return a2 == &dword_60C82834 || sub_60032268(a2);
}
