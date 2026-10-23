/* BossBase__vf32C
 * address: 0x600267FC   size: 20   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x600519C0 : BoomBoomBase
//   - 0x6003129C : SumoBrosBoss
//   - 0x60076288 : FinalBowser
//   - 0x600CF208 : BowserJrBase
//   - 0x600B1E20 : KoopalingBase
int __fastcall BossBase__vf32C(int a1)
{
  return (*(int (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &Enemy__StateID_JumpKill);
}
