/* Enemy__checkDerivedRuntimeTypeInfo_const
 * address: 0x60285164   size: 120   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: MultiStateActor : 0x60009584
// 
// Overridden by:
//   - 0x60259A58 : Amp
//   - 0x6027869C : Fuzzy
//   - 0x602AE6E4 : FireSnake
//   - 0x602D757C : SledgeBro
//   - 0x6029ED8C : Thwomp
//   - 0x60317E3C : DryBones
//   - 0x6033E3C4 : GoombaBase
//   - 0x603848C8 : Pokey
//   - 0x603DFE38 : RiverPiranha
//   - 0x6062448C : FixedIcicle
//   - 0x60267320 : BrosBase
//   - 0x600261A8 : BossBase
//   - 0x602735FC : CarryableEnemy
//   - 0x603119AC : KaniboTama
//   - 0x603103F4 : Kanibo
bool __fastcall Enemy__checkDerivedRuntimeTypeInfo_const(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C7B430 & ~(1613255036 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
  {
    Enemy_RTTI = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C7B430);
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}
