/* BlockBase__vfCC
 * address: 0x60564BAC   size: 20   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BlockCoinBase : 0x605774C0
// 
// Overridden by: None
void __fastcall BlockBase__vfCC(int a1)
{
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), (CollisionMgr_Sensor *)(a1 + 6968), 3);
}
