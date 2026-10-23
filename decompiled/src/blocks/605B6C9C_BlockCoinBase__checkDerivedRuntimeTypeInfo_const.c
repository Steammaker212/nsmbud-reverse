/* BlockCoinBase__checkDerivedRuntimeTypeInfo_const
 * address: 0x605B6C9C   size: 120   group: blocks
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
//   - 0x605D0AB0 : MovementBlockCoinBase
bool __fastcall BlockCoinBase__checkDerivedRuntimeTypeInfo_const(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C7B384 & ~(1616604340 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
  {
    dword_60C7B380 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C7B384);
  }
  return a2 == &dword_60C7B380 || sub_60026DC8(a2);
}
