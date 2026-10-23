/* BlockCoinBase__dtor
 * address: 0x605B1BEC   size: 72   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: MultiStateActor : 0x60009688
// 
// Overridden by:
//   - 0x60563170 : MovementBlockCoinBase
Actor *__fastcall BlockCoinBase__dtor(int a1)
{
  *(_DWORD *)a1 = off_60C093FC;
  ShapedCollider_dtor((ColliderBase *)(a1 + 6120));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
