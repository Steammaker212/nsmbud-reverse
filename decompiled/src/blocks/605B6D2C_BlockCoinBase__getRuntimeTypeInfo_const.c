/* BlockCoinBase__getRuntimeTypeInfo_const
 * address: 0x605B6D2C   size: 92   group: blocks
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
//   - 0x605D0BB4 : MovementBlockCoinBase
int *BlockCoinBase__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C7B384 & ~(1616604480 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
  {
    dword_60C7B380 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C7B384);
  }
  return &dword_60C7B380;
}
