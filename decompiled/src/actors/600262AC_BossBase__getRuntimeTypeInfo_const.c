/* BossBase__getRuntimeTypeInfo_const
 * address: 0x600262AC   size: 92   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602851F4
// 
// Overridden by:
//   - 0x60053840 : BoomBoomBase
//   - 0x60031CB4 : SumoBrosBoss
//   - 0x60078F00 : FinalBowser
//   - 0x600C7660 : Bowser
//   - 0x600CFE40 : BowserJrBase
//   - 0x600B7DF0 : KoopalingBase
int *BossBase__getRuntimeTypeInfo_const()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C7F664 & ~(1610769088 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7F664) )
  {
    dword_60C7F660 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C7F664);
  }
  return &dword_60C7F660;
}
