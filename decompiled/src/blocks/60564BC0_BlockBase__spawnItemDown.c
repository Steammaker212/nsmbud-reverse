/* BlockBase__spawnItemDown
 * address: 0x60564BC0   size: 36   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: MovementBlockCoinBase : 0x605D0AA4
// 
// Overridden by:
//   - 0x6056648C : BrickBlockHuge
//   - 0x60576B90 : BabyYoshiBlock
int __fastcall BlockBase__spawnItemDown(int a1)
{
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 3);
  return BlockBase_onEmptied((ColliderBase *)a1);
}
