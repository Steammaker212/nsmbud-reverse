/* BlockBase__getRuntimeTypeInfo_const
 * address: 0x60564F94   size: 92   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: MovementBlockCoinBase : 0x605D0BB4
// 
// Overridden by:
//   - 0x605666C0 : BrickBlockHuge
//   - 0x60576B9C : BabyYoshiBlock
//   - 0x60569804 : FlyingBlockForAmbush
//   - 0x60568CF4 : FlyingBlock
int *BlockBase__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CAE2F4 & ~(1616269224 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE2F4) )
  {
    dword_60CAE2F0 = (int)&off_60BD48F8;
    _cxa_guard_release(&dword_60CAE2F4);
  }
  return &dword_60CAE2F0;
}
