/* MovementBlockCoinBase__getRuntimeTypeInfo_const
 * address: 0x605D0BB4   size: 92   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BlockCoinBase : 0x605B6D2C
// 
// Overridden by:
//   - 0x6057BA70 : CoinBase
//   - 0x60564F94 : BlockBase
int *MovementBlockCoinBase__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C88A68 & ~(1616710600 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A68) )
  {
    dword_60C88A64 = (int)&off_60BD4904;
    _cxa_guard_release(&dword_60C88A68);
  }
  return &dword_60C88A64;
}
