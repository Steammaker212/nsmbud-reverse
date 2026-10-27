/* BlockBase__dtor
 * address: 0x60565008   size: 76   group: blocks
 * sym: BlockBase::~BlockBase() as D0
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: MovementBlockCoinBase : 0x605D0C28
// 
// Overridden by:
//   - 0x60566734 : BrickBlockHuge
//   - 0x60576C10 : BabyYoshiBlock
//   - 0x60569878 : FlyingBlockForAmbush
//   - 0x60568D68 : FlyingBlock
void __fastcall BlockBase__dtor(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = off_60C093FC;
  ShapedCollider_dtor((ColliderBase *)(a1 + 6120));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
