/* Enemy__getRuntimeTypeInfo_const
 * address: 0x602851F4   size: 92   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: MultiStateActor : 0x60009614
// 
// Overridden by:
//   - 0x60259B5C : Amp
//   - 0x602787A0 : Fuzzy
//   - 0x602AE7E8 : FireSnake
//   - 0x602D7680 : SledgeBro
//   - 0x6029EE90 : Thwomp
//   - 0x60317F40 : DryBones
//   - 0x6033E4C8 : GoombaBase
//   - 0x603849CC : Pokey
//   - 0x603DFF3C : RiverPiranha
//   - 0x60624590 : FixedIcicle
//   - 0x60267424 : BrosBase
//   - 0x600262AC : BossBase
//   - 0x60273700 : CarryableEnemy
//   - 0x60311AB0 : KaniboTama
//   - 0x603104F8 : Kanibo
int *Enemy__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C7B430 & ~(1613255176 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
  {
    Enemy_RTTI = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C7B430);
  }
  return &Enemy_RTTI;
}
