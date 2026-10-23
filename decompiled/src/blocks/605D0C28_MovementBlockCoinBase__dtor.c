/* MovementBlockCoinBase__dtor
 * address: 0x605D0C28   size: 76   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BlockCoinBase : 0x605B6DA0
// 
// Overridden by:
//   - 0x6057BAE4 : CoinBase
//   - 0x60565008 : BlockBase
void __fastcall MovementBlockCoinBase__dtor(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = off_60C093FC;
  ShapedCollider_dtor((ColliderBase *)(a1 + 6120));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
