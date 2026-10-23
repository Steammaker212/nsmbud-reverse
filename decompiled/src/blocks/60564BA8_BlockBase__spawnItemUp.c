/* BlockBase__spawnItemUp
 * address: 0x60564BA8   size: 4   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: MovementBlockCoinBase : 0x605D0A80
// 
// Overridden by:
//   - 0x60566488 : BrickBlockHuge
//   - 0x60576B8C : BabyYoshiBlock
// attributes: thunk
int __fastcall BlockBase__spawnItemUp(ColliderBase *a1)
{
  return BlockBase_onEmptied(a1);
}
