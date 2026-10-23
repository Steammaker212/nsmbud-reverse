/* BossBase__checkDerivedRuntimeTypeInfo_const
 * address: 0x600261A8   size: 212   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x60285164
// 
// Overridden by:
//   - 0x600537B0 : BoomBoomBase
//   - 0x60031C24 : SumoBrosBoss
//   - 0x60078D88 : FinalBowser
//   - 0x600C74E8 : Bowser
//   - 0x600CFCC8 : BowserJrBase
//   - 0x600B7D60 : KoopalingBase
signed int __fastcall BossBase__checkDerivedRuntimeTypeInfo_const(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C7F664 & ~(1610768832 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7F664) )
  {
    dword_60C7F660 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C7F664);
  }
  if ( a2 == &dword_60C7F660 )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1610768924 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  if ( a2 == &Enemy_RTTI )
    return 1;
  else
    return sub_60026DC8(a2);
}
