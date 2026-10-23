/* CollisionActor__checkDerivedRuntimeTypeInfo_const
 * address: 0x60003DAC   size: 300   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x6000260C
// 
// Overridden by:
//   - 0x60009584 : MultiStateActor
bool __fastcall CollisionActor__checkDerivedRuntimeTypeInfo_const(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60C7B394 & ~(1610628548 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B394) )
  {
    CollisionActor_RTTI = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B394);
  }
  v4 = 1;
  if ( a2 != &CollisionActor_RTTI )
  {
    if ( ((unsigned int)&dword_60C7B364 & ~(1610628644 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( a2 != &StageActor_RTTI )
    {
      if ( ((unsigned int)&dword_60C7B36C & ~(1610628736 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B36C) )
      {
        Actor_RTTI = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C7B36C);
      }
      return a2 == &Actor_RTTI;
    }
  }
  return v4;
}
